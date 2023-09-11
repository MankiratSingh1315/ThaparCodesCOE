clc
clear all

g=@(x)(tan(x)/4);
a=-1;
b=1;
tol=0.0001;
x0=1;
x=a:tol:b;

if all(g(x)<a) || all(g(x)>b)
    disp('woring function')
end

for i=1:10000
    x1=g(x0);
    err=abs(x1-x0);
    if err<tol
        disp(x1)
        break
    else
        x0=x1;
    end
end

p=@(x)atan(4*x);
x0=1;
x=a:tol:b;

if (all(p(x)<a) || all(p(x)>b))
    disp('woring function')
end

for i=1:10000
    x1=p(x0);
    err=abs(x1-x0);
    if err<tol
        disp(x1)
        break
    else
        x0=x1;
    end
end