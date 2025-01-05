#include <iostream>
#include <WS2tcpip.h>
#include <windows.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

// Include the Winsock library (lib) file
#pragma comment (lib, "ws2_32.lib")

// Saves us from typing std::cout << etc. etc. etc.
using namespace std;
//==================================================================================================
//  VARIAVEIS GLOBAIS
unsigned char* lpPixels;
unsigned char* lpPixels2;
unsigned char* lpPixels3;
unsigned int** valorLista255A1;
unsigned int** valorLista255A2;
unsigned int** valorLista255A3;
unsigned char* dados1;
unsigned char* dados2;
unsigned char* dados3;
unsigned char* pass;
unsigned char* pass2;
unsigned char* pass3;
unsigned char* env1;
unsigned char* env2;
unsigned char* env3;
unsigned char* en;
unsigned char* en1;
unsigned char* en2;
long long int ktamanho1 = 0;
long long int ktamanho2 = 0;
long long int ktamanho3 = 0;
unsigned int tamanho1 = 0;
unsigned int tamanho2 = 0;
unsigned int tamanho3 = 0;
long long int vezes1 = 0;
long long int vezes2 = 0;
long long int vezes3 = 0;
long long int n1 = 0;
long long int n2 = 0;
long long int n3 = 0;
unsigned char ultimo1 = 0;
unsigned char ultimo2 = 0;
unsigned char ultimo3 = 0;
unsigned char atual1 = 0;
unsigned char atual2 = 0;
unsigned char atual3 = 0;
unsigned int num1 = 0;
int num2 = 0;
int num3 = 0;
long long int valores[10];
int dez = 1;
int seletor = 0;
int vet1 = 0; int vet2 = 0; int vet3 = 0;
long long int contagemVet1 = 0; long long int contagemVet2 = 0; long long int contagemVet3 = 0;
long long int total1 = 0; long long int total2 = 0; long long int total3 = 0;
long long int somador1 = 0; long long int somador2 = 0; long long int somador3 = 0;
//===================================================================================================
//      HOLOMOGAÇÃO DE REPETIÇÕES E CRIAÇÃO DE LISTA

//=======================================================================================================
//=======================================================================================================
void inteiroParaBinario() {


	if(seletor==1){}if (seletor == 2) {}if (seletor == 3) {}




}

DWORD WINAPI vetor1(void* data) {
	// thread 1 :)
	//  255 , NUMERO DE VEZES , O NUMERO QUE ESTA NO ARRAY
	contagemVet3 = 0;
	while (contagemVet1 <= 2073500) {
	if (lpPixels[contagemVet1] == 255) { lpPixels[contagemVet1] = 254; }
	if (lpPixels[contagemVet1] == 1) { lpPixels[contagemVet1] = 0; }
		contagemVet1 = contagemVet1 + 3;
	}contagemVet1 = 0;
	ultimo1 = lpPixels[0];
	valores[0] = 1;
	while (contagemVet1 <= 2073500) {
		contagemVet1 = contagemVet1 + 3;
		if (ultimo1 == lpPixels[contagemVet1]) {
			valores[0] = valores[0] + 1;
					}
		if (ultimo1 != lpPixels[contagemVet1]) {
			if (valores[0] > 3) {
				valorLista255A1[lpPixels[ultimo1]][valores[0]] = 1;
				pass[somador1] = 255; somador1++; pass[somador1] = valores[0]; somador1++; pass[somador1] = ultimo1; somador1++; valores[0] = 1; ultimo1 = lpPixels[contagemVet1];
			}
			if (valores[0] <= 3) {
				while (valores[0] != 0) { pass[somador1] = ultimo1; somador1++; valores[0]--; }
				valores[0] = 1; ultimo1 = lpPixels[contagemVet1];
			}
		}
		if (valores[0] > 253) {
			pass[somador1] = 255; somador1++; pass[somador1] = valores[0]; somador1++; pass[somador1] = ultimo1; somador1++; valores[0] = 1; ultimo1 = lpPixels[contagemVet1];
		}
	}
	if (valores[0] <= 3){
		while (valores[0] != 0) { pass[somador1] = ultimo1; somador1++; valores[0]--; }
		valores[0] = 1; ultimo1 = lpPixels[contagemVet1];
	}
	if(valores[0]>3){ pass[somador1] = 255; somador1++; pass[somador1] = valores[0]; somador1++; pass[somador1] = ultimo1; somador1++; valores[0] = 1; ultimo1 = lpPixels[contagemVet1]; }
	
	
	vet1 = 1;
	return 0;
}

DWORD WINAPI vetor2(void* data) {
	// thread 2 :)
	contagemVet3 = 1;
	while (contagemVet2 <= 2073500) {
	if (lpPixels2[contagemVet2] == 255) { lpPixels2[contagemVet2] = 254; }
	if (lpPixels2[contagemVet2] == 1) { lpPixels2[contagemVet2] = 0; }
		contagemVet2 = contagemVet2 + 3;
	}contagemVet2 = 1;
	ultimo2 = lpPixels[1];
	valores[1] = 1;
	while(contagemVet2 <= 2073500) {
		contagemVet2 = contagemVet2 + 3;
		if (ultimo2 == lpPixels[contagemVet2]) {
			valores[1] = valores[1] + 1;
		}
		if (ultimo2 != lpPixels[contagemVet2]) {
			if (valores[1] > 3) {
				valorLista255A2[lpPixels[ultimo2]][valores[1]] = 1;
				pass2[somador2] = 255; somador2++; pass2[somador2] = valores[1]; somador2++; pass2[somador2] = ultimo2; somador2++; valores[1] = 1; ultimo2 = lpPixels[contagemVet2];
			}
			if (valores[1] <= 3) {
				while (valores[1] != 0) { pass2[somador2] = ultimo2; somador2++; valores[1]--; }
				valores[1] = 1; ultimo2 = lpPixels[contagemVet2];
			}
		}
		if (valores[1] > 253) {
			pass2[somador2] = 255; somador2++; pass2[somador2] = valores[1]; somador2++; pass2[somador2] = ultimo2; somador2++; valores[1] = 1; ultimo2 = lpPixels[contagemVet2];
		}
	}
	if (valores[1] <= 3) {
		while (valores[1] != 0) { pass2[somador2] = ultimo2; somador2++; valores[1]--; }
		valores[1] = 1; ultimo2 = lpPixels[contagemVet2];
	}
	if (valores[1] > 3) { pass2[somador2] = 255; somador2++; pass2[somador2] = valores[1]; somador2++; pass2[somador2] = ultimo2; somador2++; valores[1] = 1; ultimo2 = lpPixels[contagemVet2]; }



	vet2 = 1;
	return 0;
}

DWORD WINAPI vetor3(void* data) {
	// thread 3 :)
	contagemVet3 = 2;
	while (contagemVet3 <= 2073500) {
		if (lpPixels3[contagemVet3] == 255) { lpPixels3[contagemVet3] = 254; }
		if (lpPixels3[contagemVet3] == 1) { lpPixels3[contagemVet3] = 0; }
		contagemVet3 = contagemVet3 + 3;
	}contagemVet3 = 2;
	ultimo3 = lpPixels[2];
	valores[2] = 1;
	while (contagemVet3 <= 2073500) {
		contagemVet3 = contagemVet3 + 3;
		if (ultimo3 == lpPixels[contagemVet3]) {
			valores[2] = valores[2] + 1;
		}
		if (ultimo3 != lpPixels[contagemVet3]) {
			if (valores[2] > 3) {
				valorLista255A3[lpPixels[ultimo3]][valores[2]] = 1;
				pass3[somador3] = 255; somador3++; pass3[somador3] = valores[2]; somador3++; pass3[somador3] = ultimo3; somador3++; valores[2] = 1; ultimo3 = lpPixels[contagemVet3];
			}
			if (valores[2] <= 3) {
				while (valores[2] != 0) { pass3[somador3] = ultimo3; somador3++; valores[2]--; }
				valores[2] = 1; ultimo3 = lpPixels[contagemVet3];
			}
		}
		if (valores[2] > 253) {
			pass3[somador3] = 255; somador3++; pass3[somador3] = valores[2]; somador3++; pass3[somador3] = ultimo3; somador3++; valores[2] = 1; ultimo3 = lpPixels[contagemVet3];
		}
	}
	if (valores[2] <= 3) {
		while (valores[2] != 0) { pass3[somador3] = ultimo3; somador3++; valores[2]--; }
		valores[2] = 1; ultimo3 = lpPixels[contagemVet3];
	}
	if (valores[2] > 3) { pass3[somador3] = 255; somador3++; pass3[somador3] = valores[2]; somador3++; pass3[somador3] = ultimo3; somador3++; valores[2] = 1; ultimo3 = lpPixels[contagemVet3]; }




	vet3 = 1;
	return 0;
}


int main()
{
	//Sleep(6000);
	////////////////////////////////////////////////////////////
	// INITIALIZE WINSOCK
	////////////////////////////////////////////////////////////
	WSADATA data;
	WORD version = MAKEWORD(2, 2);

	// Start WinSock
	int wsOk = WSAStartup(version, &data);
	if (wsOk != 0)
	{
		// Not ok! Get out quickly
		cout << "Can't start Winsock! " << wsOk;
		return 0;
	}

	////////////////////////////////////////////////////////////
	// SOCKET CREATION AND BINDING
	////////////////////////////////////////////////////////////
	SOCKET in = socket(AF_INET, SOCK_DGRAM, 0);
	sockaddr_in serverHint;
	serverHint.sin_addr.S_un.S_addr = ADDR_ANY;
	serverHint.sin_family = AF_INET; 
	serverHint.sin_port = htons(54000);
	if (bind(in, (sockaddr*)&serverHint, sizeof(serverHint)) == SOCKET_ERROR)
	{
		cout << "Can't bind socket! " << WSAGetLastError() << endl;
		return 0;
	}

	////////////////////////////////////////////////////////////
	// MAIN LOOP SETUP AND ENTRY
	////////////////////////////////////////////////////////////

	sockaddr_in client; // Use to hold the client information (port / ip address)
	int clientLength = sizeof(client); // The size of the client information
	long long int a = 0; int b = 0; long long int dado0 = 0;
	char buf[1930];
	ZeroMemory(&client, clientLength); // Clear the client structure
	ZeroMemory(buf, 1930); // Clear the receive buffer

	// Wait for message
//	int bytesIn = recvfrom(in, buf, 1930, 0, (sockaddr*)&client, &clientLength);
//	char clientIp[256]; // Create enough space to convert the address byte array
//	ZeroMemory(clientIp, 256); // to string of characters
	
//	cout << "Message recv from " << clientIp << " : " << buf << endl;

	dados1 = (unsigned char*)malloc(64 * sizeof(unsigned char));
	dados2 = (unsigned char*)malloc(64 * sizeof(unsigned char));
	dados3 = (unsigned char*)malloc(64 * sizeof(unsigned char));
	pass = (unsigned char*)malloc(5000000 * sizeof(unsigned char));
	pass2 = (unsigned char*)malloc(5000000 * sizeof(unsigned char));
	pass3 = (unsigned char*)malloc(5000000 * sizeof(unsigned char));
	env1 = (unsigned char*)malloc(5002 * sizeof(unsigned char));
	env2 = (unsigned char*)malloc(5002 * sizeof(unsigned char));
	env3 = (unsigned char*)malloc(5002 * sizeof(unsigned char));
	en = (unsigned char*)malloc(64 * sizeof(unsigned char));
	en1 = (unsigned char*)malloc(64 * sizeof(unsigned char));
	en2 = (unsigned char*)malloc(64 * sizeof(unsigned char));
	
	
	int variavelDeinicio1 = 0;
	int variavelDeinicio2 = 0;
	int valormais1000 = 0;
	int numerond = 0;

	valorLista255A1 = (unsigned int **)malloc(300 * sizeof(unsigned int*));
	for (variavelDeinicio1 = 0; variavelDeinicio1 < 300; variavelDeinicio1++) {
		valorLista255A1[variavelDeinicio1] = (unsigned int*)malloc(300 * sizeof(unsigned int));

		for (variavelDeinicio2 = 0; variavelDeinicio2 < 300; variavelDeinicio2++) {
			valorLista255A1[variavelDeinicio1][variavelDeinicio2] = 0;
		}
	}
	valorLista255A2 = (unsigned int**)malloc(300 * sizeof(unsigned int*));
	for (variavelDeinicio1 = 0; variavelDeinicio1 < 300; variavelDeinicio1++) {
		valorLista255A2[variavelDeinicio1] = (unsigned int*)malloc(300 * sizeof(unsigned int));

		for (variavelDeinicio2 = 0; variavelDeinicio2 < 300; variavelDeinicio2++) {
			valorLista255A2[variavelDeinicio1][variavelDeinicio2] = 0;
		}
	}
	valorLista255A3 = (unsigned int**)malloc(300 * sizeof(unsigned int*));
	for (variavelDeinicio1 = 0; variavelDeinicio1 < 300; variavelDeinicio1++) {
		valorLista255A3[variavelDeinicio1] = (unsigned int*)malloc(300 * sizeof(unsigned int));

		for (variavelDeinicio2 = 0; variavelDeinicio2 < 300; variavelDeinicio2++) {
			valorLista255A3[variavelDeinicio1][variavelDeinicio2] = 0;
		}
	}
	//
	

	int nScreenWidth = GetSystemMetrics(SM_CXSCREEN);
	int nScreenHeight = GetSystemMetrics(SM_CYSCREEN);

	for (int delta = 0; delta != 63; delta++) {
		dados1[delta] = 0;
		dados2[delta] = 0;
		dados3[delta] = 0;
	}
	for (int delta = 0; delta != 4999999; delta++) {
		pass[delta] = 0;
		pass2[delta] = 0;
		pass3[delta] = 0;
	}

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



	while (true)
	{
		HDC hdcScreen = GetDC(0);

		HDC hdcCompatible = CreateCompatibleDC(hdcScreen);
		HBITMAP hBmp = CreateCompatibleBitmap(hdcScreen, nScreenWidth, nScreenHeight);
		HGDIOBJ hOldBmp = (HGDIOBJ)SelectObject(hdcCompatible, hBmp);
		BOOL bOK = BitBlt(hdcCompatible, 0, 0, nScreenWidth, nScreenHeight, hdcScreen, 0, 0, SRCCOPY | CAPTUREBLT);
		SelectObject(hdcCompatible, hOldBmp); 		
		GetDIBits(hdcScreen, hBmp, 0, 0, NULL, &MyBMInfo, DIB_RGB_COLORS);	
		lpPixels = new unsigned char[MyBMInfo.bmiHeader.biSizeImage];
		lpPixels2 = new unsigned char[MyBMInfo.bmiHeader.biSizeImage];
		lpPixels3 = new unsigned char[MyBMInfo.bmiHeader.biSizeImage];
		MyBMInfo.bmiHeader.biCompression = BI_RGB;
		MyBMInfo.bmiHeader.biBitCount = 24;
		GetDIBits(hdcScreen, hBmp, 0, -MyBMInfo.bmiHeader.biHeight, (LPVOID)lpPixels, &MyBMInfo, DIB_RGB_COLORS);
		lpPixels2 = lpPixels;
		lpPixels3 = lpPixels;

		long long int dado101 = 0;

		//          COMPACTAÇÃO MACRO
		cout << "aqui ";
		HANDLE thread1 = CreateThread(NULL, 0, vetor1, NULL, 0, NULL);
		HANDLE thread2 = CreateThread(NULL, 0, vetor2, NULL, 0, NULL);
		HANDLE thread3 = CreateThread(NULL, 0, vetor3, NULL, 0, NULL);
		volta:
		Sleep(1);
		if (vet1!=1) { goto volta; }
		if (vet2 != 1) { goto volta; }
		if (vet3 != 1) { goto volta; }
		vet1 = 0; vet2 = 0; vet3 = 0;

		cout << "chegou no destino " << endl;
		cout <<"somador1 :"<< somador1 << " somador2 : " << somador2 << " somador3 : " << somador3;
		
		
		//      HOLOMOGAÇÃO DE REPETIÇÕES E CRIAÇÃO DE LISTA

		


		Sleep(1000000);

		// CALCULO DO TAMANHO DO ENVIO 

		ktamanho1 = tamanho1 / 5000;
		ktamanho2 = tamanho2 / 5000;
		ktamanho3 = tamanho3 / 5000;
		ktamanho1 = ktamanho1 + 1;
		ktamanho2 = ktamanho2 + 1;
		ktamanho3 = ktamanho3 + 1;
		cout << "tamanho 5kbyte 1 " << ktamanho1 << "    " << tamanho1 << endl;
		cout << "tamanho 5kbyte 2 " << ktamanho2 << "    " << tamanho2 << endl;
		cout << "tamanho 5kbyte 3 " << ktamanho3 << "    " << tamanho3 << endl;


		// ENVIO DO TAMANHO DA IMAGEM
		

		cout << "aqui";
	//	int sendOk = sendto(in, dados1, 64 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));

		for (int dado090 = 0; dado090 != 100; dado090++);

	//	sendOk = sendto(in, dados2, 64 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));
		for (int dado090 = 0; dado090 != 100; dado090++);


	//	sendOk = sendto(in, dados3, 64 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));
		for (int dado090 = 0; dado090 != 100; dado090++);


		// ENVIO DA IMGEM 

		cout << "aqui 2";
		while (ktamanho1 <= 0) {
			for (int dado10002 = 0; dado10002 != 5000; dado10002++) { env1[dado10002] = pass[dado10002]; }
		//	sendOk = sendto(in, env1, 5000 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));
			ktamanho1 = ktamanho1 - 1;
		}
		while (ktamanho2 <= 0) {
			for (int dado10002 = 0; dado10002 != 5000; dado10002++) { env1[dado10002] = pass[dado10002]; }
		//	sendOk = sendto(in, env2, 5000 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));
			ktamanho2 = ktamanho2 - 1;
		}
		while (ktamanho3 <= 0) {
			for (int dado10002 = 0; dado10002 != 5000; dado10002++) { env1[dado10002] = pass[dado10002]; }
		//	sendOk = sendto(in, env3, 5000 * sizeof(char), 0, (sockaddr*)&client, sizeof(client));
			ktamanho3 = ktamanho3 - 1;
		}
		cout << "FINAL " << endl;
		a = 0;

		ReleaseDC(0, hdcScreen);
		ReleaseDC(0, hdcCompatible);
		DeleteDC(hdcCompatible);
		DeleteDC(hdcScreen);
		DeleteObject(hBmp);
		DeleteObject(hOldBmp);

	}


	// Close socket
	closesocket(in);

	// Shutdown winsock
	WSACleanup();





}