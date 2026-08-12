int *__thiscall sub_1044A6B0(_DWORD *this)
{
  if ( *this == 5 )
    return (int *)this[2];
  if ( (dword_107018E4 & 1) == 0 )
  {
    dword_107018E4 |= 1u;
    sub_10431290(&dword_107018D4);
    atexit(sub_10479E90);
  }
  sub_10431020((char **)&dword_107018D4, 0);
  return &dword_107018D4;
}
