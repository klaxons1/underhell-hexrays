float *__thiscall sub_10153E20(float *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  float **v6; // eax

  sub_1003D000((int)this);
  this[307] = 0.0;
  *(_DWORD *)this = &CClient_Precipitation::`vftable';
  *((_DWORD *)this + 1) = &CClient_Precipitation::`vftable';
  *((_DWORD *)this + 2) = &CClient_Precipitation::`vftable';
  *((_DWORD *)this + 3) = &CClient_Precipitation::`vftable';
  this[311] = 0.0;
  this[312] = 0.0;
  this[313] = 0.0;
  *((_WORD *)this + 632) = -1;
  this[317] = this[311];
  this[314] = NAN;
  *((_DWORD *)this + 315) = 0xFFFF;
  this[318] = 0.0;
  this[319] = 0.0;
  this[320] = 0.0;
  this[321] = 0.0;
  this[322] = 0.0;
  this[324] = -1.0;
  this[323] = 0.0;
  this[325] = 0.0;
  this[326] = -1.0;
  this[327] = 0.0;
  this[308] = 0.0;
  this[298] = 0.0;
  this[309] = 1.0;
  v2 = dword_1043CCD8;
  v3 = dword_1043CCD8;
  if ( dword_1043CCD8 + 1 > dword_1043CCD0 )
  {
    sub_1010AFF0(&dword_1043CCCC, dword_1043CCD8 - dword_1043CCD0 + 1);
    v2 = dword_1043CCD8;
  }
  v4 = dword_1043CCCC;
  dword_1043CCD8 = v2 + 1;
  v5 = v2 - v3;
  dword_1043CCDC = dword_1043CCCC;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_1043CCCC + 4 * v3 + 4), (const void *)(dword_1043CCCC + 4 * v3), 4 * v5);
    v4 = dword_1043CCCC;
  }
  v6 = (float **)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}
