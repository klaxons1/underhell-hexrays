int *__thiscall sub_1044D550(int *this, const char *Src)
{
  int v3; // eax

  sub_1042F910(dword_107019F8, (__int16 *)&Src, Src);
  v3 = dword_10701AB8;
  if ( dword_10701AB8 < 64 )
  {
    word_10701A30[dword_10701AB8] = (__int16)Src;
    v3 = dword_10701AB8;
  }
  dword_10701AB8 = v3 + 1;
  if ( dword_10701ABC <= v3 )
    dword_10701ABC = v3;
  *this = v3;
  return this;
}
