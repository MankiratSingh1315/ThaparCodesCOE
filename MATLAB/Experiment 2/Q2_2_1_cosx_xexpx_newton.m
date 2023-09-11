clear all
clc

f=@(x) cos(x)-x*exp(x);
syms x;
derivative=diff(f(x));
df=inline(derivative);
N=input('Enter the no. of iterations N:\n ');
tol=0.00001;
x0=input('Enter the initial guess x0:\n ');
for j= 0:N
    if df(x0)==0 %by definition
            disp('Newton Raphson fails')
            break;
    else
        x1=x0-f(x0)/df(x0);
        if abs(x1-x0)>tol
            x0 = x1;
        else
            disp(x1);
            break;
        end

    end
end