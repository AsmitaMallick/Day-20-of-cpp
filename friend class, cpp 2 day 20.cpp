#include<iostream>
using namespace std;
//forward declaration
//Aliter: declaring the entire class as friends 
class complex;
class calculator{
	public:
		int add(int a, int b){
			return(a+b);
		}
		int sumRealComplex(complex , complex  );
		int sumCompComplex(complex , complex  );
	
		
};
class complex{
	int a,b;
	friend class calculator;
	//friend int calculator :: sumRealComplex(complex, complex);
	//friend int calculator :: sumCompComplex(complex, complex);
	public: 
	void setNumber(int n1, int n2){
		a = n1;
		b = n2;
	}
	void printNumber(){
		cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
	}
};
int calculator :: sumRealComplex(complex o1, complex o2){
	return (o1.a+o2.a);
}
int calculator :: sumCompComplex(complex o1, complex o2){
	return (o1.b+o2.b);
}
int main(){
	complex o1, o2; 
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	calculator calc;
	int res = calc.sumRealComplex(o1,o2);
	int resc = calc.sumCompComplex(o1,o2);
	cout<<"the sum of the real part of o1 amd o2 is "<<res<<endl;
	cout<<"the sum of the complex part of o1 amd o2 is "<<resc<<endl;
	return 0;
	
	
}
