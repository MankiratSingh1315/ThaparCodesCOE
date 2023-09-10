clc
clear all

f=@(x)x^2-17;
x0=4.1;
x1=4.3;
toler=0.001;

for i=1:10000
    x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
    err=abs(x2-x1);
    if err<toler
        disp(x2)
        break
    else
        x0=x1;
        x1=x2;
    end
end
