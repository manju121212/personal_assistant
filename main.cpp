#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void greetings(){
    // current date and time based on  your time zone
    time_t now=time(0);
    tm *time= localtime(&now);

    if(time-> tm_hour<12){
        cout<<"Good Morning Manjunath"<<endl;
        string phrase = "Good Morning Manjunath";
        string command ="espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time-> tm_hour>=12 && time->tm_hour<=16){
        cout<<"Good Afternoon Manjunath"<<endl;
        string phrase = "Good Afternoon Manjunath";
        string command ="espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    else if(time->tm_hour>17 && time->tm_hour< 24){
        cout<<"Good Evening Manjunath"<<endl;
        string phrase = "Good Evening Manjunath";
        string command ="espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

};


void datetime(){
    time_t now=time(0);
    char *dt= ctime(&now);
    cout<<"The date and time is:"<<dt<<endl;

};



int main(){
    system("cls");
     cout<<"#################MANJUNATH PERSONAL ASSISTANT##############"<<endl;

     string password;// to take password
     string command; // to take command from user


     do{
        cout<<"|ENTER THE PASSWORD TO CONFIRM YOU ARE MANJUNATH"<<endl;
        string phrase ="ENTER THE PASSWORD TO CONFIRM YOU ARE MANJUNATH";
        string command ="espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo= {0};
        PROCESS_INFORMATION processInfo= {0};

        if(password=="manjunath"){

            cout<<"#################################################################################################"<<endl;
            greetings();
            do{
                cout<<"#############################################################################################"<<endl;
                cout<<"How can I help you Manjunath"<<endl;
                string phrase= "How can I help you Manjunath";
                string command ="espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question==>";
                getline(cin,command);
                cout<<endl;
                cout<<endl;

                cout<<"Answer to your question is ==>";

                if(command=="hello" || command=="hi"){
                    cout<<"Hello Manjunath...."<<endl;
                    string phrase= "Hello Manjunath";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(command=="what is the time"){
                    datetime();
                }
                else if(command=="who are you" || command=="who is speaking"){
                    cout<<"I am personal assistant created by Manjunath"<<endl;
                    string phrase= "I am personal assistant created by Manjunath";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open photo"){
                    cout<<"opening photo"<<endl;
                    string phrase= "opening photo";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Program Files\\CodeBlocks\\personal assistant.png",NULL, NULL, SW_NORMAL);

                }
                else if(command=="open google"){
                    cout<<"opening google"<<endl;
                    string phrase= "opening google";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                 else if(command=="open notepad"){
                    cout<<"opening notepad"<<endl;
                    string phrase= "opening notepad";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\Systems32.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if(command=="open youtube"){
                    cout<<"opening youtube"<<endl;
                    string phrase= "opening youtube";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if(command=="close chrome browser"){
                    cout<<"closing chrome browser"<<endl;
                    string phrase= "closing chrome browser";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }
                 else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Manjunath  see you soon!"<<endl;
                    string phrase = "Good Bye Manjunath see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else{
                    cout<<"Sorry could not understand your command please try again"<<endl;
                    string phrase= "Sorry could not understand your command please try again";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            }while(1);

     }
     else{
        system("cls");
            cout<<"######################################### PERSONAL ASSISTANT ##########"<<endl;
            cout<<" Incorrect Password " <<endl;
            cout<<endl;

            string phrase ="Incorrect Password, please enter correct passord";
            string command ="espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
     }
      }while(1);

      return 0;
}


