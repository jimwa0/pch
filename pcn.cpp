#include <iostream>
#include <string>

int main(int p, std::string q, bool qFlag) {
	// check for valid input
	// positive int pieces, TIJLSZO
	
	int n = ((p)*5)%7+1;	// pc number
	// determine if 8th or 9th if n=1 or 2
	
	if (qFlag == true) {
		if (q.size() > 0) {
			std::cout << n << " " << q << endl;
			// also check if its 8th or 9th when there is queue
		} else {
			std::cout << n << endl;
		}
	} else if (q.size() > 0) {
		switch (n) {
			case 1:
				std::cout << "1st PC" << end;
			case 2:
				std::cout << "2nd PC" << end;
			case 3:
				std::cout << "3rd PC" << end;
			case 4:
				std::cout << "4th PC" << end;
			case 5:
				std::cout << "5th PC" << end;
			case 6:
				std::cout << "6th PC" << end;
			case 7:
				std::cout << "7th PC" << end;
			case 8:
				std::cout << "8th PC" << end;
			case 9:
				std::cout << "9th PC" << end;
			default:
				std::cout << "something went wrong" << end;
		}
	} else {
		switch (n) {
			case 1:
				std::cout << "1st PC" << end;
			case 2:
				std::cout << "2nd PC" << end;
			case 3:
				std::cout << "3rd PC" << end;
			default:
				std::cout << n << "th" << end;
		}
	}
}
