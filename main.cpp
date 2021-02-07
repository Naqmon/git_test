#include <iostream>

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
