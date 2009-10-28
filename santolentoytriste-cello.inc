\context Staff = "Cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1
                
% absTime = 0 barStart = 0
\clef "bass"
                \key a \minor
                a, 2 ~  |
                
% absTime = 1920 barStart = 1920
a, 2 ~  |
                
% absTime = 3840 barStart = 3840
a, 2  |
                
% absTime = 5760 barStart = 5760
d 2  |
%% 5
                
% absTime = 7680 barStart = 7680
g, 2  |
                
% absTime = 9600 barStart = 9600
c 4 ~ c 8 b,  |
                
% absTime = 11520 barStart = 11520
a, 2  |
                
% absTime = 13440 barStart = 13440
d 2  |
                
% absTime = 15360 barStart = 15360
e 2  |
%% 10
                
% absTime = 17280 barStart = 17280
a, 2  |
                
% absTime = 19200 barStart = 19200
a, 2  |
                
% absTime = 21120 barStart = 21120
d 2  |
                
% absTime = 23040 barStart = 23040
g, 2  |
                
% absTime = 24960 barStart = 24960
c 4 ~ c 8 b,  |
%% 15
                
% absTime = 26880 barStart = 26880
a, 2  |
                
% absTime = 28800 barStart = 28800
d 2  |
                
% absTime = 30720 barStart = 30720
e 2  |
                
% absTime = 32640 barStart = 32640
a, 2  |
                
% absTime = 34560 barStart = 34560
e 4 d 8 e  |
%% 20
                
% absTime = 36480 barStart = 36480
f 2  |
                
% absTime = 38400 barStart = 38400
d 4 c 8 d  |
                
% absTime = 40320 barStart = 40320
e 2  |
                
% absTime = 42240 barStart = 42240
c 4 b, 8 c  |
                
% absTime = 44160 barStart = 44160
d 2  |
%% 25
                
% absTime = 46080 barStart = 46080
b, 2  |
                
% absTime = 48000 barStart = 48000
c 2  |
                
% absTime = 49920 barStart = 49920
e 4 d 8 e  |
                
% absTime = 51840 barStart = 51840
f 2  |
                
% absTime = 53760 barStart = 53760
d 4 c 8 d  |
%% 30
                
% absTime = 55680 barStart = 55680
e 2  |
                
% absTime = 57600 barStart = 57600
c 4 b, 8 c  |
                
% absTime = 59520 barStart = 59520
d 2  |
                
% absTime = 61440 barStart = 61440
b, 2  |
                
% absTime = 63360 barStart = 63360
a, 2 ~  |
%% 35
                
% absTime = 65280 barStart = 65280
a, 2  |
                
% absTime = 67200 barStart = 67200
a, 2  |
                
% absTime = 69120 barStart = 69120
d 2  |
                
% absTime = 71040 barStart = 71040
g, 2  |
                
% absTime = 72960 barStart = 72960
c 4 ~ c 8 b,  |
%% 40
                
% absTime = 74880 barStart = 74880
a, 2  |
                
% absTime = 76800 barStart = 76800
d 2  |
                
% absTime = 78720 barStart = 78720
e 2  |
                
% absTime = 80640 barStart = 80640
a, 2  |
                
% absTime = 82560 barStart = 82560
e 4 d 8 e  |
%% 45
                
% absTime = 84480 barStart = 84480
f 2  |
                
% absTime = 86400 barStart = 86400
d 4 c 8 d  |
                
% absTime = 88320 barStart = 88320
e 2  |
                
% absTime = 90240 barStart = 90240
c 4 b, 8 c  |
                
% absTime = 92160 barStart = 92160
d 2  |
%% 50
                
% absTime = 94080 barStart = 94080
b, 2  |
                
% absTime = 96000 barStart = 96000
c 2  |
                
% absTime = 97920 barStart = 97920
e 4 d 8 e  |
                
% absTime = 99840 barStart = 99840
f 2  |
                
% absTime = 101760 barStart = 101760
d 4 c 8 d  |
%% 55
                
% absTime = 103680 barStart = 103680
e 2  |
                
% absTime = 105600 barStart = 105600
c 4 b, 8 c  |
                
% absTime = 107520 barStart = 107520
d 2  |
                
% absTime = 109440 barStart = 109440
b, 2  |
                
% absTime = 111360 barStart = 111360
a, 2 ~  |
%% 60
                
% absTime = 113280 barStart = 113280
a, 2 ~  |
                
% absTime = 115200 barStart = 115200
a, 2  |
                \bar "|."
            } % Voice
        >> % Staff ends
