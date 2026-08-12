void __thiscall sub_1008EDD0(int this, float *a2, float *a3)
{
  char v3; // al
  long double v4; // st7
  long double v5; // st6
  long double v6; // st7
  long double v7; // st6
  long double v8; // st7
  long double v9; // st6

  if ( (*(_BYTE *)(this + 36) & 0x40) != 0 || (v3 = *(_BYTE *)(this + 41), v3 == 2) || !v3 )
  {
    *a2 = *(float *)(this + 8);
    a2[1] = *(float *)(this + 12);
    a2[2] = *(float *)(this + 16);
    *a3 = *(float *)(this + 20);
    a3[1] = *(float *)(this + 24);
    a3[2] = *(float *)(this + 28);
  }
  else
  {
    v4 = fabs(*(float *)(this + 8));
    v5 = fabs(*(float *)(this + 20));
    if ( v5 >= v4 )
      v4 = v5;
    *a2 = -v4;
    *a3 = v4;
    v6 = fabs(*(float *)(this + 12));
    v7 = fabs(*(float *)(this + 24));
    if ( v7 >= v6 )
      v6 = v7;
    a2[1] = -v6;
    a3[1] = v6;
    v8 = fabs(*(float *)(this + 16));
    v9 = fabs(*(float *)(this + 28));
    if ( v9 >= v8 )
    {
      v8 = v9;
      a2[2] = -v9;
    }
    else
    {
      a2[2] = -v8;
    }
    a3[2] = v8;
  }
}
