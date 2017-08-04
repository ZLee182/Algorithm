/*
本题思路：
将三行字符串分别存储，声明vector<string>变量，用于存储要插入的字符串。
开始循环遍历每一个字符串，设置两个变量，第一个是检查首字母在第几个字符串里，第二个是检测后面的所有的字符串是否都在里面，进行检查。
*/
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string str1 = "QWERTYUIOPqwertyuiop";
        string str2 = "ASDFGHJKLasdfghjkl";
        string str3 = "ZXCVBNMzxcvbnm";
        vector<string> word;
        for(int i = 0 ; i<words.size() ; i++ )
        {
            int sign = 0;
            int add = 1;
            if(str1.find(words[i][0])<str1.size())
                sign = 1;
            else if(str2.find(words[i][0])<str2.size())
                sign = 2;
            else 
                sign = 3;
            
            for(int j = 0 ; j < words[i].size() ; j++ )
            {
                 switch (sign)
                 {
                    case 1:
                        if(str1.find(words[i][j])>str1.size())
                            add = 0;
                        break;
                    case 2:
                        if(str2.find(words[i][j])>str2.size())
                            add = 0;
                        break;
                    case 3:
                        if(str3.find(words[i][j])>str3.size())
                            add = 0;
                        break;
                    default:    
                        break;
                 }
                
            }
            if(add==1)
                word.push_back(words[i]);
            
        }
        return word;
    }
};
