#include<iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main ()
{
    system("git pull"); 
    system("cd img");
    system("git pull");
    system("cd .."); 
    system("npm i");
    system("npm audit fix");
    system("npm run build:sw:prod");
    system("git fetch upstream");
    system("git merge upstream/main");    
    system("git pull"); 
    system("cd img");
    system("git pull");
    system("cd .."); 
    system("start http://localhost:8214");   
    system("py -m http.server 8214");
    

}
