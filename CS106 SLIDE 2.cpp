//2026.1.28学习斯坦福CS 106L第二课
//运用std::pair,using,auto解决二次函数根的问题


#include <iostream>
#include <utility>

	using point = std::pair<double, double>;
	using qiujie = std::pair < bool, point > ;
	qiujie solveQuadratic(double a, double b, double c);
	
	int main() {
		int a, b, c;
		std::cin >> a >> b >> c;
		auto jie = solveQuadratic( a,  b,  c);
		if (jie.first == false)std::cout << "无实数根" <<std::endl;
		else std::cout << "有实数解，解为：" << "{"<<jie.second.first<<"."<<jie.second.second<<"}"<< std::endl;
}

qiujie solveQuadratic(double a, double b, double c) {
		double delta = b * b - 4 * a*c;
	if (delta < 0)  return { false,{0,0} };
	else{
			double x1, x2;
			x1 = (b + sqrt(delta)) / 2 * a;
			x2 = (b - sqrt(delta)) / 2 * a;
			return{ true,{x1,x2} };
		}
	}