//
//  main.cpp
//  Introduction
//
//  Created by Jay Shah on 1/21/21.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Area
{
private:
    int length;
    int width;
    int height;
    int radius;
public:
    void setdimension(int l,int w,int h,int r);
    float circle();
    int square();
    int retangula();
};

void Area::setdimension(int l,int w,int h,int r)
{
    length = l;
    width = w;
    height = h;
    radius = r;
}

float Area::circle()
{
    float rad;
    rad = (22/7)*radius^2;
    return rad;
}

int Area::square()
{
    int sa;
    sa = length*width*height;
    return sa;
}

int Area::retangula()
{
    int sa;
    sa = length*width*height;
    return sa;
}

int main()
{
    int sl,sw,sh,sr,cl,cw,ch,cr,rl,rw,rh,rr;
    int choise = 0;
    Area asqu, acir, areg;
    while (choise!=4)
    {
        cout << "Choose a number from below: ";
        cout << "1. Square Area, 2. Circle Area, 3. Rectangle, 4. Exit:  \n";
        cin >> choise;
        if (choise == 4)
        {
            cout << "Thank You, see you soon \n";
        }
        else if (choise == 1)
        {
            cout << "Enter length, width and height below to find : \n";
            cout << "Lenght \n";
            cin >> sl;
            cout << "Width \n";
            cin >> sw;
            cout << "Height \n";
            cin >> sh;
            sr = 0;
            asqu.setdimension(sl, sw, sh, sr);
            cout <<"Square Area: "<< asqu.square() <<"\n";
        }
        else if (choise == 2)
        {
            cout << "Enter radius below: \n";
            cout << "radius \n";
            cin >> cr;
            cl = 0;
            cw = 0;
            ch = 0;
            acir.setdimension(cl, cw, ch, cr);
            cout <<"Circle Area: "<< acir.circle()<<"\n";
        }
        else if (choise == 3)
        {
            cout << "Enter length, width and height below: \n";
            cout << "Lenght \n";
            cin >> rl;
            cout << "Width \n";
            cin >> rw;
            cout << "Height \n";
            cin >> rh;
            rr = 0;
            areg.setdimension(rl, rw, rh, rr);
            cout <<"Rectangle Area: "<<areg.retangula()<<"\n";
        }
        else
        {
            cout << "Enter a number between 1-3 to find a area or 4 to exit: \n";
        }
    }
    return 0;
}
--------------------------------
string Gradebook::outputgrade(string rn)
{
    rn = roll;
    string r;
    ifstream gradebook;
    gradebook.open("Studentinfo.txt");
    if (gradebook.is_open())
    {
        gradebook >> r;
        while(!gradebook.eof())
        {
            getline (gradebook, r);
            if (r.find(rn)==r.npos)
            {
                cout << r <<"\n";
            }
        }
        gradebook.close();
    }
    else
        cout << "Unable to open the file";
    return 0;
}
--------------------------
void Gradebook::inputaveragegrade(float a)
{
    
    ofstream gradebook1;
    gradebook1.open("Studentinfo.txt");
    if (gradebook1.is_open())
    {
        gradebook1 << a;
        gradebook1.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
}
------------------------
void Gradebook:: inputname()
{
    j = j + 1;
    string n = name;
    ofstream gradebook2;
    gradebook2.open("Studentinfo.txt");
    if (gradebook2.is_open())
    {
        gradebook2 << j << n;
        gradebook2.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
}

void Gradebook::inputmathgrade()
{
    int mg;
    mg = mathgrade;
    ofstream gradebook3;
    gradebook3.open("Studentinfo.txt");
    if (gradebook3.is_open())
    {
        gradebook3 << mg;
        gradebook3.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
}
    
void Gradebook::inputenglishgrade()
{
    int eg;
    eg = englishgrade;
    ofstream gradebook4;
    gradebook4.open("Studentinfo.txt");
    if (gradebook4.is_open())
    {
        gradebook4 << eg;
        gradebook4.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
    
}
void Gradebook::inputsciencegrade()
{
    int sg;
    sg = sciencegrade;
    ofstream gradebook5;
    gradebook5.open("Studentinfo.txt");
    if (gradebook5.is_open())
    {
        gradebook5 << sg;
        gradebook5.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
    
}
void Gradebook::inputssgrade()
{
    int ssg;
    ssg = ssgrade;
    ofstream gradebook6;
    gradebook6.open("Studentinfo.txt");
    if (gradebook6.is_open())
    {
        gradebook6 << ssg;
        gradebook6.close();
    }
    else
    {
        cout << "Unable to open /n";
    }
    
}
-------------------------
