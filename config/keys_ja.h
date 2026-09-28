#pragma once

#include <dt-bindings/zmk/keys.h>

/* JIS認識のWindows向け US印字再現エイリアス */

// 記号（単体押し / Shift押し）
#define JA_AT            &kp LBKT          // @  (JIS: [ キー)
#define JA_LBKT          &kp RBKT          // [  (JIS: ] キー)
#define JA_RBKT          &kp BSLH          // ]  (JIS: \ キー)
#define JA_BACKSLASH     &kp INT1          // \  (JIS: ろ キー)
#define JA_YEN           &kp INT3          // ¥  (JIS: ¥ キー)

#define JA_COLON         &kp SCLN          // :  (JIS: ; キー)
#define JA_SEMICOLON     &kp SCLN          // ;
#define JA_CARET         &kp EQUAL         // ^  (JIS: = キー)
#define JA_TILDE         &kp LS(EQUAL)     // ~  (JIS: Shift + =)

#define JA_DOUBLE_QUOTES &kp LS(N2)        // "  (JIS: Shift + 2)
#define JA_AMPERSAND     &kp LS(N6)        // &  (JIS: Shift + 6)
#define JA_SINGLE_QUOTE  &kp LS(N7)        // '  (JIS: Shift + 7)
#define JA_LEFT_PAREN    &kp LS(N8)        // (  (JIS: Shift + 8)
#define JA_RIGHT_PAREN   &kp LS(N9)        // )  (JIS: Shift + 9)
#define JA_EQUAL         &kp LS(MINUS)     // =  (JIS: Shift + -)
#define JA_PLUS          &kp LS(SEMI)      // +  (JIS: Shift + ;)
#define JA_ASTERISK      &kp LS(SQT)       // *  (JIS: Shift + ')
