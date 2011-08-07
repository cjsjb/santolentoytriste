% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Santo lento y triste"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = { 
	\time 2/4
	\skip 2*61  %% 1-61
}
globalTempo = {
	\tempo 4 = 70  \skip 2*61 
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "santolentoytriste-acordes.inc"
		\new StaffGroup <<
			\include "santolentoytriste-soprano.inc"
		>>
		\include "santolentoytriste-cello.inc"

	>> % notes

	\layout {
		\context { \GrandStaff \accepts "Lyrics" }
	}
} % score
