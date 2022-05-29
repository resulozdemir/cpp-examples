#include <iostream>
using namespace std;

class human{
	
	protected:		//protected yapmamızın nedeni student ve employee classlarının icersinden de erismek istememiz
	    
		string TC;       
	    string name;
	    string surname;
	    string birthday;
	    string gender;
	    int height;
	    int weight;
	    string nationality;
	
	public:		
		
	human()	//default Constructor
	{ 
		cout<<"Bir insan olusturuldu."<<endl;
	}
	
	human(string TC,string name,string surname,string birthday,string gender,int height,int weight,string nationality) //Constructor
	{
		this->TC=TC;
		this->name=name;
		this->surname=surname;
		this->birthday=birthday;
		this->gender=gender;
		this->height=height;
		this->weight=weight;
		this->nationality=nationality;
		
	}
	
	void print()		//ekrana yazdirma fonksiyonu
	{
		cout<<"TC:"<<TC<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"surname:"<<surname<<endl;
		cout<<"birthday:"<<birthday<<endl;
		cout<<"gerder:"<<gender<<endl;
		cout<<"height:"<<height<<endl;
		cout<<"weight:"<<weight<<endl;
		cout<<"nationality:"<<nationality<<endl;
    }
    
	string getTC(){return TC;}			//tek tek yazdirmak icin
	string getName(){return name;}
	string getSurname(){return surname;}
	string getBirthday(){return birthday;}
	string getGender(){return gender;}
	int getHeight(){return height;}
	int getWeight(){return weight;}
	string getNationality(){return nationality;}
	
	void setTC(string TC){				//tek tek deger atayabilmek edebilmek icin
		this->TC=TC;
	}
	
	void setName(string name){
		this->name=name;
	}
	
	void setSurname(string surname){
		this->surname=surname;
	}
	
	void setBirthday(string birthday){
		this->birthday=birthday;
	}
	
	void setGender(string gender){
		this->gender=gender;
	}
	
	void setHeight(int height){
		this->height=height;
	}
	
	void setWeight(int kilo){
		this->weight=weight;
	}
	
	void setNationality(string nationality){
		this->nationality=nationality;
	}
	
	void setAll(string TC,string name,string surname,string birthday,string gender,int height,int weight,string nationality)
	{
		this->TC=TC;
		this->name=name;
		this->surname=surname;
		this->birthday=birthday;
		this->gender=gender;
		this->height=height;
		this->weight=weight;
		this->nationality=nationality;
		
	}
	
	~human()		//Destructor (olusturulan human i siler)
	{
		cout << "degerler yok edildi " << this->name << endl;
	}
	
};

class student:public human		//humman classı icerisindekileri kullanabilmemiz icin
{
	private : 					//private yapmamızın nedeni baska yerden erisilmesini istemememiz
		string department;
		string stuID;

	public : 
	 	
		student()
		{
			cout << "ogrenci olusturuldu " << endl; 
		
		}
	 	
	 	student(string TC,string name,string surname,string birthday,string gender,int height,int weight,string nationality,string department,string stuID):human(TC,name,surname,birthday,gender,height,weight,nationality)
	 	{
	 		this->department=department;
	 		this->stuID=stuID;
		}
	
	void print()
	{
		cout<<"TC:"<<TC<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"surname:"<<surname<<endl;
		cout<<"birthday:"<<birthday<<endl;
		cout<<"gerder:"<<gender<<endl;
		cout<<"height:"<<height<<endl;
		cout<<"weight:"<<weight<<endl;
		cout<<"nationality:"<<nationality<<endl;
		cout<<"departman : "<<department<<endl;
		cout<<"ogrenci numarasi : "<<stuID<<endl;
    }
	
	
	string getDepartment(){return department;}
	string getStuID(){return stuID;}
	
	void setDepartment(string department)
	{
		this->department=department;
	}
	
	void setStuID(string stuID)
	{
		this->stuID=stuID;
	}
	
	void setAll(string department,string stuID)		
	{
		this->department=department;		//this i kullanmamızın nedeni private içerisindeki department ile fonksiyonu tanımlarken kullandıgımız departmentin birbirine karısmaması
	 	this->stuID=stuID;					//bunun bize faydası ise ekstra degisken ismi bulmamıza gerek kalmaması 
		
	}
	
	~student()		//Destructor (olusturulan student i siler)
	{
		cout<<"degerler yok edildi "<<this->department<<endl;
	}

};

class employee:public human
{
	private : 
		int salary;
		int socialSecurityNumber;

	public : 
	 	
		employee()
		{
			cout << "calisan olusturuldu " << endl; 
		
		}
	 	
	 	employee(string TC,string name,string surname,string birthday,string gender,int height,int weight,string nationality,int salary,int socialSecurityNumber):human(TC,name,surname,birthday,gender,height,weight,nationality)
	 	{
	 		this->salary=salary;
	 		this->socialSecurityNumber=socialSecurityNumber;
		}
	
	void print()
	{
		cout<<"TC:"<<TC<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"surname:"<<surname<<endl;
		cout<<"birthday:"<<birthday<<endl;
		cout<<"gerder:"<<gender<<endl;
		cout<<"height:"<<height<<endl;
		cout<<"weight:"<<weight<<endl;
		cout<<"nationality:"<<nationality<<endl;
		cout<<"maas : "<<salary<<endl;
		cout<<"sosyal guvenlik numarasi : "<<socialSecurityNumber<<endl;
    }
	
	
	int getSalary(){return salary;}
	int getSocialSecurityNumber(){return socialSecurityNumber;}
	
	void setSalary(int salary)
	{
		this->salary=salary;
	}
	
	void setSocialSecurityNumber(int socialSecurityNumber)
	{
		this->socialSecurityNumber=socialSecurityNumber;
	}
	
	void setAll(int salary,int socialSecurityNumber)
	{
		this->salary=salary;
	 	this->socialSecurityNumber=socialSecurityNumber;
		
	}
	
	~employee()			//Destructor (olusturulan employee yi siler)
	{
		cout<<"degerler yok edildi "<<this->salary<<endl;
	}
	
	
	
};


int main()
{
	//yazma sırasına göre olusturur
	human h1("123456","Tyler","Durden","18/09/1963","ERKEK",180,70,"USA");
	student s1;
	student s2("789102","Rami","Malek","12/05/1981","ERKEK",175,70,"USA","bilgisayar","01");
	employee e1;
	
	h1.print();
	cout<<"-------------------------------------------------------------------"<<endl;
	
	
	s1.setDepartment("bankacilik");
	cout << s1.getDepartment() << endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	
	s2.print();
 	cout<<"-------------------------------------------------------------------"<< endl;
 
 	e1.setSalary(60000);
 	cout << e1.getSalary() << endl;
 	cout<<"-------------------------------------------------------------------"<< endl;
 
	return 0;
}