#include <string>
using namespace std;

class Node {
    private:
        string _name;
        Node* _next;
    public:
        string getName() { return _name; }
        void setName(const string name) { _name = name;}
        void setNext(Node* node) { _next = node; }
        
        Node();
        virtual ~Node();
};


int main() {

    return 0;
}