//
// Created by Huisu Kim on 2021-01-28.
//

#include <iostream>
#include <unistd.h>

using namespace std;
int main(){
    system("bitcoind -txindex -daemon");
    sleep(5);
    cout<<endl<<"[ your address ]"<<endl;
    system("bitcoin-cli getnewaddress");
    string addr;
    cout<<"\n\nEnter the address to get minted coins"<<endl;
    cin>>addr;
    string s_command = "bitcoin-cli generatetoaddress 1 " + addr;
    const char *c_command = s_command.c_str();
    while(true){
        system(c_command);
    }
    return 0;
}