void __thiscall sub_101592A0(int this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st4
  double v5; // st5
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st7
  float v11; // [esp+0h] [ebp-8h]

  if ( *(_BYTE *)(this + 1416) == 1 )
  {
    v2 = sub_101356D0();
    v3 = *v2 - *(float *)(this + 1420);
    v4 = v2[1] - *(float *)(this + 1424);
    v5 = v2[2] - *(float *)(this + 1428);
    v11 = v5 * v5 + v4 * v4 + v3 * v3;
    v6 = off_103EDFE0(v11);
    v7 = *(float *)(this + 7584);
    v8 = v6;
    v9 = 0.15 * v7;
    if ( v8 < v7 )
    {
      if ( v8 >= v9 )
        v10 = (1.0 - (v8 - v9) / (v7 - v9)) * *(float *)(this + 1444);
      else
        v10 = *(float *)(this + 1444);
      flt_104452F0 = v10 + flt_104452F0;
    }
  }
}
