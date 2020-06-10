#include <iostream>
using namespace std; 

void kalkulator();
void nilaiKeHuruf();

main(){
	int pilihan;
	ulangmenu:
	cout<<"---------------------------------------\n1. Kalkulator \n2. Nilai ke Huruf \nMasukan no menu : ";cin>>pilihan;
	switch(pilihan){
		case 1:
			mulai:
			kalkulator();
			break;
		case 2:
			nilaiKeHuruf();
			break;
		default:
			cout <<"Masukan menu yang benar \n";
	    	goto ulangmenu;
	} goto ulangmenu;
}

penjumlahan(double a, double b){
	return (a+b);
}

pengurangan(double a, double b){
	return (a-b);
}

perkalian(double a, double b){
	return (a*b);
}

pembagian(double a, double b){
	return (a/b);
}

modulo(int a, int b){
	return (a%b);
}

void kalkulator(){
	double n1,n2;
	char pilihan;
	cout<<"Masukan nilai a : ";cin>>n1;
	cout<<"Masukan nilai b : ";cin>>n2;
	ulang:
	cout<<"Pilih operator (*,/,+,-,%) : ";cin>>pilihan;
	switch(pilihan){
		case '*':
			cout<<"Nilai a * b adalah : "<<perkalian(n1,n2)<<endl;
			break;
		case '/':
			cout<<"Nilai a / b adalah : "<<pembagian(n1,n2)<<endl;
			break;
		case '+':
			cout<<"Nilai a + b adalah : "<<penjumlahan(n1,n2)<<endl;
			break;
		case '-':
			cout<<"Nilai a - b adalah : "<<pengurangan(n1,n2)<<endl;
			break;
		case '%':
			cout<<"Nilai a % b adalah : "<<modulo(n1,n2)<<endl;
			break;
		default:
	    	cout <<"Masukan operator yang benar \n";
	    	goto ulang;
	}
}

void nilaiKeHuruf(){
	double nilai;
	cout<<"Masukan nilai (antara 0 - 100): ";
	masukannilai:
	cin>>nilai;
	if(nilai<0 || nilai>100){
      cout<< "Masukan nilai yang benar (antara 0 - 100) : ";
      goto masukannilai;
    }
	else if(nilai>=40 && nilai<65){
      cout<<"Nilai anda dalam huruf adalah:   D\n";
    }
    else if(nilai>=65 && nilai<75){
      cout<<"Nilai anda dalam huruf adalah:   C\n";
    }
    else if(nilai>=75 && nilai<85){
      cout<<"Nilai anda dalam huruf adalah:   B\n";
    }
    else if(nilai>=85 && nilai<=100){
      cout<<"Nilai anda dalam huruf adalah:   A\n";
    }
    else {
      cout<<"Nilai anda dalam huruf adalah:   E\n";
    }
}

