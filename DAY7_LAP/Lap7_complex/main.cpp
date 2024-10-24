#include <iostream>

using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
        void setReal(int r){
            real = r;
        }
        void setImg(int i){
            img = i;
        }
        int getReal(){
            return real;
        }
        int getImg(){
            return img;
        }
        Complex add(Complex& right){
            Complex result;
            result.real=real+right.real;
            result.img=img+right.img;
            return result;
        }

        void print(){
            if(img>0&&real>0){
                if(img==1){
                    cout<<real<<"+"<<"i"<<endl;
                }else{
                    cout<<real<<"+"<<img<<"i"<<endl;
                }
            }else if(img<0&&real!=0){
                if(img==-1){
                     cout<<real<<"-"<<"i"<<endl;
                }else{
                    cout<<real<<img<<"i"<<endl;
                }
            }else if(real==0&&img!=0){
              if(img<0){
                if(img==-1){
                     cout<<"-"<<"i"<<endl;
                }else{
                    cout<<img<<"i"<<endl;
                }
            }else{
                if(img==1){
                    cout<<"i"<<endl;
                }else{
                    cout<<img<<"i"<<endl;
                }
            }
            }else if(img==0&&real!=0){
              if(real<0){
                if(real==-1){
                     cout<<real<<endl;
                }else{
                    cout<<real<<endl;
                }
            }else{
                if(real==1){
                    cout<<real<<endl;
                }else{
                    cout<<real<<endl;
                }
            }
            }else{
                cout<<0<<endl;
            }
        }
};
 Complex add(Complex& left,Complex& right){
            Complex result;
            result.setReal(left.getReal()+right.getReal());
            result.setImg(left.getImg()+right.getImg());
            return result;
}
int main()
{
    Complex c;
    c.setReal(3);
    c.setImg(-4);
    c.print();
    return 0;
}
