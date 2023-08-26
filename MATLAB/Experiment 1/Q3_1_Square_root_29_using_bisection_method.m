clc
clear all

f=@(x)x^2-29;
M=input('Enter the range you want to find in : ');
h=1;

for i=-M:h:M
    if f(i)*f(i+h)<0
        a=i;
        b=i+h;
        break
    end
end

toler=0.0001;
err=inf;
while err>=toler
    c=(a+b)/2;
    if(f(a)*f(c)<0)
        b=c;
    else
        a=c;
    end
    err=abs(f(c));
end

display(c)