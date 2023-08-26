clc
clear all

f=@(x)x^3+4*x^2-10;

a=1;
b=2;
n=0;
toler=0.001;
err=inf;
while err>=toler
    c=(a+b)/2;
    if(f(a)*f(c)<0)
        b=c;
    else
        a=c;
    end
    err=abs(f(c));
    n=n+1;
end

display(n)
display(c)