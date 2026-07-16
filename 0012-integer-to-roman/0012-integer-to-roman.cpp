class Solution {
public:
    string intToRoman(int num) {
        vector<int> numbers={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> symbols={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string roman;
        for(int i=0;i<numbers.size();i++){
            while(num>=numbers[i]){
                roman+=symbols[i];
                num-=numbers[i];
            }
        }
        return roman;
    }
};