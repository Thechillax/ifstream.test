#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Solution{
    public : 
    std::vector<std::string> WordHolder1;
    std::string WordHolder2;
    std::vector<char> CharHolder;


    void FetchData(){
        std::ifstream MyFile("config.json");

        while(getline(MyFile, WordHolder2)){
            WordHolder1.push_back(WordHolder2);
        }

        for(int i = 0; i < WordHolder1.size(); i++){
            std::cout << WordHolder1.at(i) << std::endl;
            for(int m = 0; m < WordHolder1.at(i).size(); m++){
                if (WordHolder1.at(i).at(m) ==  '{' || WordHolder1.at(i).at(m) == '}'){
                    continue;
                }
                else {
                    CharHolder.push_back(WordHolder1[i].at(m));
                    std::cout << CharHolder[m];

                }
            }
        }

    }
};



int main(){
    Solution test;
    test.FetchData();
}