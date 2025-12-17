#include <iostream>
#include <string>
#include <unordered_set>


char pieces = {'T', 'I', 'L', 'J', 'S', 'Z', 'O'};

    // int count[7] = {0}; // TIJLSZO
    // for (int i=0; i<=6; ++i) {
    //   if (Q[i] == pieces[i])
    //     pieces[i]++;


std::string determine8th(std::string queue) {
  if ((n == 1) && (queueSize >= 7)) {
    int count[7] = {0}; // TIJLSZO
    for (int i=0; i<=6; ++i) {
      if (queue[i] == pieces[i])
        pieces[i]++;
    }

  } else {return "";}
}




int main() {
  // PARSE
  int p = 3650;
  std::string& Q = "TLOJISZ";
  bool brief = false;
  bool quiet = false;
  bool version = false;
  bool help = false;
  
  
  // VALIDATE
  // piece count
  if ((p > 0) && (p % 5 == 0); {
    // valid case
  } else {
    std::cerr << "Invalid input: piece count must be positive and divisible by 5.\n";
    return 1;
  }

  // queue
  static const std::unordered_set<char> validPieces {
    'T', 'I', 'L', 'J', 'S', 'Z', 'O',
    't', 'i', 'l', 'j', 's', 'z', 'o'
  };

  for (char c : Q) {
    if (validPieces.find(c) == validPieces.end()) {
      std:cerr << "Invalid input: queue can only contain these characters: TIJLSZOtijlszo"
      return 1;
    }
  }
	

  // WORK
	int n = ((p)*5)%7+1;
  int queueSize = Q.length();
  std::string 8thClass = "";
  std::string 9thClass = "";

  if (queueSize > 0) {
    } else if ((n == 2) && (queueSize >= 4)) {  // determine if 9th
      //TT[L,J]X
    }
  }
	// determine if 8th or 9th if n=1 or 2
	

  // OUTPUT





  
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
