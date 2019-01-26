/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3, Ch7 Ex3
Header file for the Counter class.*/

using namespace std;

class Counter{

	private:
		int m_counter;
		int m_max;

	
	public:
		Counter(int max);
		void reset();
		void incr1();
		void incr10();
		void incr100();
		void incr1000();
		bool overflow();
		int getCount();
};
