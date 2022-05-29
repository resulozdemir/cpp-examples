#include <iostream>
#include <stdlib.h>  
#include <cstring>
using namespace std;


int buyukSay(char c[], int size);
int kucukSay(char c[], int size);
int harfSay(char c[], int size);
int rakamSay(char c[], int size);
int karakterSay(char c[], int size);
void terseCevir(char c[], int size);

int main()
{
    char myChar[200] = { "ab3cDe /* 123  fGHI@79JKL % mno" };

    cout << "Girmis oldugunuz satirda :" << endl;
    cout << harfSay(myChar, 199) << " adet harf" << endl;
    cout << buyukSay(myChar, 199) << " adet buyuk harf" << endl;
    cout << kucukSay(myChar, 199) << " adet kucuk harf" << endl;
    cout << rakamSay(myChar, 199) << " adet rakam" << endl;
    cout << karakterSay(myChar, 199) << " adet harf olmayan karakter" << endl;

    terseCevir(myChar, 199);
    cout << "Terse cevrilmis sekilde : " << myChar << endl;
}

int buyukSay(char c[], int size)
{
      int count;
    
    for(int i=0;i<size;i++)
	{
		if(c[i]>='A' && c[i]<='Z')
		{
			++count;
		}
	
	}	
	return count;	//7
}

int kucukSay(char c[], int size)
{
        int count;
    
    for(int i=0;i<size;i++)
	{
		if(c[i]>='a' && c[i]<='z')
		{
			++count;
		}
	
	}
	
	return count;	//8
}

int harfSay(char c[], int size)
{
    int count;
    
    for(int i=0;i<size;i++)
	{
		if(c[i]>='a' && c[i]<='z')
		{
			++count;
		}
		else if(c[i]>='A' && c[i]<='Z')
		{
			++count;
		}
	}

	return count;	//15
}

int karakterSay(char c[], int size)
{
     int count;
    
    for(int i=0;i<size;i++)
	{
		if(c[i]=='*' || c[i]=='/' || c[i]=='%' || c[i]=='@')
		{
			++count;
		}
	
	}
	
	return count;		//4
}

int rakamSay(char c[], int size)
{
    int count;
	
	for(int i=0;i<size;i++)
	{
		if(c[i]>='0' && c[i]<='9')
		{
			++count;
		}
	}
	
    return count; //6
}

void terseCevir(char c[], int size)
{
    int boyut = strlen(c);
    char temp;

    for (int i = 0;i < boyut/2;i++) {
        temp = c[i];
        c[i] = c[boyut - i - 1];
        c[boyut - i] = temp;
    }
}