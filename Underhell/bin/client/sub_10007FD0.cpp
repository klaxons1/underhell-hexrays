char __thiscall sub_10007FD0(_DWORD *this, char *Source, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v9; // kr00_4

  if ( this[1] == 32 )
    return 0;
  v9 = strlen(Source);
  this[13 * this[1] + 2] = sub_100DDA40(v9 + 1);
  sub_102282F0((char *)this[13 * this[1] + 2], Source, v9 + 1);
  this[13 * this[1] + 3] = a3;
  this[13 * this[1] + 4] = a4;
  this[13 * this[1] + 6] = a6;
  this[13 * this[1] + 7] = a7;
  this[13 * this[1] + 8] = a5;
  return 1;
}
