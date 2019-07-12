\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo
	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor

		R2*20  |
		a' 8 ( g' f' e' )  |
		f' 8 a' d'' f''  |
		d'' 2  |
		r8 g' c'' e''  |
%% 25
		c'' 2  |
		r8 f' a' d''  |
		b' 4 c'' 8 d''  |
		c'' 4 a'  |
		a' 8 ( g' f' e' )  |
%% 30
		f' 8 a' d'' f''  |
		d'' 2  |
		r8 g' c'' e''  |
		c'' 2  |
		r8 f' a' d''  |
%% 35
		b' 4 c'' 8 d''  |
		c'' 4 a' ~  |
		a' 2  |
		R2*8  |
		a' 8 ( g' f' e' )  |
		f' 8 a' d'' f''  |
		d'' 2  |
		r8 g' c'' e''  |
%% 50
		c'' 2  |
		r8 f' a' d''  |
		b' 4 c'' 8 d''  |
		c'' 4 a'  |
		a' 8 ( g' f' e' )  |
%% 55
		f' 8 a' d'' f''  |
		d'' 2  |
		r8 g' c'' e''  |
		c'' 2  |
		r8 f' a' d''  |
%% 60
		b' 4 c'' 8 d''  |
		c'' 4 a' ~  |
		a' 2  |
		R2  |
		\bar "|."
	}
>>
