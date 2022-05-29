#include <iostream>
#include <string>

using namespace std;



int buyukSay(string s);
int kucukSay(string s);
int harfSay(string s);
int rakamSay(string s);
int karakterSay(string s);
int sayiSay(string s);
void terseCevir(string s);

int main()
{
    string myString ( "ab3cDe /* 123  fGHI@79JKL % mno" );

    cout << "Girmis oldugunuz satirda :" << endl;
    cout << harfSay(myString) << " adet harf" << endl;
    cout << buyukSay(myString) << " adet buyuk harf" << endl;
    cout << kucukSay(myString) << " adet kucuk harf" << endl;
    cout << rakamSay(myString) << " adet rakam" << endl;
    cout << karakterSay(myString) << " adet harf olmayan karakter" << endl;
    cout << sayiSay(myString) << " : ifadedeki sayilarin toplami" << endl;

    cout << "Terse cevrilmis sekilde : " ;
	terseCevir(myString);
    
}

int buyukSay(string s)
{
	int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			++count;
		}
	}
	
	return count; //7
}

int kucukSay(string s)
{
	int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			++count;
		}
	}
	
	
    return count;	//8
}

int harfSay(string s)
{
    int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			++count;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			++count;
		}
	}
	return count; //15
	
}

int karakterSay(string s)
{
	int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='/' || s[i]=='*' || s[i]=='@' || s[i]=='%')
		{
			++count;
		}
	}
	
    return count;
}

int rakamSay(string s)
{
	int sayac = 0;
    for (int i = 0; i < s.length() ; i++) 
	{
        if (isdigit(s[i])) 		//isdigit rakam olup olmadıgını kontrol eder 
		{
            sayac++;
        }
    }
    return sayac;

}

int sayiSay(string s)
{
    int toplam = 0, j = 0;
    string toplayan;

    for (int i = 0;i < s.length(); i++) 
	{
        j = 0;
        if (isdigit(s[i])) 
		{
            while (isdigit(s[j + i])) 
			{
                toplayan.push_back(s[i + j]);		//toplayanın sonuna ekleme yapar
                j++;
            }
        }
        if (!toplayan.empty()) 						//eger toplayan bos degilse
		{
          //  toplam += stoi(toplayan);				//stoi karakter dizisini integere donusturur
        }
        i = i + j;
        toplayan.clear();							//toplayanın icerisindekileri siler
    }
    return toplam;
}

void terseCevir(string s)
{
/*  reverse(s.begin(),s.end());			//#include <algorithm> kutuphanesi ile kullanılabilir alttakı fonksiyonlarla aynı isi yapar
	cout << s << endl;		*/		


	int size=s.size()-1;
	for(int i=0;i<s.size()/2;i++)
	{
		char temp = s[i];				
    	s[i] = s[size-i];
    	s[size-i] = temp;
    	
	}
	
	cout << s << endl;
}