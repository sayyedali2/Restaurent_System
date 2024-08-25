#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

void PrintMenu(const vector<string>& Items, const vector<int>&Price)
{
    for (int i = 0; i < Items.size(); ++i) {
        cout<<left <<setw(20) << Items[i] << " : " << Price[i] << endl;
    }
    cout<<endl<<endl;
}

void GetOrder(vector<string>& OrederList)
{
    while(true)
    {
        string Ele;
        getline(cin,Ele);
        
        if(Ele == "STOP" || Ele == "Stop"|| Ele == "stop")
        {
            cout<<endl<<"****Thaks for Visiting****"<<endl;
            break;
        }
        OrederList.push_back(Ele);
    }
}



void AddMony(vector<int>&Counte,const vector<string>&OrderList)
{
    for(string i: OrderList)
    {
        if(i == "Samosa")
        {
            Counte[0] +=20;
        }
        else if(i == "Kachori")
        {
             Counte[1] +=20;
        }
        else if(i == "Pav bhaji")
        {
             Counte[2] +=60;
        }
        else if(i == "Dabeli")
        {
             Counte[3] +=40;
        }
        else if(i == "Jalebi")
        {
             Counte[4] +=50;
        }
        else if(i == "Dosa")
        {
             Counte[5] +=60;
        } 
        else if(i == "Pizza")
        {
             Counte[6] +=300;
        } 
        else if(i == "Dal Bati")
        {
             Counte[7] +=150;
        } 
        else if(i == "Chole Bhature")
        {
             Counte[8] +=130;
        } 
        else if(i == "Burger")
        {
             Counte[9] +=100;
        } 
        else if(i == "Chai")
        {
             Counte[10] +=20;
        } 
        else if(i == "Coffee")
        {
             Counte[11] +=40;
        } 
        else if(i == "Chaumin")
        {
             Counte[12] +=70;
        } 
        else if(i == "Manchurian")
        {
             Counte[13] +=70;
        } 
        else if(i == "Biryani")
        {
             Counte[14] +=230;
        } 
        else if(i == "pulao")
        {
             Counte[15] +=200;
        } 
        else if(i == "Edli")
        {
             Counte[16] +=50;
        } 
        else if(i == "Rajma Rice")
        {
             Counte[17] +=150;
        } 
        else if(i == "Chat")
        {
             Counte[18] +=40;
        } 
        else if(i == "Paratha")
        {
             Counte[19] +=20;
        } 
        else if(i == "Aallu Paratha")
        {
             Counte[20] +=60;
        } 
        else if(i == "Chapati")
        {
             Counte[21] +=15;
        } 
        else if(i == "Palak Paneer")
        {
             Counte[22] +=120;
        } 
        else if(i == "Muter Paneer")
        {
             Counte[23] +=140;
        } 
        else if(i == "Chees Sandwich")
        {
             Counte[24] +=50;
        } 
        else if(i == "Dal Palak")
        {
             Counte[25] +=50;
        } 
        else if(i == "Poha")
        {
             Counte[26] +=30;
        } 
        else if(i == "Fafda")
        {
             Counte[27] +=30;
        } 
        else if(i == "Sev Tamater")
        {
             Counte[28] +=50;
        } 
        else if(i == "Dokla")
        {
             Counte[29] +=60;
        } 
    }
}

void RemoveDluplicasy(vector<string>&OrederList)
{
    //For sorting the vector
    sort(OrederList.begin(),OrederList.end());

    //For rearrange the vecor the unique element become first and duplicate in the end of vector and last is itrator ,it use for poiting the last unique element in vector 
    auto last= unique(OrederList.begin(),OrederList.end());

    //for removing the duplicacy in a vector after last to end of the vector
    OrederList.erase(last,OrederList.end());

}

int Add(vector<int>& Counte)
{
    int sum=0;

    for(int i:Counte)
    {
        sum+=i;
    }
    return sum;
}

void Bill(vector<string>&OrederList,vector<int>Counte, int sum)
{
    for(string i:OrederList)
    {
       if(i == "Samosa")
        {
            cout<<left<<setw(20)<<i<<" : "<<Counte[0]<<endl;
        }
        else if(i == "Kachori")
        {
              cout<<left<<setw(20)<<i<<" : "<<Counte[1]<<endl;
        }
        else if(i == "Pav bhaji")
        {
              cout<<left<<setw(20)<<i<<" : "<<Counte[2]<<endl;
        }
        else if(i == "Dabeli")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[3]<<endl;
        }
        else if(i == "Jalebi")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[4]<<endl;
        }
        else if(i == "Dosa")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[5]<<endl;
        } 
        else if(i == "Pizza")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[6]<<endl;
        } 
        else if(i == "Dal Bati")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[7]<<endl;
        } 
        else if(i == "Chole Bhatura")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[8]<<endl;
        } 
        else if(i == "Burger")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[9]<<endl;
        } 
        else if(i == "Chai")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[10]<<endl;
        } 
        else if(i == "Coffee")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[11]<<endl;
        } 
        else if(i == "Chaumin")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[12]<<endl;
        } 
        else if(i == "Manchurian")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[13]<<endl;
        } 
        else if(i == "Biryani")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[14]<<endl;
        } 
        else if(i == "Pulao")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[15]<<endl;
        } 
        else if(i == "Edli")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[16]<<endl;
        } 
        else if(i == "Rajma Rice")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[17]<<endl;
        } 
        else if(i == "Chat")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[18]<<endl;
        } 
        else if(i == "Paratha")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[19]<<endl;
        } 
        else if(i == "Aallu Paratha")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[20]<<endl;
        } 
        else if(i == "Chapati")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[21]<<endl;
        } 
        else if(i == "Palak Paneer")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[22]<<endl;
        } 
        else if(i == "Muter Paneer")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[23]<<endl;
        } 
        else if(i == "Chees Sendwich")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[24]<<endl;
        } 
        else if(i == "Dal Palak")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[25]<<endl;
        } 
        else if(i == "Poha")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[26]<<endl;
        } 
        else if(i == "Fafda")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[27]<<endl;
        } 
        else if(i == "Sev Tamater")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[28]<<endl;
        } 
        else if(i == "Dhokla")
        {
             cout<<left<<setw(20)<<i<<" : "<<Counte[29]<<endl;
        } 
    }
    cout<<"TOTAL: "<<sum<<endl<<endl;

}

int main()
{
     
    cout<<endl<<"**********WELLCOME TO SAYYED RESTAURANT**********"<<endl<<endl;
    cout<<"MENU: "<<endl;

    vector<string> Items =  {"Samosa", "Kachori", "Pav bhaji", "Dabeli", "Jalebi", "Dosa","Pizza","Dal Bati", "Chole Bhature", "Burger","Chai","Coffee","Chaumin","Manchurian", "Biryani","Pulao","Edli","Rajma Rice","Chat","Paratha","Aallu Paratha", "Chapati","Palak Paneer","Muter Paneer","Chees Sendwich","Dal Palak","Poha","Fafda","Sev Tamater","Dhokla"};
    vector<int> Price = {20,20,60,40,50,60,300,150,130,100,20,40,70,70,230,200,50,150,40,20,60,15,120,140,50,50,30,30,50,60};

    PrintMenu(Items,Price);


    cout<<"Note: Type 'STOP', If You Want to stop the odering"<<endl;
    cout<<"If You Eat Something, Pleas Give Oreder: "<<endl<<endl;

    vector<string>OrederList;
    vector<int>Counte(30,0);

    GetOrder(OrederList);
    AddMony(Counte,OrederList);
    RemoveDluplicasy(OrederList);

    
   int sum = Add(Counte);

    cout<<endl<<"BILL: "<<endl;

    Bill(OrederList,Counte,sum);
 

    return 0;
}