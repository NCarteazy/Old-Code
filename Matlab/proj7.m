%Nick Carter
%Lab #8
%9/18/2012

%-------------------------------------
%1
%-------------------------------------

A = zeros(3,3);
A = magic(3)
B = A'
if size(A) == size(B)
for i=1:3
    for j=1:3
C(i,j) = A(i,j) * B (i,j);
    end
end
disp(['The resulting matrix is: ' mat2str(C)]) %displays matrix, not sure if proper
else disp(['ERROR. Matrices not same size'])
end

%
%A =
%
%     8     1     6
%     3     5     7
%     4     9     2
%
%
%B =
%
%     8     3     4
%     1     5     9
%     6     7     2
%
%The matrix is: [64 3 24;3 25 63;24 63 4]
%

%-------------------------------------
%2
%-------------------------------------

n = input('Please enter the size of the matrix: ');
M = ones(n);
for i = 1:n
    for j = 1:n
        if i ~= 1 | j ~= 1    
            M(i,j) = -1;
        end
        if i > 1 & j > 1
            if M(i,j-1) == -1 | M(i-1,j) == -1
                M(i,j) = 1;
            end
        else if i  == 1 & j > 1
                if M(1,j-1) == -1
                    M(i,j) = 1;
                end
       
        else if j == 1 & i > 1
                if M(i-1,1) == -1
                    M(i,j) = 1;
                end
            end
            end
        
        end
    end
end
disp(['The final matrix is: ' mat2str(M)])

%
%Please enter the size of the matrix: 4
%The final matrix is: [1 -1 1 -1;-1 1 -1 1;1 -1 1 -1;-1 1 -1 1]
%        