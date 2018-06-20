#include <iostream>
#include <fstream>

using namespace std;

class Marka 
{
	void mmm();
public:
	virtual int createM() =0;
	
};

class realM: public Marka
{
	
public:
	int createM ()
	
	{
		char l[20];
		ofstream Fr("C:\\real.txt", ios::app);
		
		cout << "state: ";
		cin.getline(l,20);
		Fr << l <<endl;
		cout << "\n appointment: ";
		cin.getline(l,20);
		Fr<<l<<endl;
		cout << "\n issuer: ";
		cin.getline(l,20);
		Fr<<l<<endl;
		cout << "form: ";
		cin.getline(l,20);
		Fr<<l<<endl;
		cout << "material:  ";
		cin.getline(l,20);
		Fr<<l<<endl;
		
		
	return 0;
}
};

class virtM: public Marka
{
public:
	int createM ()
	{
		char l[20];
		ofstream Fv("C:\\virt.txt", ios::app);
		
		cout << "state: ";
		cin.getline(l,20);
		Fv << l <<endl;
		cout << " appointment: ";
		cin.getline(l,20);
		Fv<<l<<endl;
		cout << " issuer: ";
		cin.getline(l,20);
		Fv<<l<<endl;
		cout << "form: ";
		cin.getline(l,20);
		Fv<<l<<endl;
		cout << "material:  ";
		cin.getline(l,20);
		Fv<<l<<endl;
	

	return 0;

}
};


class Man
{
	int N,st;
	int createS ()
	{
		ofstream Fr("C:\\real.txt");
		ofstream Fv("C:\\virt.txt");
		cout << "vvedite kol-vo marok"<< endl;
		cin >> N;

		return 0;
	}
	
	int fillS ()
	{
		int sw;
		cout << "1-download 2-create new" << endl;
		cin >> sw;
		if (sw == 1)
		{
			downlS ();
		}
		if (sw == 2)
		{
			addM();
		}
		return 0;
	}
	
	int downlS ()
	{
		char l[255];
		ifstream F("C:\\sbornik.txt");
		
		while (!F.eof())
		{
			F.getline(l,255);
			if (l[0] =='r')
			{
				int count=0;
				ofstream Fr("C:\\real.txt", ios::app);
				
				while(count<5)
				{
					F.getline(l,255);
					Fr<<l<<endl;
					count ++;
				}
				
			}
			else
			{
				int count=0;
				ofstream Fv("C:\\virt.txt", ios::app);
				
				while(count<5)
				{
					F.getline(l,255);
					Fv<<l<<endl;
					count ++;
				}
				
			}
		}
		
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
			p->createM();
		}
		if (sw == 1)
		{
			p = & rp;
			p->createM();
		}
		return 0;
	}	
	
		int showS ()
	{
		char l[255];
		uplS();
		ifstream fin("C:\\fin.txt");
		while (!fin.eof())
		{
		fin.getline(l,255);
		cout << l;
		cout<<endl;
		}
		
		return 0;
	}	
	
		int uplS ()
	{
		char l[255];
		ofstream fin("C:\\fin.txt");
		
		ifstream fr ("C:\\real.txt");
		
		fin << "-------Real state--------\n";
		while (!fr.eof())
		{
			fr.getline(l,255);
			fin << l << "\n";
		}
		fr.close();
		
		
		ifstream fv ("C:\\virt.txt");
		
		fin << "\n\n--------Virtual state--------\n";
		while (!fv.eof())
		{
			fv.getline(l,255);
			fin << l << "\n";
		}
		fv.close();
		
		
		
		return 0;
	}	
	
	~Man();
	
public:
			int menu ()
	{
		int sw;
		createS();
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
			fillS();
			break;
      }  
		
		
	}
	}	
	
};


int main ()
{
		Man A;
		A.menu();
		return 0;
}