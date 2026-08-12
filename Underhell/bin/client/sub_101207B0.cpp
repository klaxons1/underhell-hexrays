_WORD *__cdecl sub_101207B0(char *Src, const char *a2)
{
  int v2; // ecx
  _WORD *result; // eax
  int var2; // [esp+0h] [ebp-2h] BYREF

  LOWORD(var2) = HIWORD(v2);
  if ( (dword_10437910 & 1) == 0 )
  {
    dword_10437910 |= 1u;
    sub_10230EB0(0, 32, 0);
    atexit(sub_102CB7E0);
  }
  result = (_WORD *)sub_10230C80(&var2, Src);
  if ( *result == 0xFFFF )
  {
    DevMsg("%s directly referenced wave %s (should use game_sounds.txt system instead)\n", a2, Src);
    return (_WORD *)sub_10230F20((int)&var2, Src);
  }
  return result;
}
