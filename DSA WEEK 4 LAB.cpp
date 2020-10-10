/* 
  SARAH MONG'ARE- 133834
  EDITH LORNA ALWANG'A- 126184
  CALVIN MWANIKI- 134099
  JESSE KIPCHUMBA - 125955 
  */



#include <iostream>
using namespace std ;

bool leapYear(int year){  // function that determines leap year
	
	if(year%4==0)
		return true;
		
		else
		 return false;
	
	
}

int main(){
	
	int year;
	int output;
	
	cout<<"Enter the year"<<endl;
	cin>>year;
	
	output=leapYear(year);  //calling the leapYear function
	cout<<output;
	
	return 0;
		
}


//pseudocode for determining if a year is leap

//inputs- year
//output- the year is leap or not


/*
   Request the year from the user
   
    if year %4== 0 then print true
    if year %4!= 0 then print false
    
*/



