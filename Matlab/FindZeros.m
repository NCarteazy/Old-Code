function Rt = FindZeros(deltafind,Nroot,del,w)
f = feval(deltafind,del,w);
indx = find(f(1:end-1).*f(2:end)<0);
L = length(indx);
if L<Nroot
    Nroot = L;
end
Rt = zeros(Nroot,1);
for k = 1:Nroot
    Rt(k) = fzero(deltafind,[del(indx(k)),del(indx(k)+1],[],w);
end
