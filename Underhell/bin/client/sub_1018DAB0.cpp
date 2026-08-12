void __thiscall sub_1018DAB0(int this, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7

  sub_1008EA70((_BYTE *)(this + 352), (float *)(this + 360), (float *)(this + 372), a2, a3);
  if ( *(float *)(this + 3408) <= (double)*a2 )
    v4 = *(float *)(this + 3408);
  else
    v4 = *a2;
  *a2 = v4;
  if ( *(float *)(this + 3412) <= (double)a2[1] )
    v5 = *(float *)(this + 3412);
  else
    v5 = a2[1];
  a2[1] = v5;
  if ( *(float *)(this + 3416) <= (double)a2[2] )
    v6 = *(float *)(this + 3416);
  else
    v6 = a2[2];
  a2[2] = v6;
  if ( *(float *)(this + 3408) >= (double)*a3 )
    v7 = *(float *)(this + 3408);
  else
    v7 = *a3;
  *a3 = v7;
  if ( *(float *)(this + 3412) >= (double)a3[1] )
    v8 = *(float *)(this + 3412);
  else
    v8 = a3[1];
  a3[1] = v8;
  if ( *(float *)(this + 3416) >= (double)a3[2] )
    a3[2] = *(float *)(this + 3416);
  else
    a3[2] = a3[2];
}
