N = input('Enter your N value for the dimensions of the matrix: ');
a = ones(N) - eye(N);
A = zeros(N^2);
n = 1;

    for i = (0:N:N^2-1)
        for j = (0:N:N^2-1)
            for o = 1:N
                for p = 1:N
A(o+i,p+j) = n * a(o,p);
                end
            end
            n = n+1;
        end
    end
    disp(A)
  