#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


void add();  //FUNCTIONS
void list();
void delete1();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void search();
void login();
void setcolor();

struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;
#endif // MAIN_H_INCLUDED
