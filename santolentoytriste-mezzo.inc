\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
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
		c' 4 c'  |
		c' 4 b 8 c'  |
		d' 4. c' 8  |
%% 15
		b 8 b e' d'  |
		c' 4 c'  |
		a 4. a 8  |
		b 4 b  |
		b 4 a 8 ( b )  |
%% 20
		c' 2  |
		cis' 8 ~ cis' cis' ~ cis'  |
		d' 2  |
		b 8 ~ b a ( b )  |
		c' 2  |
%% 25
		a 8 ~ a a ~ a  |
		b 2  |
		b 4. b 8  |
		c' 4 c'  |
		cis' 8 ~ cis' cis' ~ cis'  |
%% 30
		d' 2  |
		b 8 ~ b a ( b )  |
		c' 2  |
		a 8 ~ a a ~ a  |
		b 2  |
%% 35
		b 4. b 8  |
		c' 4 c' ~  |
		c' 4 r8 c'  |
		c' 4 b 8 c'  |
		d' 4 d' 8 c'  |
%% 40
		b 8 b e' d'  |
		c' 4. a 8  |
		a 4 a 8 a  |
		b 4 b  |
		b 4 a 8 ( b )  |
%% 45
		c' 2  |
		cis' 8 ~ cis' cis' ~ cis'  |
		d' 2  |
		b 8 ~ b a ( b )  |
		c' 2  |
%% 50
		a 8 ~ a a ~ a  |
		b 2  |
		b 4. b 8  |
		c' 4 c'  |
		cis' 8 ~ cis' cis' ~ cis'  |
%% 55
		d' 2  |
		b 8 ~ b a ( b )  |
		c' 2  |
		a 8 ~ a a ~ a  |
		b 2  |
%% 60
		b 4. b 8  |
		c' 4 c' ~  |
		c' 2  |
		R2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-mezzo" {
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
