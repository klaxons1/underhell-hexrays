_DWORD *__thiscall sub_100A79D0(_DWORD *this, char *Source, int a3, int a4)
{
  unsigned int v5; // kr00_4
  char *v6; // eax

  if ( this != (_DWORD *)-12 )
  {
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    this[9] = 0;
    this[10] = 0;
  }
  *this = a3;
  v5 = strlen(Source);
  v6 = (char *)sub_10184390(v5 + 1);
  this[11] = v6;
  sub_104299C0(v6, Source, v5 + 1);
  this[1] = 0;
  this[2] = 0;
  this[12] = a4;
  return this;
}
