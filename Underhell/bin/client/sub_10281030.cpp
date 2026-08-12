int __thiscall sub_10281030(int *this, const char *Src, int a3)
{
  int v4; // edx
  int *v5; // ecx
  int result; // eax
  _WORD *i; // esi

  sub_10231140(&Src, Src);
  v4 = this[52];
  v5 = this + 49;
  result = 0;
  if ( v4 <= 0 )
    return sub_10255420(v5, this[52], &Src);
  for ( i = (_WORD *)*v5; *i != (_WORD)Src; ++i )
  {
    if ( ++result >= v4 )
      return sub_10255420(v5, this[52], &Src);
  }
  if ( result < 0 || result >= this[52] )
    return sub_10255420(v5, this[52], &Src);
  return result;
}
