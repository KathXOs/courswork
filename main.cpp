#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

class Man
{
	int N,sw;
	int createS ()
	{
		cout << "vvedite kol-vo marok"<< endl;
		cin >> N;
		char ** S = new char *[N];
		for (int i = 0; i <= Ns; i++)
		S[i] = new char[300];
		return **S;
	}
	
	int fillS (char **S)
	{
		cout << "1-download 2-create new" << endl;
		cin >> sw;
		if (sw == 2)
		{
			downlS (S);
		}
		if (sw == 1)
		{
			addM(S);
		}
		return **S;
	}
	
	int downlS (char **S)
	{
		return **S;
	}	
	
	int addM (char **S)
	{
		return **S;
	}	
	
		int showS (char **S)
	{
		return **S;
	}	
	
		int uplS (char **S)
	{
		return **S;
	}	
	
		int sortS (char **S)
	{
		return **S;
	}	
	
	
		int menu (char **S)
	{
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
            uplS(S);  
            break;  
         case 3:
			addM(S);
			break;
      }  
		}
		
	}	
	
public:
	
	int operate()	
	{
		createS();
		menu(S);
	}
	
}
class Marka 
{
public:
	virtual int createM();
	
}

class realM public Marka
{
public:
	int createM ();
}

class virtM public Marka
{
public:
	int createM ();
}

int main ()
{
		Man A;
		A.operate();
}