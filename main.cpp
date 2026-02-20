int main(){
#include <iostream>
using namespace std;
int main (){
    cout<<"Project started successfully"<<endl;
    return 0;
}
//Energy (kwh)=(Powerin watts*Hours used)/1000
//Total cost =Total Energy(kwh)*Tariff per kwh
class Appliance {
    public:
    string name;
    double power;
    double hours;

    double energy(){
        return (power*hours)/1000.0;
    }
};
1. Register Appliance
2. View All Appliances
3.Search Appliance By name
4.Calculate Energy Consumption
5.Calculate Electricity Bill
6.Save Data to file
7.Load Data from file
0.Exist

Appliance appliances[50];
int applianceCount=0;
void registerAppliance(){
    if(applianceCount >=50){
        cout<<"Appliance limit reached.\n";
        return;
    }
        Appliance a;
        cout<<"Enter appliance name;";
        cin.ignore();
        getline(cin, a.name);

        if (a.name,empty()){
            cout<<"Name cannot be empty.\n";
            return;
        }
            cout<<"Enter power rating (W):";
            cin>> a.power;
            if(a.power<=0){
                cout<<"Invalid power rating.\n";
                return;
            }
            cout<<"Enter usage hours (0-24):";
            cin>> a.hours;
            if(a.hours <0 ||a.hours > 24){
                cout<< "Invalid usage hours.\n";
                return;
            }
            appliances[applianceCount++]=a;
            cout<<"Appliance registered successfully.\n";
        }
    void viewAppliaances(){
        if(applianceCount== 0){
            cout<<"No appliances registered.\n";
            return;
        }
        for(int i= 0; i< applianceCount;i++){
            cout<< i +1 <<". "
            << appliance[i].name <<" | "
            << appliance[i].power <<"W | "
            << appliance[I].hours << "hrs | "
            << appliance[i].energy()<< "kWh\n";
        }
    }
    void searchAppliance(){
        string search;
        cout<<"Enter appliance name to search:";
        cin.ignore();
        getline(cin,search);
for (int i= 0;i <applianceCount; i++){
    if (appliances[i].name==search){
        cout<<"Found:"
        <<appliance[i].name<<""
        <<appliance[i].energy()<<"kWh\n";
        return;
    }
    cout<<"Appliance not found.\n";
}
void calculateBill(){
    double tariff;
    cout<<"Enter tariff per kWh:";
    cin>> tariff;
    if(tariff<=0){
        cout << "Invalid tariff.\n";
        return;
    }
    double cost =totalEnergy* tariff;
    cout <<"Total Energy: "<<totalEnergy<<"KWh\n";
    cout<<"Total Cost: GHS "<< cost<< endl;
}
void saveToFile(){
    ofstream file("appliances.txt");
    for(int i =0; i <applianceCount; i++){
        file << appliances[i].name <<","
        << appliances[i].power <<","
        << appliances[i].hours <<endl;
    }
    file.close();
    cout<<"Data saved successfully.\n";
}

void loadFromFile(){
    ifstream file("appliance.txt");
    applianceCount= 0;
    while (file.good()){
        Appliance a;
        getline(file.name,',');
        file >> a.power;
        file.ignore();
        file >> a.hours;
        file.ignore();
        if(! a. name.empty()){
            appliances[applianceCount++]= a;
        }
    }
    file.close();
    cout<<"Data loaded successflly.\n";
}
int main(){
    int choice;
    do{
        cout<<"\n1--- Electrical Load Monitoring ---\n";
        cout<<"1. Register Appliance\n";
        cout<<"2. View All Appliances\n";
        cout<<"3. Search Appliance By Name\n";
        cout<<"4. Calculate Energy Consumption\n";
        cout<<"5. Calculate Electricity Bill\n";
        cout<<"6. Save Data to File\n";
        cout<<"7. Load Data from File\n";
        cout<<"0. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: registerAppliance(); break;
            case 2: viewAppliances(); break;
            case 3: searchAppliance(); break;
            case 4: calculateEnergy(); break;
            case 5: calculateBill(); break;
            case 6: saveToFile(); break;
            case 7: loadFromFile(); break;
            case 0: cout<<"Exiting program.\n"; break;
            default: cout<<"Invalid choice.\n";
        }
    }while(choice !=0);
    return 0;
}
    }
// GitHub text commit