#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void hesap(char islem[])
{
	int isIndis,yapilacak;
	char sayi1[10],sayi2[10];
	
	for(int i=0;i<10;i++)
	{
		if(islem[i]=='+' || islem[i]=='-' || islem[i]=='*' || islem[i]=='/')
		{
			isIndis=i;	 			//bu kodu yazmamın sebebi islemin bulundugu indisten baslayarak sifirinci indise kadar olan sayiyi ayri bir diziye atayabilmek
			yapilacak=islem[i];		//ve islemin bulundugu indisten baslayarak bosluk karakterine denk gelene kadar baska bir diziye sayiyi atamak
			break;					//yapilacak=islem[i]  yapmamızın sebebi ise asagida switch case yapisinda hangi islemi yapacagimizi bilmek
		}
	}
	
	for(int j=0;j<isIndis;j++)		//burada islem indisinin oldugu kisimdan sifirinci indise kadar olanki kisim sayi1 dizisine ataniyor
	{
		sayi1[j]=islem[j];
	}
	
	for(int k=isIndis+1;k<=10;k++)	//burada islem indissinden baslayarak artırıyoruz taki bosluga denk gelene kadar 
	{								//10 yazmamızın kalvyeden max islemden sonra 10 basamaklı sayı girilecegini dusunmemız
		if(islem[k]!='\n')
		{
			sayi2[k-isIndis-1]=islem[k];
		}
		else
		{
			break;
		}
	}
	
	int x=atoi(sayi1);				//burada atoi yi kullanmamızın nedeni sayi1 char dizisinin icerisinde bulunan degerleri integer degiskene atayabilmek
	int y=atoi(sayi2);
	
	switch(yapilacak)	
	{
		case '+': cout << x+y;
		break;
		
		case '-': cout << x-y;
		break;
		
		case '*': cout << x*y;
		break;
		
		case '/': cout << x/y;
		break;
	}
}


int main(int argc, char** argv) 
{

	char islem[10];
	cout << "islemi giriniz : " ;
	cin>>islem;		//tek bir islem girilmelidir
	
	hesap(islem);
	
	return 0;
}