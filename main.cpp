#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>

using namespace std;

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
		ofstream Fr;
		Fr("real.txt");
		cout << "state: ";
		cin >> l >> endl;
		Fr<<l<<endl;
		cout << "appointment: ";
		cin >> l >> endl;
		Fr<<l<<endl;
		cout << "issuer: ";
		cin >> l >> endl;
		Fr<<l<<endl;
		cout << "form: ";
		cin >> l >> endl;
		Fr<<l<<endl;
		cout << "material:  ";
		cin >> l >> endl;
		Fr<<l<<endl;
		Fr.close;
		
	return 0;
};

class virtM: public Marka
{
public:
	int createM ()
	{
		string l;
		ofstream Fv;
		Fv("real.txt");
		cout << "state: ";
		cin >> l >> endl;
		Fv<<l<<endl;
		cout << "appointment: ";
		cin >> l >> endl;
		Fv<<l<<endl;
		cout << "issuer: ";
		cin >> l >> endl;
		Fv<<l<<endl;
		cout << "form: ";
		cin >> l >> endl;
		Fv<<l<<endl;
		cout << "material:  ";
		cin >> l >> endl;
		Fv<<l<<endl;
		Fv.close;

	return 0;

};


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
		ifstream F;
		F.open("sbornik.txt");
		while (!F.eof())
		{
			F.getline(l);
			if (strcmp(l,"real"))
			{
				int count=0;
				ofstream Fr;
				Fr("real.txt")
				while(count<5)
				{
					F.getline(l);
					Fr<<l<<endl;
					count ++;
				}
				Fr.close;
			}
			else
			{
				int count=0;
				ofstream Fv;
				Fv("virt.txt")
				while(count<5)
				{
					F.getline(l);
					Fv<<l<<endl;
					count ++;
				}
				Fv.close;
			}
		}
		F.close;
		return 0;
	}	
	
	int addM ()
	{
		Marka *p;
		realM  rp;
		virtM vp;
		int sw;
		cout << "type of state: 1-real 2-virtual" << endl;
		cin >> sw;
		if (sw == 2)
		{
			p = & vp;
			p->createM()
		}
		if (sw == 1)
		{
			p = & rp;
			p->createM()
		}
		return 0;
	}	
	
		int showS ()
	{
		string l;
		uplS();
		string l;
		ifstream fin;
		fin("fin.txt");
		fin.getline(l);
		cout << l;
		
		return 0;
	}	
	
		int uplS ()
	{
		string l;
		ofstream fin;
		fin("fin.txt");
		ifstream fr;
		fr ("real.txt");
		fin « "-------Real state--------\n";
		while (!fr.eof())
		{
			fr.getline(l);
			fin << l << "\n";
		}
		fr.close();
		
		
		ifstream fv;
		fv ("virt.txt");
		fin « "\n\n--------Virtual state--------\n";
		while (!fv.eof())
		{
			fv.getline(l);
			fin << l << "\n";
		}
		fv.close();
		
		fin.close;
		
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
            showS();  
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
		menu();
	}
	
};


int main ()
{
		Man A;
		A.operate();
		return 0;
}