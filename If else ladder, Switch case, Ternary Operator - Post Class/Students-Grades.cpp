#include <bits/stdc++.h> 
using namespace std;
int main() {
     int a,b,c,d,e;
	 int m;
	 cin>>a>>b>>c>>d>>e;

     m=(a+b+c+d+e)/5;
	 
	 if(m>=80 && m<=100){
		 cout<<'A';
	 }else if(m<80 && m>=60){
		 cout<<'B';
	 }else if(m<60 && m>=40){
		 cout<<'C';
	 }else{
		 cout<<'D';
	 }
	return 0;
}