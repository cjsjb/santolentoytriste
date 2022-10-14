\context Staff = "Tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key a \minor
		R2*4  |
%% 5
		e 4. ( d 16 e )  |
		f 4. ( e 8 )  |
		d 4 ( g 8 f )  |
		e 2  |
		c 8 c b, c  |
%% 10
		d 2  |
		e 4 e 8 d  |
		e 4 e  |
		e 4 d 8 e  |
		f 4 r8 e  |
%% 15
		d 8 d g f  |
		e 4 e  |
		c 4. c 8  |
		d 4 d  |
		e 4 e 8 ( d )  |
%% 20
		e 2  |
		R2  |
		r8 a a ( c' )  |
		b 2  |
		r8 g g ( b )  |
%% 25
		a 2  |
		r8 f f ( a )  |
		gis 4. gis 8  |
		a 4 a  |
		R2  |
%% 30
		r8 a a ( c' )  |
		b 2  |
		r8 g g ( b )  |
		a 2  |
		r8 f f ( a )  |
%% 35
		gis 4. gis 8  |
		a 4 a ~  |
		a 4 r8 e  |
		e 4 d 8 e  |
		f 4 f 8 e  |
%% 40
		d 8 d g f  |
		e 4. c 8  |
		c 4 b, 8 c  |
		d 4 d  |
		e 4 e 8 ( d )  |
%% 45
		e 2  |
		R2  |
		r8 a a ( c' )  |
		b 2  |
		r8 g g ( b )  |
%% 50
		a 2  |
		r8 f f ( a )  |
		gis 4. gis 8  |
		a 4 a  |
		R2  |
%% 55
		r8 a a ( c' )  |
		b 2  |
		r8 g g ( b )  |
		a 2  |
		r8 f f ( a )  |
%% 60
		gis 4. gis 8  |
		a 4 a ~  |
		a 2  |
		R2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-tenor" {
		%
		"San" __ "to," __ "san" __ "to,"
		"san" -- "to es" "el" "Se" -- "ñor" "del" "u" -- "ni" -- "ver" -- "so."
		%
		"Lle" -- "nos" "es" -- "tán" "el" "cie" -- "lo" "y" "la" "tie" -- "rra"
		"de" "tu" "glo" -- "ria," "¡ho" -- "san" __ "na!"
		%
		"Ho" -- "san" __ "na," "ho" -- "san" __ "na,"
		"ho" -- "sa..." __ "...en" "el" "cie" -- "lo."
		%
		"Ho" -- "san" __ "na," "ho" -- "san" __ "na,"
		"ho" -- "sa..." __ "...en" "el" "cie" -- "lo." __
		%
		"Ben" -- "di" -- "to el" "que" "vie" -- "ne e" -- "n el" "nom" -- "bre" "del" "se" -- "ñor."
		"Ho" -- "san" "na en" "el" "cie" -- "lo," "ho" -- "san" __ "na."
		%
		"Ho" -- "san" __ "na," "ho" -- "san" __ "na,"
		"ho" -- "sa..." __ "...en" "el" "cie" -- "lo."
		%
		"Ho" -- "san" __ "na," "ho" -- "san" __ "na,"
		"ho" -- "sa..." __ "...en" "el" "cie" -- "lo." __
	}
>>
