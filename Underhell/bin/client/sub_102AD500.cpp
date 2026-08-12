char *__thiscall sub_102AD500(_DWORD *this, char *Src)
{
  char **v3; // eax
  char **v4; // edi

  sub_102AD010(this);
  *this = 5;
  v3 = (char **)sub_102AAF30(dword_103FEFCC);
  v4 = v3;
  this[2] = v3;
  if ( v3 )
    sub_1022D3E0(v3);
  return sub_1022CFC0(v4, Src);
}
