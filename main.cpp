#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

class Man
{
	int N,st;
	int createS ()
	{
		cout << "vvedite kol-vo marok"<< endl;
		cin >> N;

		return 0;
	}
	
	int fillS ()
	{
		int sw;
		cout << "1-download 2-create new" << endl;
		cin >> sw;
		if (sw == 2)
		{
			downlS ();
		}
		if (sw == 1)
		{
			addM();
		}
		return 0;
	}
	
	int downlS ()
	{
		string l ;
		ofstream F;
		F.open("sbornik.txt");
		while (!F.eof())
		{
			F.getline(l);
			if (strcmp(l,"real"))
			{
				int count=0;
				ifstream Fr;
				Fr("real.txt")
				while(count<5)
				F.getline(l);
				Fr<<l<<endl;
				cout ++;
			}
			else
			{
				int count=0;
				ifstream Fv;
				Fv("virt.txt")
				while(count<5)
				F.getline(l);
				Fv<<l<<endl;
				cout ++;
			}
		}
		
		return 0;
	}	
	
	int addM ()
	{
		Marka *p;
		int sw;
		cout << "type of state: 1-real 2-virtual" << endl;
		cin >> sw;
		if (sw == 2)
		{
			downlS ();
		}
		if (sw == 1)
		{
			addM();
		}
		return 0;
	}	
	
		int showS ()
	{
		return 0;
	}	
	
		int uplS ()
	{
		return 0;
	}	
	

	
	
		int menu ()
	{
		int sw;
		while (sw!=0)
		{
		cout << "do: /n 1-show sbornik /n  2-upload into file /n 3-add /n 0-exit" << endl;
		cin >> sw;
		switch (sw)
		{  
         case 1:  
            showS(S);  
            break;  
         case 2:  
            uplS();  
            break;  
         case 3:
			addM();
			break;
      }  
		}
		
	}	
	~Man();
	
public:
	int operate()	
	{
		createS();
		menu(S);
	}
	
};
class Marka 
{
	int mmm;
public:
	virtual int createM() =0;
	
};

class realM: public Marka
{
	
public:
	int createM ()
	
	{
		string l;
		ifstream Fr;
		Fr("real.txt");
		cin >> "state: " >> l >> endl;
		Fr<<l<<endl;
		cin >> "appointment: " >> l >> endl;
		Fr<<l<<endl;
		cin >>"issuer: " >> l >> endl;
		Fr<<l<<endl;
		cin >> "form: " >> l >> endl;
		Fr<<l<<endl;
		cin >>"material: " >> l >> endl;

		
	return 0;
};

class virtM: public Marka
{
public:
	int createM ()
	{
		string l;
		ifstream Fr;
		Fr("real.txt");
		cin >> "state: " >> l >> endl;
		Fr<<l<<endl;
		cin >> "appointment: " >> l >> endl;
		Fr<<l<<endl;
		cin >>"issuer: " >> l >> endl;
		Fr<<l<<endl;
		cin >> "form: " >> l >> endl;
		Fr<<l<<endl;
		cin >>"material: " >> l >> endl;

	return 0;

};

int main ()
{
		Man A;
		A.operate();
}