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
		a, 2  |
		d 2  |
		e 2  |
		a, 2  |
		%% 5
		a, 2  |
		d 2  |
		g, 2  |
		c 4 ~ c 8 b,  |
		a, 2  |
		%% 10
		d 2  |
		e 2  |
		a, 2  |
		a, 2  |
		d 2  |
		%% 15
		g, 2  |
		c 4 ~ c 8 b,  |
		a, 2  |
		d 2  |
		e 2  |
		%% 20
		a, 2  |
		e 4 d 8 e  |
		f 2  |
		d 4 c 8 d  |
		e 2  |
		%% 25
		c 4 b, 8 c  |
		d 2  |
		b, 2  |
		c 2  |
		e 4 d 8 e  |
		%% 30
		f 2  |
		d 4 c 8 d  |
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		%% 35
		b, 2  |
		a, 2 ~  |
		a, 2  |
		a, 2  |
		d 2  |
		%% 40
		g, 2  |
		c 4 ~ c 8 b,  |
		a, 2  |
		d 2  |
		e 2  |
		%% 45
		a, 2  |
		e 4 d 8 e  |
		f 2  |
		d 4 c 8 d  |
		e 2  |
		%% 50
		c 4 b, 8 c  |
		d 2  |
		b, 2  |
		c 2  |
		e 4 d 8 e  |
		%% 55
		f 2  |
		d 4 c 8 d  |
		e 2  |
		c 4 b, 8 c  |
		d 2  |
		%% 60
		b, 2  |
		a, 2 ~  |
		a, 2 ~  |
		a, 2  |
		\bar "|."
	} % Voice
>> % Staff ends
