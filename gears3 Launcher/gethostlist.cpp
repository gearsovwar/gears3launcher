
#include "gethostlist.h"





using namespace System::Text::RegularExpressions;
using namespace System;
using namespace System::Net;
using namespace System::Text;
using namespace System::Windows::Forms;
using namespace System::Net::Sockets;
using namespace System::Diagnostics;
using namespace System::IO;






StringContainters::ServerDataVec hostlistns::HostList::serverData;



namespace hostlistns {
    

    void HostList::sendGetHostList(TcpClient^ client) {
        try {
            NetworkStream^ stream = client->GetStream();
            String^ message = "gethostlist";
            array<Byte>^ buffer = Encoding::UTF8->GetBytes(message);
            stream->Write(buffer, 0, buffer->Length);
        }
        catch (Exception^ e) {
            // Handle exceptions here
        }
    }

    void HostList::getHostList() {
        WSADATA wsaData;
        int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (result != 0) {
            std::cerr << "WSAStartup failed with error: " << result << std::endl;
            return;
        }

        while (true) {
            TcpClient^ client = gcnew TcpClient("127.0.0.1", 11000);
            sendGetHostList(client);
            NetworkStream^ stream = client->GetStream();
            array<Byte>^ buffer = gcnew array<Byte>(1024);
            int bytesRead = 0;

            // Receive the server's response
            try {
                bytesRead = stream->Read(buffer, 0, buffer->Length);
            }
            catch (Exception^ e) {
                // Handle exceptions here
            }

            if (bytesRead > 0) {
                String^ message = Encoding::UTF8->GetString(buffer, 0, bytesRead);
                msclr::interop::marshal_context context;
                std::string receivedMessage = context.marshal_as<std::string>(message);
                std::time_t currentTime = std::time(nullptr);
                hostlistns::HostList::serverData.add(receivedMessage);
                
                // Continue processing or handling the received message as needed

                // Close the client connection
                client->Close();
            }

            // Time before sending next request
            std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        }

        // Cleanup Winsock
        WSACleanup();
    }
}
