#include <map>
#include <iostream>
#include <vector>

using namespace std;

typedef pair <int, vector<int> > par;


int main() {

    map<int, vector<int> > m;

    vector<int> v1;

    v1.push_back(-20);
    v1.push_back(15);
    v1.push_back(19);
    v1.push_back(9);

    vector<int> v2;

    v2.push_back(-75);


    vector<int> v3;

    v3.push_back(40);
    v3.push_back(6);
    v3.push_back(-20);


    m.insert( par(1, v1));
    m.insert( par(2,v2));
    m.insert( par(3,v3));


    map<int , vector<int> > :: iterator i;
    int suma=0;

    for (i=m.begin(); i != m.end(); i++) {

        cout<< i->first<<endl;
        cout<<"Numeros: ";

        suma = 0;

        for (int j=0; j < i-> second.size(); j++) {

            cout << i->second.at(j) << " ";
            suma += i->second.at(j);


        }

        cout<< "\n" <<suma << endl;

    }

    return 0;




}

