function [f, P1]=parse_signal(audio,k)

x=audio(:,k);
sampling_freq=44100;
signal_length=length(x);
X = fft(x);
P2 = abs(X/signal_length);
P1 = P2(1:signal_length/2+1);
P1(2:end-1) = 2*P1(2:end-1);
f = sampling_freq*(0:(signal_length/2))/signal_length;

end