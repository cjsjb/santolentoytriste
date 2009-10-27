\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 3" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \minor
		R2*2  |
		e'' 4. ( d'' 16 e'' )  |
		f'' 2  |
		%% 5
		d'' 4 ( g'' 8 f'' )  |
		e'' 2  |
		c'' 8 c'' c'' a'  |
		d'' 2  |
		e'' 4 e'' 8 d''  |
		%% 10
		e'' 4 e''  |
		e'' 4 d'' 8 e''  |
		f'' 4. e'' 8  |
		d'' 8 d'' g'' f''  |
		e'' 4 e''  |
		%% 15
		c'' 4. a' 8  |
		d'' 4 d''  |
		e'' 4 e'' 8 ( d'' )  |
		e'' 2  |
		a'' 8 ( g'' ) f'' ( e'' )  |
		%% 20
		f'' 2  |
		g'' 8 ( f'' ) e'' ( d'' )  |
		e'' 2  |
		f'' 8 ( e'' ) d'' ( c'' )  |
		d'' 2  |
		%% 25
		e'' 4 ~ e'' 8 d''  |
		e'' 4 e''  |
		a'' 8 ( g'' ) f'' ( e'' )  |
		f'' 2  |
		g'' 8 ( f'' ) e'' ( d'' )  |
		%% 30
		e'' 2  |
		f'' 8 ( e'' ) d'' ( c'' )  |
		d'' 2  |
		e'' 4 ~ e'' 8 d''  |
		e'' 4 e''  |
		%% 35
		r4. e'' 8  |
		e'' 4 d'' 8 e''  |
		f'' 4 f'' 8 e''  |
		d'' 8 d'' g'' f''  |
		e'' 4. c'' 8  |
		%% 40
		c'' 4 c'' 8 a'  |
		d'' 4 d''  |
		e'' 4 e'' 8 ( d'' )  |
		e'' 2  |
		a'' 8 ( g'' ) f'' ( e'' )  |
		%% 45
		f'' 2  |
		g'' 8 ( f'' ) e'' ( d'' )  |
		e'' 2  |
		f'' 8 ( e'' ) d'' ( c'' )  |
		d'' 2  |
		%% 50
		e'' 4 ~ e'' 8 d''  |
		e'' 4 e''  |
		a'' 8 ( g'' ) f'' ( e'' )  |
		f'' 2  |
		g'' 8 ( f'' ) e'' ( d'' )  |
		%% 55
		e'' 2  |
		f'' 8 ( e'' ) d'' ( c'' )  |
		d'' 2  |
		e'' 4 ~ e'' 8 d''  |
		e'' 4 e'' ~  |
		%% 60
		e'' 2  |
		R2  |
		\bar "|."
	} % Voice

	\lyricsto "voice 3" \new Lyrics \lyricmode {
		%
		"San" -- "to," "san" -- "to,"
		"san" -- "to es" "el" "Se" -- "ñor" "del" "u" -- "ni" -- "ver" -- "so."
		%
		"Lle" -- "nos" "es" -- "tán" "el" "cie" -- "lo" "y" "la" "tie" -- "rra"
		"de" "tu" "glo" -- "ria," "¡ho" -- "san" -- "na!"
		%
		"Ho" -- "san" -- "na," "ho" -- "san" -- "na,"
		"ho" -- "san" -- "na" "en" __ "el" "cie" -- "lo."
		%
		"Ho" -- "san" -- "na," "ho" -- "san" -- "na,"
		"ho" -- "san" -- "na" "en" __ "el" "cie" -- "lo."
		%
		"Ben" -- "di" -- "to el" "que" "vie" -- "ne e" -- "n el" "nom" -- "bre" "del" "se" -- "ñor."
		"Ho" -- "san" "na en" "el" "cie" -- "lo," "ho" -- "san" -- "na."
		%
		"Ho" -- "san" -- "na," "ho" -- "san" -- "na,"
		"ho" -- "san" -- "na" "en" __ "el" "cie" -- "lo."
		%
		"Ho" -- "san" -- "na," "ho" -- "san" -- "na,"
		"ho" -- "san" -- "na" "en" __ "el" "cie" -- "lo."
	} % Lyrics 3
>> % Staff ends
