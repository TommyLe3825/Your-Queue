#include <iostream>
using namespace std;

//change the class to a template
class Queue 
{
	private:
	int *arr;
        int count;
    public:
    	Queue(int size) {
    	    arr = new int[size];
    	    count = 0;
    	}
    	void add(int elem) {
    	    arr[count] = elem;
    	    count++;
    	}
    	void get(int index) {
    	    cout << arr[index]<<endl;
    	}
};

int main()
{
	Queue<string> q(4);
	q.add("James");
	q.add("Andy");
	q.add("Amy");
	q.get(2);
	
	Queue <int> n(2);
	n.add(42);
	n.add(33);
	n.get(1);
	
	return 0;
}
