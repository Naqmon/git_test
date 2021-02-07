#include <iostream>

double multiply(double x, double y){
	return x*y;
}
void print(double x){
	std::cout << x << "\n";
}

double sqr(double x){
	return x*x;
}

int main(){
	print(sqr(3));
	return 0;
}
