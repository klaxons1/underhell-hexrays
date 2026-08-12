int *__thiscall sub_102ADEC0(int *this, const char *Src)
{
  int v3; // eax

  sub_10230F20(dword_10482A28, (__int16 *)&Src, Src);
  v3 = dword_10482AE8;
  if ( dword_10482AE8 < 64 )
  {
    word_10482A60[dword_10482AE8] = (__int16)Src;
    v3 = dword_10482AE8;
  }
  dword_10482AE8 = v3 + 1;
  if ( dword_10482AEC <= v3 )
    dword_10482AEC = v3;
  *this = v3;
  return this;
}
