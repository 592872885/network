#include <iostream>
#include "bitree1.h"
#include "bitree2.h"
#include "bitree3.h"
using namespace std;

int main()
{
    cout<<"ÊÇ·ñ´´½¨´ÅÅÌ: 1.YES 2.NO"<<endl;
    int i;
    cin>>i;
    if(i==1){
        bitree1 tree;	tree.mycreate();
    }
    return 0;
}