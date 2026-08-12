_WORD *__cdecl sub_1023A8F0(char *Src, const char *a2)
{
  int v2; // ecx
  _WORD *result; // eax
  int var2; // [esp+0h] [ebp-2h] BYREF

  LOWORD(var2) = HIWORD(v2);
  if ( (dword_106C4F84 & 1) == 0 )
  {
    dword_106C4F84 |= 1u;
    sub_1042F8A0(0, 32, 0);
    atexit(sub_10473FB0);
  }
  result = (_WORD *)sub_1042F670(&var2, Src);
  if ( *result == 0xFFFF )
  {
    DevMsg("%s directly referenced wave %s (should use game_sounds.txt system instead)\n", a2, Src);
    return (_WORD *)sub_1042F910((int)&var2, Src);
  }
  return result;
}
