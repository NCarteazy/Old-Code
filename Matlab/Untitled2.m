delx=100;txy=-40;dely=-60;tyz=50;delz=80;tzx=70;

ct = delx + dely + delz;
co = txy^2 + tyz^2 + tzx^2 - delx*dely - dely*delz - delz*delx;
cz = delx*dely*delz + 2*txy*tyz*tzx - delx*(tyz^2) - dely*(tzx^2) - delz*(txy^2);
r = roots([1,-ct,-co,-cz])
if r(1)>r(2) & r(1) > r(3)
    newr(1) = r(1);
    if r(2) > r(3)
       newr(2) = r(2);
       newr(3) = r(3);
    else
        newr(3) = r(2);
        newr(2) = r(3);
    end
    
else if r(1) > r(2) & r(1)<r(3)
        newr(1) = r(3);
        newr(3) = r(1);
        newr(2) = r(2);
    else if r(1) < r(2) & r(1) < r(3)
    newr(3) = r(1);
    if r(2) > r(3)
       newr(1) = r(2);
       newr(2) = r(3);
    else
        newr(2) = r(2);
        newr(1) = r(3);
    end
        end
    end
end
newr
totw = (newr(1)-newr(2))/2
ttwth = (newr(2)-newr(3))/2
toth = (newr(1)-newr(3))/2
