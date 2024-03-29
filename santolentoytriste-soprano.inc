\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		R2*4  |
%% 5
		e' 4. ( d' 16 e' )  |
		f' 4. ( e' 8 )  |
		d' 4 ( g' 8 f' )  |
		e' 2  |
		c' 8 c' b c'  |
%% 10
		d' 2  |
		e' 4 e' 8 d'  |
		e' 4 e'  |
		e' 4 d' 8 e'  |
		f' 4 r8 e'  |
%% 15
		d' 8 d' g' f'  |
		e' 4 e'  |
		c' 4. c' 8  |
		d' 4 d'  |
		e' 4 e' 8 ( d' )  |
%% 20
		e' 2  |
		a' 8 ( g' ) f' ( e' )  |
		f' 2  |
		g' 8 ( f' ) e' ( d' )  |
		e' 2  |
%% 25
		f' 8 ( e' ) d' ( c' )  |
		d' 2  |
		e' 4. d' 8  |
		e' 4 e'  |
		a' 8 ( g' ) f' ( e' )  |
%% 30
		f' 2  |
		g' 8 ( f' ) e' ( d' )  |
		e' 2  |
		f' 8 ( e' ) d' ( c' )  |
		d' 2  |
%% 35
		e' 4. d' 8  |
		e' 4 e' ~  |
		e' 4 r8 e'  |
		e' 4 d' 8 e'  |
		f' 4 f' 8 e'  |
%% 40
		d' 8 d' g' f'  |
		e' 4. c' 8  |
		c' 4 b 8 c'  |
		d' 4 d'  |
		e' 4 e' 8 ( d' )  |
%% 45
		e' 2  |
		a' 8 ( g' ) f' ( e' )  |
		f' 2  |
		g' 8 ( f' ) e' ( d' )  |
		e' 2  |
%% 50
		f' 8 ( e' ) d' ( c' )  |
		d' 2  |
		e' 4. d' 8  |
		e' 4 e'  |
		a' 8 ( g' ) f' ( e' )  |
%% 55
		f' 2  |
		g' 8 ( f' ) e' ( d' )  |
		e' 2  |
		f' 8 ( e' ) d' ( c' )  |
		d' 2  |
%% 60
		e' 4. d' 8  |
		e' 4 e' ~  |
		e' 2  |
		R2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-soprano" {
		%
		"San" __ "to," __ "san" __ "to,"
		"san" -- "to es" "el" "Se" -- "ñor" "del" "u" -- "ni" -- "ver" -- "so."
		%
		"Lle" -- "nos" "es" -- "tán" "el" "cie" -- "lo" "y" "la" "tie" -- "rra"
		"de" "tu" "glo" -- "ria," "¡ho" -- "san" __ "na!"
		%
		"Ho" __ "san" __ "na," "ho" __ "san" __ "na,"
		"ho" __ "san" __ "na" "en" "el" "cie" -- "lo."
		%
		"Ho" __ "san" __ "na," "ho" __ "san" __ "na,"
		"ho" __ "san" __ "na" "en" "el" "cie" -- "lo." __
		%
		"Ben" -- "di" -- "to el" "que" "vie" -- "ne e" -- "n el" "nom" -- "bre" "del" "se" -- "ñor."
		"Ho" -- "san" "na en" "el" "cie" -- "lo," "ho" -- "san" __ "na."
		%
		"Ho" __ "san" __ "na," "ho" __ "san" __ "na,"
		"ho" __ "san" __ "na" "en" "el" "cie" -- "lo."
		%
		"Ho" __ "san" __ "na," "ho" __ "san" __ "na,"
		"ho" __ "san" __ "na" "en" "el" "cie" -- "lo." __
	} % Lyrics 3
>> % Staff ends
