#include <iostream>
using namespace std;

int main (){
	
	int A[5]={50,60,70,80,90};
	int i,cari,ia,tengah,ib;

	cout << "\t\t=====================" << endl;
	cout << "\t\tPROGRAM BINARY SEARCH" << endl;
	cout << "\t\t=====================" << endl;
	

	
		for(i=0; i<5; i++)
		{

			cout << A[i] << " | ";

		}

		cout << "\nmmasukan data yang akan di cari : ";
		cin >> cari;

	ia=0;
	ib=6;


	while (ia<=ib)
	{
		tengah=(ia+ib)/2;
		if (cari>A[tengah]){
			ia=tengah+1;
		}
		
		else if (cari<A[tengah]){
			ib=tengah-1;
		
		}else{ 
			ia=ib+1;
		}

	}
if (cari==A[tengah])
	{
		cout << " data " << cari << " ditemukan";
	
	}else{
		cout << " data tidak ditemukan";
	}
return 0;
}