class Solution {
public:
    int myAtoi(string s) {
        long long int i=0,sum=0,flag=0;
        bool MinusTime=false;
        bool ab=false,cd=false;
            while(i<s.length())
            {
                if(sum>=pow(2,31) || sum*-1<pow(-2,31))
                    break;
                    switch(s[i]){
                        case '0':
                            sum*=10;
                            sum+=0;
                            flag=1;
                            break;
                        case '1':
                            sum*=10;
                            sum+=1;
                            flag=1;
                            break;
                        case '2':
                            sum*=10;
                            sum+=2;
                            flag=1;
                            break;
                        case '3':
                            sum*=10;
                            sum+=3;
                            flag=1;
                            break;
                        case '4':
                            sum*=10;
                            sum+=4;
                            flag=1;
                            break;
                        case '5':
                            sum*=10;
                            sum+=5;
                            flag=1;
                            break;
                        case '6':
                            sum*=10;
                            sum+=6;
                            flag=1;
                            break;
                        case '7':
                            sum*=10;
                            sum+=7;
                            flag=1;
                            break;
                        case '8':
                            sum*=10;
                            sum+=8;
                            flag=1;
                            break;
                        case '9':
                            sum*=10;
                            sum+=9;
                            flag=1;
                            break;
                        case ' ':
                            if(flag==0)
                                break;
                            else
                                i=s.length();
                                break;
                        case '-':
                            if(cd || flag==1){
                                i=s.length();
                                break;
                            }
                            flag=1;
                            ab=true;   
                            MinusTime=true;
                            break;
                        case '+':
                            if(ab || flag==1)
                                i=s.length();
                            flag=1;
                            cd=true;
                            break;
                        case '.':
                            i=s.length();
                            break;
                        default:
                            if(flag==0)
                                return 0;
                            else
                              i=s.length();  
                            
                    }
                i++;
            }
        if(MinusTime)
        {  if(sum*-1<pow(-2,31))
                return -2147483648;
            return sum*-1;
        }   
       else
       {
           if(sum>=pow(2,31))
                return 2147483647;
            return sum;
           
       }
        
    }
};