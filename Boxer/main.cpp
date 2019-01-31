#include <iostream>
#include <WinSock2.h>
#include <Windows.h>
#include <WS2tcpip.h>
#include <stdlib.h>
#include <stdio.h>


// For some reasone this thing is needed to use sockets 
// visual studio linker kek-o-thingy
#pragma comment (lib, "Ws2_32.lib")

using namespace std;

int main()
{
	auto socketOne = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	closesocket(socketOne);
	cout << "Hello, world!" << endl;

	int * bla = new int[10];

	for (auto i = 0; i < 10; i++)
	{
		cout << i << " " << bla[i] << endl;
	}
	ZeroMemory(bla, sizeof(bla)*10);
	cout << "==== ====" << endl;
	for (auto i = 0; i < 10; i++)
	{
		cout << i << " " << bla[i] << endl;
	}

	int i = 0;
	cin >> i;

	return 0;
}