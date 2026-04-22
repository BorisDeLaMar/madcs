t_finish = 10;
t_step = 0.0001;
t = linspace(0, t_finish, t_finish/t_step);
dt1 = 0.1; dt2 = 0.01;


A = [0 1 0; 0 0 1; -1 -3 -2]; b = [1; 1; 1]; c = [1 1 1];

Ad1 = expm(A*dt1); bd1 = inv(A)*(Ad1 - eye(rank(A)))*b;
Ad2 = expm(A*dt2); bd2 = inv(A)*(Ad2 - eye(rank(A)))*b;


u = pi/2*cos(-0.5*t + pi);
    
u_0 = [-pi/2; 0]; u_dot_0 = [0; pi/8];
A_u = [0 1; -1/4 0]; c_u = [1 0];

Ad1_u = expm(A_u*dt1); Ad2_u = expm(A_u*dt2);