//
//  main.cpp
//  Cohesic sample code
//
//  Created by Thomas Goodhart on 2018-11-07.
//  Copyright © 2018 David Goodhart. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Chest{
private:
    string cFlag;
public:
    Chest() {cFlag="[ ]";};
    string getCFlag() const{return cFlag;};
    void setCFlag(string c){cFlag=c;};
};

class Lungs:public Chest{
private:
    string lFlag;
public:
    Lungs(){lFlag="[ ]";};
    string getLFlag() const{return lFlag;};
    void setLFlag(string l){lFlag=l;};
};

class RightLung:public Lungs{
private:
    string rlFlag;
public:
    RightLung(){rlFlag="[ ]";};
    string getRLFlag() const{return rlFlag;};
    void setRLFlag(string rl){rlFlag=rl;};
};

class RightSuperiorLobe:public RightLung {
private:
    string rslFlag;
public:
    RightSuperiorLobe(){rslFlag="[ ]";};
    string getRSLFlag() const{return rslFlag;};
    void setRSLFlag(string rsl){rslFlag=rsl;};
};

class RightMiddleLobe:public RightLung{
private:
    string rmlFlag;
public:
    RightMiddleLobe(){rmlFlag="[ ]";};
    string getRMLFlag() const{return rmlFlag;};
    void setRMLFlag(string rml){rmlFlag=rml;};
};

class RightInferiorLobe:public RightLung{
private:
    string rilFlag;
public:
    RightInferiorLobe(){rilFlag="[ ]";};
    string getRILFlag() const{return rilFlag;};
    void setRILFlag(string ril){rilFlag=ril;};
};

class LeftLung:public Lungs{
private:
    string llFlag;
public:
    LeftLung(){llFlag="[ ]";};
    string getLLFlag() const{return llFlag;};
    void setLLFlag(string ll){llFlag=ll;};
};

class LeftSuperiorLobe:public LeftLung{
private:
    string lslFlag;
public:
    LeftSuperiorLobe(){lslFlag="[ ]";};
    string getLSLFlag() const{return lslFlag;};
    void setLSLFlag(string lsl){lslFlag=lsl;};
};

class LeftInferiorLobe:public LeftLung{
private:
    string lilFlag;
public:
    LeftInferiorLobe(){lilFlag="[ ]";};
    string getLILFlag() const{return lilFlag;};
    void setLILFlag(string lil){lilFlag=lil;};
};

class Heart:public Chest{
private:
    string hFlag;
public:
    Heart(){hFlag="[ ]";};
    string getHFlag() const {return hFlag;};
    void setHFlag(string h){hFlag=h;};
};

class LeftVentricle:public Heart{
private:
    string lvFlag;
public:
    LeftVentricle(){lvFlag="[ ]";};
    string getLVFlag() const{return lvFlag;};
    void setLVFlag(string lv){lvFlag=lv;};
};

class RightVentricle:public Heart{
private:
    string rvFlag;
public:
    RightVentricle(){rvFlag="[ ]";};
    string getRVFlag() const{return rvFlag;};
    void setRVFlag(string rv){rvFlag=rv;};
};

class LeftAtrium:public Heart{
private:
    string laFlag;
public:
    LeftAtrium(){laFlag="[ ]";};
    string getLAFlag() const{return laFlag;};
    void setLAFlag(string la){laFlag=la;};
};

class RightAtrium:public Heart{
private:
    string raFlag;
public:
    RightAtrium(){raFlag="[ ]";};
    string getRAFlag() const{return raFlag;};
    void setRAFlag(string ra){raFlag=ra;};
};

class Septum:public Heart{
private:
    string sFlag;
public:
    Septum(){sFlag="[ ]";};
    string getSFlag() const{return sFlag;};
    void setSFlag(string s){sFlag=s;};
};


void printHeiarchy(RightSuperiorLobe RSL, RightMiddleLobe RML, RightInferiorLobe RIL,
                   LeftSuperiorLobe LSL, LeftInferiorLobe LIL, LeftAtrium LA,
                   RightAtrium RA, LeftVentricle LV, RightVentricle RV, Septum SE)
{
    cout<<RSL.getCFlag()<<"Chest"<<endl;
    cout<<"   "<<RSL.getLFlag()<<"Lungs"<<endl;
    cout<<"      "<<RSL.getRLFlag()<<"Right Lung"<<endl;
    cout<<"         "<<RSL.getRSLFlag()<<"Right Superior Lobe"<<endl;
    cout<<"         "<<RML.getRMLFlag()<<"Right Middle Lobe"<<endl;
    cout<<"         "<<RIL.getRILFlag()<<"Right Inferior Lobe"<<endl;
    cout<<"      "<<LSL.getLLFlag()<<"Left Lung"<<endl;
    cout<<"         "<<LSL.getLSLFlag()<<"Left Superior Lobe"<<endl;
    cout<<"         "<<LIL.getLILFlag()<<"Left Inferior Lobe"<<endl;
    cout<<"   "<<LV.getHFlag()<<"Heart"<<endl;
    cout<<"      "<<LV.getLVFlag()<<"Left Ventricle"<<endl;
    cout<<"      "<<RV.getRVFlag()<<"Right Ventricle"<<endl;
    cout<<"      "<<LA.getLAFlag()<<"Left Atrium"<<endl;
    cout<<"      "<<RA.getRAFlag()<<"Right Atrium"<<endl;
    cout<<"      "<<SE.getSFlag()<<"Septum"<<endl;
};

int main() {
    
    RightSuperiorLobe RSL;
    RightMiddleLobe RML;
    RightInferiorLobe RIL;
    LeftSuperiorLobe LSL;
    LeftInferiorLobe LIL;
    LeftAtrium LA;
    RightAtrium RA;
    LeftVentricle LV;
    RightVentricle RV;
    Septum SE;
    cout<<"Here is the anatomical heiarchy of the gross Chest. "<<endl;
    printHeiarchy(RSL, RML, RIL, LSL, LIL, LA, RA, LV, RV, SE);
    string option, part, pass="[x]", dont_pass="[ ]", flag="y";
    int x=0;
    do {
        cout<<"Select or deselect an item? 's' for select or 'd' for deselect."<<endl;
        getline(cin,option);
        if (option=="s"){
            cout<<"You have chosen to select an item. Please state the item you wish to select."<<endl;
            getline(cin,part);
            if(part=="chest"){RSL.setCFlag(pass); x=1;};
            if(part=="lungs"){RSL.setCFlag(pass); RSL.setLFlag(pass); x=1;};
            if(part=="right lung"){RSL.setCFlag(pass); RSL.setLFlag(pass); RSL.setRLFlag(pass); x=1;};
            if(part=="right superior lobe"){RSL.setCFlag(pass); RSL.setLFlag(pass); RSL.setRLFlag(pass);
                RSL.setRSLFlag(pass); x=1;};
            if(part=="right middle lobe"){RSL.setCFlag(pass); RSL.setLFlag(pass); RSL.setRLFlag(pass);
                RML.setRMLFlag(pass); x=1;};
            if(part=="right inferior lobe"){RSL.setCFlag(pass); RSL.setLFlag(pass); RSL.setRLFlag(pass);
                RIL.setRILFlag(pass);x=1;};
            if(part=="left lung"){RSL.setCFlag(pass); RSL.setLFlag(pass); LSL.setLLFlag(pass);x=1;};
            if(part=="left superior lobe"){RSL.setCFlag(pass); RSL.setLFlag(pass); LSL.setLLFlag(pass);
                LSL.setLSLFlag(pass);x=1;};
            if(part=="left inferior lobe"){RSL.setCFlag(pass); RSL.setLFlag(pass); LSL.setLLFlag(pass);
                LIL.setLILFlag(pass);x=1;};
            if(part=="heart"){RSL.setCFlag(pass); LV.setHFlag(pass);x=1;};
            if(part=="left ventricle"){RSL.setCFlag(pass); LV.setHFlag(pass); LV.setLVFlag(pass);x=1;};
            if(part=="right ventricle"){RSL.setCFlag(pass); LV.setHFlag(pass); RV.setRVFlag(pass);x=1;};
            if(part=="left atrium"){RSL.setCFlag(pass); LV.setHFlag(pass); LA.setLAFlag(pass);x=1;};
            if(part=="right atrium"){RSL.setCFlag(pass); LV.setHFlag(pass); RA.setRAFlag(pass);x=1;};
            if(part=="septum"){RSL.setCFlag(pass); LV.setHFlag(pass); SE.setSFlag(pass);x=1;};
            
            if(x==0){cout<<"Error! Invalid entry. Next time, type only the items exactly as they appear on the list. "<<endl;};
            x=0;
        };
        if (option=="d"){
            cout<<"You have chosen to deselect an item. Please state the item you wish to deselect"<<endl;
            getline(cin,part);
            if(part=="chest"){RSL.setCFlag(dont_pass); RSL.setLFlag(dont_pass); RSL.setRLFlag(dont_pass); RSL.setRSLFlag(dont_pass);
                RML.setRMLFlag(dont_pass); RIL.setRILFlag(dont_pass); LSL.setLLFlag(dont_pass); LSL.setLSLFlag(dont_pass);
                LIL.setLILFlag(dont_pass);LV.setHFlag(dont_pass);LV.setLVFlag(dont_pass); RV.setRVFlag(dont_pass); LA.setLAFlag(dont_pass);
                RA.setRAFlag(dont_pass); SE.setSFlag(dont_pass);x=1;};
            if(part=="lungs"){RSL.setLFlag(dont_pass); RSL.setRLFlag(dont_pass); RSL.setRSLFlag(dont_pass); RML.setRMLFlag(dont_pass);
                RIL.setRILFlag(dont_pass); LSL.setLLFlag(dont_pass); LSL.setLSLFlag(dont_pass); LIL.setLILFlag(dont_pass);x=1;};
            if(part=="right lung"){RSL.setRLFlag(dont_pass); RSL.setRSLFlag(dont_pass); RML.setRMLFlag(dont_pass); RIL.setRILFlag(dont_pass);x=1;};
            if(part=="right superior lobe"){RSL.setRSLFlag(dont_pass);x=1;};
            if(part=="right middle lobe"){RML.setRMLFlag(dont_pass);x=1;};
            if(part=="right inferior lobe"){RIL.setRILFlag(dont_pass);x=1;};
            if(part=="left lung"){LSL.setLLFlag(dont_pass); LSL.setLSLFlag(dont_pass); LIL.setLILFlag(dont_pass);x=1;};
            if(part=="left superior lobe"){LSL.setLSLFlag(dont_pass);x=1;};
            if(part=="left inferior lobe"){LIL.setLILFlag(dont_pass);x=1;};
            if(part=="heart"){LV.setHFlag(dont_pass); LV.setLVFlag(dont_pass); RV.setRVFlag(dont_pass); LA.setLAFlag(dont_pass);
                RA.setRAFlag(dont_pass); SE.setSFlag(dont_pass);x=1;};
            if(part=="left ventricle"){LV.setLVFlag(dont_pass);x=1;};
            if(part=="right ventricle"){RV.setRVFlag(dont_pass);x=1;};
            if(part=="left atrium"){LA.setLAFlag(dont_pass);x=1;};
            if(part=="right atrium"){RA.setRAFlag(dont_pass);x=1;};
            if(part=="septum"){SE.setSFlag(dont_pass);x=1;};
            
            if(x==0){cout<<"Error! Invalid entry. Next time, type only the items exactly as they appear on the list. "<<endl;};
            x=0;
        }
        if(option!="s" && option!="d"){
            cout<<"Error! Invalid input. Next time, use only 's' for selecting an item or 'd' for deselecting an item."<<endl;
        }
        cout<<"Would you like to select or deselect another item? 'y' if yes, 'n' if no."<<endl;
        getline(cin,flag);
        if(flag!="y" && flag!="n"){
            cout<<"Error! Invalid input. Please choose 'y' to continue or 'n' to exit."<<endl;
            getline(cin,flag);
        }
        
    }while(flag=="y");
    cout<<"Here is the updated anatmoical heiarchy of the gross chest."<<endl;
    printHeiarchy(RSL, RML, RIL, LSL, LIL, LA, RA, LV, RV, SE);
    return 0;
};
