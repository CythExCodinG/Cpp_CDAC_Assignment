#include "friends.cpp"

void searchById(friends *f,int id ){
    for (int i = 0; i < 3; i++)
    {
        if(f[i].id==id){
            cout<<"found person";
            f[i].display();

        }
    }
    
}
int main(){
    friends *f=new friends[10];
    friends f1(1,"Shivay","@gmail","panchavati");
    f1.addHobby("reading");
    f1.addHobby("surfing");
    f1.addHobby("hiking");
    f[0]=f1;
    friends f2(3,"nepal","@gmail","panchavati");
    f2.addHobby("reading");
    f2.addHobby("surfing");
    f2.addHobby("hiking");
    f[1]=f2;
    
    friends f3(2,"Ram","@gmail","panchavati");
    f3.addHobby("reading");
    f3.addHobby("surfing");
    f3.addHobby("hiking");
    f[2]=f3;

    searchById(f,2);
    return 0;

}