#include <iostream>

<<<<<<< HEAD
double multiply(double x, double y){
	return x*y;
}
=======
void print(double x){
	std::cout << x << "\n";
>>>>>>> slave
}

double sqr(double x){
	return x*x;
}

int main(){
	print(sqr(3));
	return 0;
}
