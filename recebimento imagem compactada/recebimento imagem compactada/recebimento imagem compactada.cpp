
#include <iostream>
#include <WS2tcpip.h>
#include <Windows.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/types_c.h>
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <string>

// Include the Winsock library (lib) file
#pragma comment (lib, "ws2_32.lib")

// Saves us from typing std::cout << etc. etc. etc.
using namespace std;
using namespace cv;
//=================================================================================================
//VARIAVEIS GLOBAIS 
char* lpPixels;
Mat src;
int nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
int nScreenHeight = GetSystemMetrics(SM_CYSCREEN);



//=================================================================================================



DWORD WINAPI ThreadFunc_1(void* data) {
	// thread 1 :)
	namedWindow("output", WINDOW_NORMAL);

	setWindowProperty("output", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
	imshow("output", src);
	waitKey(10000);
	return 0;
}


void main() // We can pass in a command line option!! 
{
	long long int dado1 = 0; long long int dado2 = 0;
	src.create(nScreenHeight, nScreenWidth, CV_8UC3);

	BITMAPINFO MyBMInfo = { 0 };
	MyBMInfo.bmiHeader.biSize = sizeof(MyBMInfo.bmiHeader);
	MyBMInfo.bmiHeader.biWidth = nScreenWidth;
	MyBMInfo.bmiHeader.biHeight = -nScreenHeight;
	MyBMInfo.bmiHeader.biPlanes = 1;
	MyBMInfo.bmiHeader.biBitCount = 24;
	MyBMInfo.bmiHeader.biCompression = BI_RGB;
	MyBMInfo.bmiHeader.biSizeImage = 0;
	MyBMInfo.bmiHeader.biXPelsPerMeter = 0;
	MyBMInfo.bmiHeader.biYPelsPerMeter = 0;
	MyBMInfo.bmiHeader.biClrUsed = 0;
	MyBMInfo.bmiHeader.biClrImportant = 0;

	// Create compatible DC, create a compatible bitmap and copy the screen using BitBlt()
	HDC hdcScreen = GetDC(0);

	HDC hdcCompatible = CreateCompatibleDC(hdcScreen);
	HBITMAP hBmp = CreateCompatibleBitmap(hdcScreen, nScreenWidth, nScreenHeight);
	HGDIOBJ hOldBmp = (HGDIOBJ)SelectObject(hdcCompatible, hBmp);

	BOOL bOK = BitBlt(hdcCompatible, 0, 0, nScreenWidth, nScreenHeight, hdcScreen, 0, 0, SRCCOPY | CAPTUREBLT);

	SelectObject(hdcCompatible, hOldBmp); // always select the previously selected object once done
	// Get the BITMAPINFO structure from the bitmap
	GetDIBits(hdcScreen, hBmp, 0, 0, NULL, &MyBMInfo, DIB_RGB_COLORS);

	// create the bitmap buffer
	lpPixels = new char[MyBMInfo.bmiHeader.biSizeImage];

	MyBMInfo.bmiHeader.biCompression = BI_RGB;
	MyBMInfo.bmiHeader.biBitCount = 24;

	// get the actual bitmap buffer
	GetDIBits(hdcScreen, hBmp, 0, -MyBMInfo.bmiHeader.biHeight, (LPVOID)lpPixels, &MyBMInfo, DIB_RGB_COLORS);


	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int fo1 = 0;
	int fo2 = 0;
	int fo3 = 0;
	int tamanho1 = 0;
	int tamanho2 = 0;
	int tamanho3 = 0;
	int maximo1 = 0;
	int maximo2 = 0;
	int maximo3 = 0;
	int peixe = 0;
	int tilapia = 0;
	int xsalda = 0;
	int var1 = 0;
	int var2 = 0;
	int var3 = 0;
	int passe = 0;
	char** banco1;
	char** banco2;
	char** banco3;
	int tytv = 0;
	int j = 0;
	long long int valores[10];
	int dez = 1;
	int lock = 0;
	valores[0] = 1;
	for (int multi = 1; multi != 9; multi++) {
		valores[multi] = dez * 10;
		dez = dez * 10;

	}

	banco1 = (char**)malloc(1000 * sizeof(char*));
	for (tytv = 0; tytv < 1000; tytv++) {
		banco1[tytv] = (char*)malloc(5002 * sizeof(char));

		for (j = 0; j < 5002; j++) {
			banco1[tytv][j] = 0;
		}
	}
	tytv = 0;
	j = 0;

	banco2 = (char**)malloc(1000 * sizeof(char*));
	for (tytv = 0; tytv < 1000; tytv++) {
		banco2[tytv] = (char*)malloc(5002 * sizeof(char));

		for (j = 0; j < 5002; j++) {
			banco2[tytv][j] = 0;
		}
	}
	tytv = 0;
	j = 0;
	banco3 = (char**)malloc(1000 * sizeof(char*));
	for (tytv = 0; tytv < 1000; tytv++) {
		banco3[tytv] = (char*)malloc(5002 * sizeof(char));

		for (j = 0; j < 5002; j++) {
			banco3[tytv][j] = 0;
		}
	}

	////////////////////////////////////////////////////////////
	// INITIALIZE WINSOCK
	////////////////////////////////////////////////////////////

	// Structure to store the WinSock version. This is filled in
	// on the call to WSAStartup()
	WSADATA data;

	// To start WinSock, the required version must be passed to
	// WSAStartup(). This server is going to use WinSock version
	// 2 so I create a word that will store 2 and 2 in hex i.e.
	// 0x0202
	WORD version = MAKEWORD(2, 2);

	// Start WinSock
	int wsOk = WSAStartup(version, &data);
	if (wsOk != 0)
	{
		// Not ok! Get out quickly
		cout << "Can't start Winsock! " << wsOk;
		return;
	}

	////////////////////////////////////////////////////////////
	// CONNECT TO THE SERVER
	////////////////////////////////////////////////////////////

	// Create a hint structure for the server
	sockaddr_in server;
	server.sin_family = AF_INET; // AF_INET = IPv4 addresses
	server.sin_port = htons(54000); // Little to big endian conversion
	inet_pton(AF_INET, "192.168.15.16", &server.sin_addr); // Convert from string to byte array

	// Socket creation, note that the socket type is datagram
	SOCKET out = socket(AF_INET, SOCK_DGRAM, 0);
	int serverleght = sizeof(server);
	char* buf;
	buf = (char*)malloc(5760 * sizeof(char));
	char* buf1;
	buf1 = (char*)malloc(20 * sizeof(char));
	char* buf2;
	buf2 = (char*)malloc(20 * sizeof(char));
	char* buf3;
	buf3 = (char*)malloc(20 * sizeof(char));
	char* bufA;
	bufA = (char*)malloc(14 * sizeof(char));
	char* bufB;
	bufB = (char*)malloc(14 * sizeof(char));
	char* bufC;
	bufC = (char*)malloc(14 * sizeof(char));

	// Write out to that socket
	string s = "inicio de envio";
	int sendOk = sendto(out, s.c_str(), s.size() + 1, 0, (sockaddr*)&server, sizeof(server));

	if (sendOk == SOCKET_ERROR)
	{
		cout << "That didn't work! " << WSAGetLastError() << endl;
	}


	while (1) {
		for (int dardo = 0; dardo != 12; dardo++) { bufA[0] = 'A'; bufB[dardo] = 'A'; bufC[dardo] = 'A'; }

		int bytesIn = recvfrom(out, buf1, 20, 0, (sockaddr*)&server, &serverleght);
		num1 = (unsigned)buf1[0] * 256;
		num1 = num1 + (unsigned)buf1[1];



		bytesIn = recvfrom(out, buf2, 20, 0, (sockaddr*)&server, &serverleght);
		num2 = (unsigned)buf2[0] * 256;
		num2 = num2 + (unsigned)buf2[1];






		bytesIn = recvfrom(out, buf3, 20, 0, (sockaddr*)&server, &serverleght);
		num3 = (unsigned)buf3[0] * 256;
		num3 = num3 + (unsigned)buf3[1];







		while (dado1 != num1) {
			bytesIn = recvfrom(out, buf, 5002, 0, (sockaddr*)&server, &serverleght);
			banco1[dado1] = buf;
			dado1++;

		}dado1 = 0;
		while (dado1 != num2) {
			bytesIn = recvfrom(out, buf, 5002, 0, (sockaddr*)&server, &serverleght);
			banco2[dado1] = buf;
			dado1++;

		}dado1 = 0;
		while (dado1 != num3) {
			bytesIn = recvfrom(out, buf, 5002, 0, (sockaddr*)&server, &serverleght);
			banco3[dado1] = buf;
			dado1++;

		}dado1 = 0;
		cout << "aqui";


		while (maximo1 <= 2073597) {

			if (banco1[dado1][peixe] == 255) {
				if (peixe == 5000) { dado1++; peixe = 0; }
				peixe++; maximo1++; xsalda = (unsigned)banco1[dado1][peixe]; peixe++; maximo1++; if (peixe == 5000) { dado1++; peixe = 0; }
				for (int coisa = 0; coisa != (unsigned)banco1[dado1][peixe]; coisa++) {
					lpPixels[tilapia] = banco1[dado1][peixe];
					tilapia = tilapia + 3; maximo1++;

				}
			}
			else {
				lpPixels[tilapia] = banco1[dado1][peixe];
			}

			tilapia = tilapia + 3;

			if (peixe == 5000) { dado1++; }
			else { peixe++; } maximo1++;
		}



		//	while (maximo2 != 2073597) {}



		//	while (maximo3 != 2073597) {}









	//		cout << "chegou no final";
		for (int contA = 0; contA != 5000; contA++) { lpPixels[contA] = buf[contA]; }
		SetDIBits(hdcScreen, hBmp, 0, -MyBMInfo.bmiHeader.biHeight, (LPVOID)lpPixels, &MyBMInfo, DIB_RGB_COLORS);
		GetDIBits(hdcScreen, hBmp, 0, -MyBMInfo.bmiHeader.biHeight, src.data, &MyBMInfo, DIB_RGB_COLORS);
		HANDLE thread = CreateThread(NULL, 0, ThreadFunc_1, NULL, 0, NULL);
		//	cout << "imagem exibida" << endl;
		for (int dad = 0; dad != 100; dad++) {}
	}
	// Close the socket
	closesocket(out);

	// Close down Winsock
	WSACleanup();
	ReleaseDC(0, hdcScreen);
	ReleaseDC(0, hdcCompatible);
	DeleteDC(hdcCompatible);
	DeleteDC(hdcScreen);
	DeleteObject(hBmp);
	DeleteObject(hOldBmp);
	//	return 0;
}