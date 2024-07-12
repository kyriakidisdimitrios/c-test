#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Item {
private:
    string name;
    float price;
    int qty;
public:
    Item(){}
    Item(string n, float p, int q);
    friend ifstream &operator>>(ifstream &fis,Item &i);
    friend ofstream &operator<<(ofstream &fos,Item &i);
    friend ostream &operator<<(ostream &os,Item &i);
};
Item::Item(string n,float p, int q): name(n), price(p), qty(q){}
ifstream &operator>>(ifstream &fis,Item &i) {
    fis>>i.name>>i.price>>i.qty;
    return fis;
}
ofstream &operator<<(ofstream &fos,Item &i) {
    fos<<i.name<< " "<<i.price<< " "<<i.qty<<endl;
    return fos;
}
ostream &operator<<(ostream &os,Item &i) {
    os<<"Name " << i.name<< " ,Price: "<<i.price<< ",Quality"<<i.qty<<endl;
    return os;
}
int main() {
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter number of items"<<endl;
    cin>>n;

    vector<Item *> list;
    cout<<"Enter all item "<<endl;
    for(int i=0;i<n;i++) {
        cout<<"Enter "<<i+1<<" Item name, price and quality";
        cin>>name;
        cin>>price;
        cin>>qty;
        list.push_back(new Item(name, price,qty));
    }
    ofstream fos("Item.txt");
    vector<Item *>::iterator itr;

    for(itr=list.begin();itr!=list.end();itr++) {
        fos<<**itr; //vector of items
    }
    Item item;
    ifstream fis("Items.txt");
    for (int i=0;i<3;i++) {
        fis>>item;
        cout<<"Item "<<i<<endl<<item<<endl;
    }
};