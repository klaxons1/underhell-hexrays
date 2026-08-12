_WORD *__cdecl sub_10167950(int a1, char *Src)
{
  _WORD *result; // eax
  char *v3; // ecx
  int v4; // esi

  result = (_WORD *)a1;
  if ( a1 >= 0 && a1 < dword_106B4FEC )
  {
    v3 = Src;
    if ( !Src )
      v3 = (char *)String;
    v4 = dword_106B4FE0 + 12 * a1;
    result = (_WORD *)sub_1042F910((int)&a1 + 2, v3);
    *(_WORD *)(v4 + 2) = *result;
  }
  return result;
}
