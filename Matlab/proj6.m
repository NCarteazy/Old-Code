%Nick Carter
%Lab #6
%Date: 9/11/2012

%------------------------------------------------
%#1
%------------------------------------------------
feet = input('Please enter an amount in feet: ');
meters = feet * .3048;
disp([num2str(feet) 'ft = ' num2str(meters) 'm'])

%
%Please enter an amount in feet: 30
%30ft = 9.144m
%

%------------------------------------------------
%#2
%------------------------------------------------
acres = input('Please enter the number of acres: ');
meters = acres * 4046.86;
disp([num2str(acres) ' acres = ' num2str(meters) ' sq. m'])

%
%Please enter the number of acres: 2.4
%2.4 acres = 9712.464 sq. m
%

%------------------------------------------------
%#3
%------------------------------------------------
number = input('Please enter a positive integer < 4.5x10^15: ');
binary = dec2bin(number);
disp([' The binary representation of ' num2str(number) ' is ' num2str(binary)])

%
%Please enter a positive integer < 4.5x10^15: 77
%The binary representation of 77 is 1001101
%

%------------------------------------------------
%#4
%------------------------------------------------
n = [0:15];
f = (((1+sqrt(5))/2).^n - ((1-sqrt(5))/2).^n)/sqrt(5);
len = length(n);
disp([ repmat('F',len,1) num2str(n') repmat(' =',len,1) num2str(f') ])

%repmat('F',n,1)repmat(' = ',n,1)
%
%F0 = 0
%F1 = 1
%F2 = 1
%F3 = 2
%F4 = 3
%F5 = 5
%F6 = 8
%F7 = 13
%F8 = 21
%F9 = 34
%F10 = 55
%F11 = 89
%F12 = 144
%F13 = 233
%F14 = 377
%F15 = 610
%

%------------------------------------------------
%#5
%------------------------------------------------
months = {'January ', 'February ', 'March ', 'April ', 'May ', 'June ', 'July ', 'August ', 'September ', 'October ', 'November ', 'December '};
disp([ sort(months)'])

%
%    'April '
%    'August '
%    'December '
%    'February '
%    'January '
%    'July '
%    'June '
%    'March '
%    'May '
%    'November '
%    'October '
%    'September '
%