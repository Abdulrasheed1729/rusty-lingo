// #include <iostream>

int add(int& a, int & b){
	return a+b;
}

int main() {
	int a = 2;
	int b = 3;

	int c = add(a, b);

	int d = a + b;

	// std::cout << c << " and " << d << std::endl;
}
