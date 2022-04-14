/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:42:32 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 16:49:41 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// class Awesome
// {
// 	public: 
// 	Awesome(void) : _n(0) {}
// 	Awesome( int n) : _n (n ) {}
// 	Awesome &operator= (Awesome & a) { _n = a._n; return *this; }
// 	bool operator==( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	bool operator!=( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	bool operator>( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	bool operator<( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	bool operator>=( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	bool operator<=( Awesome const &rhs) const { return (this->_n == rhs._n); }
// 	int get_n() const {return _n;}

// 	private:
// 	int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o;}

// int main(void)
// {
// 	Awesome a(2), b(4);

// 	swap(a, b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;
// 	return (0);
// }

int main(int argc, char **argv)
{
	std::cout << PINK << "____TEST WITH ARGS____ " << END << std::endl;
	try
	{
		if (argc == 3) {
			std::cout << "info 1 : " << argv[1] << " | info 2 : " << argv[2] << std::endl;
			swap(argv[1], argv[2]);
			std::cout << "info 1 : " << argv[1] << " | info 2 : " << argv[2] << std::endl;
			std::cout << "min is : " << min(argv[1], argv[2]) << std::endl;
			std::cout << "max is : " << max(argv[1], argv[2]) << std::endl << std::endl;
		}
		else 
			throw whatever::ImpossibleOperation();
	}
	catch(const whatever::ImpossibleOperation & e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << PINK << "____TEST WITH SUBJECT'S MAIN____ " << END << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << PINK << "____TEST WITH STRING____ " << END << std::endl;
	char const *s1 = "bonjour";
	char const *s2 = "hello";

	std::cout << "info 1 : " << s1 << " | info 2 : " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "info 1 : " << s1 << " | info 2 : " << s2 << std::endl;
	std::cout << "min is : " << min(s1, s2) << std::endl;
	std::cout << "max is : " << max(s1, s2) << std::endl << std::endl;
	
	std::cout << PINK << "____TEST WITH CHAR____ " << END << std::endl;
	char c1 = 'c';
	char c2 = 'a';
	
	std::cout << "info 1 : " << c1 << " | info 2 : " << c2 << std::endl;
	swap(c1, c2);
	std::cout << "info 1 : " << c1 << " | info 2 : " << c2 << std::endl;
	std::cout << "min is : " << min(c1, c2) << std::endl;
	std::cout << "max is : " << max(c1, c2) << std::endl;
	
	std::cout << PINK << "____TEST WITH INT____ " << END << std::endl;
	int nb1 = 65;
	int nb2 = 75;
	
	std::cout << "info 1 : " << nb1 << " | info 2 : " << nb2 << std::endl;
	swap(nb1, nb2);
	std::cout << "info 1 : " << nb1 << " | info 2 : " << nb2 << std::endl;
	std::cout << "min is : " << min(nb1, nb2) << std::endl;
	std::cout << "max is : " << max(nb1, nb2) << std::endl;

}
