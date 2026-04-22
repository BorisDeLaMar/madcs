clear all
close all
%---------------Plot settings---------------
set(0,'defaultTextInterpreter','latex');
set(groot, 'defaultAxesTickLabelInterpreter','latex');

[audio.signal,Fs] = audioread('input.wav');
info = audioinfo('input.wav');
audio.time = 0:(1/Fs):(info.Duration);

figure(1)
subplot(211)
plot(audio.time(1:end-1),audio.signal(:,1))
hold on, grid on, xlabel('$t, s$'), ylabel('Left')
subplot(212)
plot(audio.time(1:end-1),audio.signal(:,2))
hold on, grid on, xlabel('$t, s$'), ylabel('Right')

[f_left, P1_left]=parse_signal(audio.signal,1);
figure(2)
subplot(121)
hold on, grid on, xlabel('$f$, Hz'), ylabel('Left'), xlim([0, 15000])
plot(f_left, P1_left, 'LineWidth', 2) 

[f_right, P1_right]=parse_signal(audio.signal,2);
subplot(122)
hold on, grid on, xlabel('$f$, Hz'), ylabel('Right'), xlim([0, 15000])
plot(f_right, P1_right, 'LineWidth', 2) 

%Отфильтрованный сигнал

[audio.signal_new,Fs_new] = audioread('output.wav');
info = audioinfo('output.wav');
audio.time = 0:(1/Fs):(info.Duration);

figure(1)
subplot(211)
plot(audio.time(1:end-1),audio.signal_new(:,1))
grid on, xlabel('$t, s$'), ylabel('Left')
subplot(212)
plot(audio.time(1:end-1),audio.signal_new(:,2))
grid on, xlabel('$t, s$'), ylabel('Right')

[f_new_left, P1_new_left]=parse_signal(audio.signal_new,1);
figure(2)
subplot(121)
plot(f_new_left, P1_new_left, 'LineWidth', 2) 

[f_new_right, P1_new_right]=parse_signal(audio.signal_new,2);
figure(2)
subplot(122)
plot(f_new_right, P1_new_right, 'LineWidth', 2) 



