function yp = damp(t,z)

oma=1;omer=.5;xix=.05;xit=.005;fo=.03;m=.5;l=1;M=1;k=10;c=.2;ct=.1;phi=.03;
omep=sqrt(9.8/l);omex=sqrt(k/(m+M));mr=.05;

yp = [z(2);fo*cos(oma)*t-z(2)-z(1)-mr(z(3)*sin(z(3))+z(3)^2*cos(z(3)));z(4);-2*xit*y(4)-(omer^2+(fo*cos(oma)*t-z(2)-z(1)-mr(z(3)*sin(z(3))+z(3)^2*cos(z(3)))*sin(z(3))))];
