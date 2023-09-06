#include <string>
using namespace std;

class Account{
    public: 
    void setname(string accountName){
        name = accountName;
    }

    string getname()const{
        return name;
    }

    private:
        string name;
};
