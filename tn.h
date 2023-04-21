/* tn.h - tokentypes(토큰 정보), errorTypes(에러 정보) 정의
* programmer - 김지윤, 김도연, 김원우, 하윤지
* date - 2023/04/21
*/
enum tokentypes { TEOF, TCONST, TELSE, TIF, TINT, TRETURN, TVOID, TWHILE, TEQUAL, TNOTEQU, TLESSE, TGREATE, TAND, TOR, TINC, TDEC, TASSIGN, TADDASSIGN, TSUBASSIGN, TMULASSIGN, TDIVASSIGN, TMODASSIGN, TIDENT, TCOMMENT, TNUMBER, TSEMICOLON, TPLUS, TMINUS, TSTAR, TMOD, TSLASH, TNOT, TLESS, TGREAT, TRSBRACKET, TLSBRACKET, TCOMMA, TRMBRACKET, TLMBRACKET,TRLBRACKET, TLLBRACKET, TSEPARATOR, TLINE, TILLID, TERROR };
enum errorTypes { noerror, illsp, illid, overst, illlen, illchar };


