%Nick Carter
%10/23/2012
%Midterm

%-------------------------------
%1
%-------------------------------
yes = 'y'; %in this problem i made a loop, so that input of multiple 
%lengths and heights was much easier. it will loop as long as you enter 'y'
while yes == 'y'
   
w = input('Please enter your width: '); %Here they enter their data
l = input('Please enter your length: ');
area = l * w; %This is the primary calculation
disp(['Your area is ' num2str(area) ' cm squared.']); %This displays the area
yes = input('Would you like to go again?(y/n) ','s');% this checks if the user wants to go again
end
%----Answers----
% Please enter your width: 2
% Please enter your length: 1
% Your area is 2 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 2
% Please enter your length: 3
% Your area is 6 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 2
% Please enter your length: 5
% Your area is 10 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 4
% Please enter your length: 1
% Your area is 4 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 4
% Please enter your length: 3
% Your area is 12 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 4
% Please enter your length: 5
% Your area is 20 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 6
% Please enter your length: 1
% Your area is 6 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 6
% Please enter your length: 3
% Your area is 18 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 6
% Please enter your length: 5
% Your area is 30 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 8
% Please enter your length: 1
% Your area is 8 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 8
% Please enter your length: 3
% Your area is 24 cm squared.
% Would you like to go again?(y/n) y
% Please enter your width: 8
% Please enter your length: 5
% Your area is 40 cm squared.
% Would you like to go again?(y/n) n
%-------------------------------
%2
%-------------------------------
v1 = .3; %Here I name all of the variables.
v2 = .3;
e1 = 206e9;
e2 = 206e9;
d1 = 38;
d2 = 70;
f = 450;
z = .25;

%These are the two equations that you gave us to find two more variables.
a = nthroot((3*f/8)*((((1-v1^2)/e1)+((1-v2^2)/e2))/((1/d1)+(1/d2))),3);
pmax = (3*f)/(2*pi*(a^2));

%This is the calculation of the phis, I use a lot of parenthesis to be sure
%that the computer does not misinterpret the equation
phix = -pmax*((1-((z/a)*atan(a/z)))*(1-v1)-.5*(1+(z^2/a^2))^-1);
phiy = phix;
phiz = (-pmax)/(1+(z^2/a^2));
disp(['The contact stress in unit-vector form is: <' num2str(phix) ' , ' num2str(phiy) ' , ' num2str(phiz) '>']);
%----Answers----
%The contact stress in unit-vector form is: <916.5138 , 916.5138 , -3437.1392>
%-------------------------------
%3
%-------------------------------
y = [0,-.2,.4,-.6,.8,-1,-1.2,-1.4,1.6];%here i input the vector
for n=1:length(y)%I use this loop to begin looking for >0 and <0 values
    if y(n) < 0
        minw(n) = y(n);%This makes the negative vector
    end
    if y(n) > 0 
        maxw(n) = y(n);%This makes the positive vector
    end
end
minw(minw==0) = [];%Removes zeroes
maxw(maxw==0) = [];
minl = min(minw);%Finds minimum vlues
maxl = max(maxw);%Finds maximum values
root = sqrt(maxw);%Finds the square root of the values of the positive vector
disp(minl)
disp(maxl)
disp(root)
%----Answers----
%    -1.4000
%     1.6000
%     0.6325    0.8944    1.2649
%-------------------------------
%4
%-------------------------------
A = linspace(6,106,8);%Creates the log spaced vector
C = [A(1),A(3),A(5),A(7)];%Created new vector of odd values
disp(['Fifth element ' num2str(A(5)) ])%displays fifth element
disp(['New vector = ' num2str(C) ])%displays vector
%----Answers----
% Fifth element 63.1429
% New vector = 6      34.5714      63.1429      91.7143
%-------------------------------
%5
%-------------------------------
a = magic(5);%magic matrix
newa = a;%used for answer
for i = 1:5%counts rows and columns
    for j = 1:5
        if i+j == 6%checks if diagonal
            newa(i,j) = 0;%removes the value if its on the diagonal
        end
    end
end
newa
%----Answers----
% a =
% 
%     17    24     1     8    15
%     23     5     7    14    16
%      4     6    13    20    22
%     10    12    19    21     3
%     11    18    25     2     9
% 
% 
% newa =
% 
%     17    24     1     8     0
%     23     5     7     0    16
%      4     6     0    20    22
%     10     0    19    21     3
%      0    18    25     2     9
%-------------------------------
%6
%-------------------------------
x = [72,82,97,103,113];
beta = 3.644;
x = x.^beta;%Prepares vector x for the sum
q = length(x);
tdel = ((1/q)*sum(x))^(1/beta);%calculates the variable being asked for.

err = 1;%Err is set within parameters so it will run the first time
z = 10;%given
N = 1;%The count
Sn = 0;%allows it to be used for the sum.
sinf = (pi/(2*z))*coth(pi*z) - (1/(2*(z^2)));%calculates sinfinity
while err >  3e-3%makes sure its in the error range
    for n = 1:N
        Sn = Sn + (1/(n^2 + z^2));%calculates Sn for every new value of N
    end
    err = abs(sinf-Sn); %calculate the error
    N = N+1;
    Sn = 0;%resets the value of Sn so that it does not grow ridiculusly
    end
end

tdel %the value for the first function
N %the cout for the second function.
%----Answers----
% tdel =
%    96.2930
% N =
%    334
%-------------------------------
%7
%-------------------------------
A = [16,32,33,13;5,11,10,8;9,7,6,12;34,14,15,1]%coefficients
D = [91;16;5;43]%resultants
Solvedsys = linsolve(A,D);%solves system
S = Solvedsys(1,1)%displays values of variables
U = Solvedsys(2,1)
P = Solvedsys(3,1)
W = Solvedsys(4,1)
detA = det(A)%determinant
inA = inv(A)%inverse
%----Answers----
% S =
%    -0.1258
% U =
%    -8.7133
% P =
%    11.2875
% W =
%    -0.0500
% detA =
%         7680
% inA =
%    -0.0177   -0.0023    0.0180    0.0333
%    -0.3344    1.2352   -0.4695    0.1000
%     0.3500   -1.1375    0.3875   -0.1000
%     0.0333   -0.1500    0.1500   -0.0333
%-------------------------------
%8
%-------------------------------
n = input('Enter your preferred increment for kW: ');%user puts in increment
disp('kW to Hp conversion chart');%header
disp('-------------------------');
disp('Amount of kW | Horsepower');%columns
kw = linspace(1,15,n);%Creates the vector
for a = 1:n
   curhp = kw(a) * 3412.12 / 2544.5;%calculates the horsepower for the kW
   disp(['   '  num2str(kw(a)) '            ' num2str(curhp) ]) %displays
end
% %----Answers----
% Enter your preferred increment for kW: 30
% kW to Hp conversion chart
% -------------------------
% Amount of kW | Horsepower
%    1            1.341
%    1.4828            1.9883
%    1.9655            2.6357
%    2.4483            3.2831
%    2.931            3.9305
%    3.4138            4.5778
%    3.8966            5.2252
%    4.3793            5.8726
%    4.8621            6.5199
%    5.3448            7.1673
%    5.8276            7.8147
%    6.3103            8.462
%    6.7931            9.1094
%    7.2759            9.7568
%    7.7586            10.4041
%    8.2414            11.0515
%    8.7241            11.6989
%    9.2069            12.3463
%    9.6897            12.9936
%    10.1724            13.641
%    10.6552            14.2884
%    11.1379            14.9357
%    11.6207            15.5831
%    12.1034            16.2305
%    12.5862            16.8778
%    13.069            17.5252
%    13.5517            18.1726
%    14.0345            18.8199
%    14.5172            19.4673
%    15            20.1147
%-------------------------------
%9
%-------------------------------

%This ended up not working, the question was incredibly difficult to
%understand.
x = input('X matrix: ');
e = input('E matrix: ');

xsq = 0;
b = cumsum(e)
for i = 1:length(e)
    newe = 0;
    newx = 0;
    fi = i;
while b(fi) < 5 && fi < length(e)%checks if sum is less than 5
    newe = e(fi) + newe;
    newx = x(fi) + newx;
    fi = fi + 1;
end
j = cumsum(e(fi:length(e)));
while b(fi) >= 5 && j(end) < 5 && fi < length(e) %checks if sum is >5
   newe = e(fi) + newe;
   fi = fi + 1;
   j = cumsum(e(fi:length(e)));
end
    
    xsq = xsq + (newx - newe)/newe;%calcs sum
end
xsq
%----Answers----
% X matrix: [1 7 8 6 5 7 3 5 4]
% E matrix: [2 6 10 4 3 6 1 2 3]
% xsq =
%    NaN