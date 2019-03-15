#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <string>

//using namespace std;

// Since 1995, Java has changed our world . . . and our expectations.. Today, with technology such a part of our daily lives, we take it for granted that we can be connected and access applications and content anywhere, anytime. Because of Java, we expect digital devices to be smarter, more functional, and way more entertaining. In the early 90s, extending the power of network computing to the activities of everyday life was a radical vision. In 1991, a small group of Sun engineers called the "Green Team" believed that the next wave in computing was the union of digital consumer devices and computers. Led by James
// Gosling, the team worked around the clock and created the programming language that would revolutionize our world – Java. The Green Team demonstrated their new language with an interactive, handheld home-entertainment controller that was originally targeted at the digital cable television industry. Unfortunately, the concept was much too advanced for the them at the time. But it was just right for the Internet, which was just starting to take off. In 1995, the team announced that the Netscape Navigator Internet browser would incorporate Java technology. Today, Java not only permeates the Internet, but also is the invisible force behind many of the applications and devices that power our day-to-day lives. From mobile phones to handheld devices, games and navigation systems to e-business solutions, Java is everywhere!

class GetText
{
public:
    std::string text;
    std::string line;
    int wordCount=0;
    int len;
    std::vector<std::string> stringHolder;

        void userText()
    {
        std::cout << "Please type a message: ";

        do
        {
            getline(std::cin, line);
            text += line;

            text.erase( std::remove_if( text.begin(), text.end(),ispunct),text.end() );


        }
        while(line != "");
    }

    void to_string()
    {
        std::cout << "\n" << "User's Text: " << "\n" << text << std::endl;
    }

    void count_word(){
        len=text.length();
        for(int i=0; i<len; i++){
            if(text[i]==' ')
            {
                wordCount++;
            }
        }

        std::cout<<"\n"<<"Word Count: "<< wordCount<<std::endl;

    }

    void word_many(){
        std::cout<<"word_many is working"<<std::endl;
        wordCount=1;
        std::string words;
        stringHolder.push_back(text);
        std::cout<<stringHolder[0]<<std::endl;

        sort(stringHolder.begin(),stringHolder.end());

        int vSize = stringHolder.size();
        std::cout<<vSize<<std::endl;
        words=stringHolder[0];

            for(int i=1;i<vSize;i++){
            if(words!=stringHolder[i]){
                std::cout<<words<<" appeared "<<wordCount<<" amount of times " <<std::endl;
                wordCount=0;
                words=stringHolder[i];
            }
            wordCount++;
        }

        std::cout<<words<<" appeared "<<wordCount<<" Amount of times "<<std::endl;
    }



     };

int main(){

    GetText soal;

    soal.userText();
    //soal.to_string();
    soal.count_word();


    system("pause");


    //int menu;
    //std::cout<<"Menu :"<<std::endl;
    //std::cout<<"1.Count all words"<<std::endl;
    //std::cout<<"2.Count Per words"<<std::endl;
    //std::cout<<"3.Word that only appear 1 time"<<std::endl;
    //std::cout<<"4.Word that mostly appear on text and how many"<<std::endl;
    //std::cout<<"5.Word that least appear on text and how many"<<std::endl;
    //std::cout<<"Insert The Number: ";
    //std::cin>>menu;
return 0;
    }
