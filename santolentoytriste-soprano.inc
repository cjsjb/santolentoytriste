        \context Staff = "Soprano" << 
            \set Staff.instrumentName = "Soprano"
            \set Staff.shortInstrumentName = "S."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \once \override Staff.TimeSignature #'style = #'() \time 2/4
                
% absTime = 0 barStart = 0
\clef "treble"
                \key a \minor
                R2*2 
% absTime = 1920 barStart = 1920
 |
                
% absTime = 3840 barStart = 3840
e'' 4. d'' 16 e''  |
                
% absTime = 5760 barStart = 5760
f'' 2  |
%% 5
                
% absTime = 7680 barStart = 7680
d'' 4 g'' 8 f''  |
                
% absTime = 9600 barStart = 9600
e'' 2  |
                
% absTime = 11520 barStart = 11520
c'' 8 c'' c'' a'  |
                
% absTime = 13440 barStart = 13440
d'' 2  |
                
% absTime = 15360 barStart = 15360
e'' 4 e'' 8 d''  |
%% 10
                
% absTime = 17280 barStart = 17280
e'' 4 e''  |
                
% absTime = 19200 barStart = 19200
e'' 4 d'' 8 e''  |
                
% absTime = 21120 barStart = 21120
f'' 4. e'' 8  |
                
% absTime = 23040 barStart = 23040
d'' 8 d'' g'' f''  |
                
% absTime = 24960 barStart = 24960
e'' 4 e''  |
%% 15
                
% absTime = 26880 barStart = 26880
c'' 4. a' 8  |
                
% absTime = 28800 barStart = 28800
d'' 4 d''  |
                
% absTime = 30720 barStart = 30720
e'' 4 e'' 8 d''  |
                
% absTime = 32640 barStart = 32640
e'' 2  |
                
% absTime = 34560 barStart = 34560
a'' 8 g'' f'' e''  |
%% 20
                
% absTime = 36480 barStart = 36480
f'' 2  |
                
% absTime = 38400 barStart = 38400
g'' 8 f'' e'' d''  |
                
% absTime = 40320 barStart = 40320
e'' 2  |
                
% absTime = 42240 barStart = 42240
f'' 8 e'' d'' c''  |
                
% absTime = 44160 barStart = 44160
d'' 2  |
%% 25
                
% absTime = 46080 barStart = 46080
e'' 4 e'' 8 d''  |
                
% absTime = 48000 barStart = 48000
e'' 4 e''  |
                
% absTime = 49920 barStart = 49920
a'' 8 g'' f'' e''  |
                
% absTime = 51840 barStart = 51840
f'' 2  |
                
% absTime = 53760 barStart = 53760
g'' 8 f'' e'' d''  |
%% 30
                
% absTime = 55680 barStart = 55680
e'' 2  |
                
% absTime = 57600 barStart = 57600
f'' 8 e'' d'' c''  |
                
% absTime = 59520 barStart = 59520
d'' 2  |
                
% absTime = 61440 barStart = 61440
e'' 4 e'' 8 d''  |
                
% absTime = 63360 barStart = 63360
e'' 4 e''  |
%% 35
                
% absTime = 65280 barStart = 65280
r4. e'' 8  |
                
% absTime = 67200 barStart = 67200
e'' 4 d'' 8 e''  |
                
% absTime = 69120 barStart = 69120
f'' 4 f'' 8 e''  |
                
% absTime = 71040 barStart = 71040
d'' 8 d'' g'' f''  |
                
% absTime = 72960 barStart = 72960
e'' 4. c'' 8  |
%% 40
                
% absTime = 74880 barStart = 74880
c'' 4 c'' 8 a'  |
                
% absTime = 76800 barStart = 76800
d'' 4 d''  |
                
% absTime = 78720 barStart = 78720
e'' 4 e'' 8 d''  |
                
% absTime = 80640 barStart = 80640
e'' 2  |
                
% absTime = 82560 barStart = 82560
a'' 8 g'' f'' e''  |
%% 45
                
% absTime = 84480 barStart = 84480
f'' 2  |
                
% absTime = 86400 barStart = 86400
g'' 8 f'' e'' d''  |
                
% absTime = 88320 barStart = 88320
e'' 2  |
                
% absTime = 90240 barStart = 90240
f'' 8 e'' d'' c''  |
                
% absTime = 92160 barStart = 92160
d'' 2  |
%% 50
                
% absTime = 94080 barStart = 94080
e'' 4 e'' 8 d''  |
                
% absTime = 96000 barStart = 96000
e'' 4 e''  |
                
% absTime = 97920 barStart = 97920
a'' 8 g'' f'' e''  |
                
% absTime = 99840 barStart = 99840
f'' 2  |
                
% absTime = 101760 barStart = 101760
g'' 8 f'' e'' d''  |
%% 55
                
% absTime = 103680 barStart = 103680
e'' 2  |
                
% absTime = 105600 barStart = 105600
f'' 8 e'' d'' c''  |
                
% absTime = 107520 barStart = 107520
d'' 2  |
                
% absTime = 109440 barStart = 109440
e'' 4 e'' 8 d''  |
                
% absTime = 111360 barStart = 111360
e'' 4 e'' ~  |
%% 60
                
% absTime = 113280 barStart = 113280
e'' 2  |
                
% absTime = 115200 barStart = 115200
R2  |
                \bar "|."
            } % Voice
            \lyricsto "voice 3" \new Lyrics \lyricmode {
                \override LyricText #'self-alignment-X = #LEFT
                \set ignoreMelismata = ##t
                 "Sa-" _ "an-" "to," "sa-" _ "an-" "to," "san-" "to_es" "el" "se-" "ñor" "del" "u-" "ni-" "ver-" "so." "Lle-" "nos" "es-" "tán" "el" "cie-" "lo" "y" "la" "tie-" "rra" "de" "tu" "glo-" "ria" "ho-" "sa-" "an-" "na." "Ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na" "e-" "e-" "n_el" "cie-" "lo." "Ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na" "e-" "e-" "n_el" "cie-" "lo." "Ben-" "di-" "to_el" "que" "vie-" "ne_e-" "n_el" "nom-" "bre" "del" "se-" "ñor." "Ho-" "san" "-na_en" "el" "cie-" "lo," "ho-" "sa-" "an-" "na." "Ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na" "e-" "e-" "n_el" "cie-" "lo." "Ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na," "ho-" _ "sa-" "an-" "na" "e-" "e-" "n_el" "cie-" "lo." _ 
                \unset ignoreMelismata
            } % Lyrics 3
        >> % Staff ends
