int *__thiscall sub_1044A830(_BYTE *this, _BYTE *Src)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)sub_1044A4D0(this, Src);
  if ( v2 )
    return sub_1044A6B0(v2);
  if ( (dword_107018F8 & 1) == 0 )
  {
    dword_107018F8 |= 1u;
    sub_10431290(&dword_107018E8);
    atexit(sub_10479ED0);
  }
  sub_10431020((char **)&dword_107018E8, 0);
  return &dword_107018E8;
}
