char *__thiscall sub_1044CA50(_DWORD *this, char *Src)
{
  char **v3; // eax
  char **v4; // edi

  sub_1044C560(this);
  *this = 5;
  v3 = (char **)sub_104498A0(dword_1068FEFC);
  v4 = v3;
  this[2] = v3;
  if ( v3 )
    sub_10431290(v3);
  return sub_10431020(v4, Src);
}
