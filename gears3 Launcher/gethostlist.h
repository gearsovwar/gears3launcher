#pragma once


#include <string>
#include <winsock2.h>
#include <thread>
#include <regex>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <WS2tcpip.h>
#include <chrono>
#include <sstream>
#include <vcclr.h>
#include "sdatavec.hpp"
#include <fstream>

#pragma comment(lib, "ws2_32.lib")
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#ifndef HOSTLISTNS_HOSTLIST_H
#define HOSTLISTNS_HOSTLIST_H

namespace hostlistns {

	class HostList {

	public:

		static StringContainters::ServerDataVec serverData;



		static void sendGetHostList(System::Net::Sockets::TcpClient^ client);
		      


		static void getHostList();


		static void handleClient(SOCKET clientSocket);


	};






}


#endif