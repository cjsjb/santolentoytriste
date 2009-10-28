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

		\clef "bass"
		\key a \minor
		a, 2 ~  |
		a, 2 ~  |
		a, 2  |
		d 2  |
		%% 5
		g, 2  |
		c 4 ~ c 8 b,  |
		a, 2  |
		d 2  |
		e 2  |
		%% 10
		a, 2  |
		a, 2  |
		d 2  |
		g, 2  |
		c 4 ~ c 8 b,  |
		%% 15
		a, 2  |
		d 2  |
		e 2  |
		a, 2  |
		e 4 d 8 e  |
		%% 20
		f 2  |
		d 4 c 8 d  |
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		%% 25
		b, 2  |
		c 2  |
		e 4 d 8 e  |
		f 2  |
		d 4 c 8 d  |
		%% 30
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		b, 2  |
		a, 2 ~  |
		%% 35
		a, 2  |
		a, 2  |
		d 2  |
		g, 2  |
		c 4 ~ c 8 b,  |
		%% 40
		a, 2  |
		d 2  |
		e 2  |
		a, 2  |
		e 4 d 8 e  |
		%% 45
		f 2  |
		d 4 c 8 d  |
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		%% 50
		b, 2  |
		c 2  |
		e 4 d 8 e  |
		f 2  |
		d 4 c 8 d  |
		%% 55
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		b, 2  |
		a, 2 ~  |
		%% 60
		a, 2 ~  |
		a, 2  |
		\bar "|."
	} % Voice
>> % Staff ends
