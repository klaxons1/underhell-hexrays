float *__thiscall sub_10225660(float *this, int a2, float *a3, float a4)
{
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  double v9; // st6
  bool v10; // c0
  double v11; // st7
  double v12; // st5
  double v14; // st4
  double v15; // st7
  double v16; // st4
  double v17; // st5
  float v18; // [esp+0h] [ebp-Ch]
  float v19; // [esp+0h] [ebp-Ch]

  *(_DWORD *)this = &CSceneFindNearestMarkFilter::`vftable';
  this[1] = NAN;
  this[5] = *a3;
  this[6] = a3[1];
  this[7] = a3[2];
  this[10] = 0.0;
  this[12] = 0.0;
  this[8] = a4;
  this[9] = a4;
  this[11] = a4;
  if ( a2 )
  {
    this[1] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    this[2] = *(float *)(a2 + 580);
    this[3] = *(float *)(a2 + 584);
    this[4] = *(float *)(a2 + 588);
    v5 = this[2] - this[5];
    v6 = v5 * v5;
    v7 = this[3] - this[6];
    v8 = this[4] - this[7];
    v18 = v8 * v8 + v7 * v7 + v6;
    v9 = 1.0;
    v10 = a4 < off_10689708(v18) + 1.0;
    v11 = a4;
    if ( v10 )
    {
      v12 = a4;
    }
    else
    {
      v14 = this[2] - this[5];
      v15 = v14 * v14;
      v16 = this[3] - this[6];
      v17 = this[4] - this[7];
      v19 = v17 * v17 + v16 * v16 + v15;
      v9 = 1.0;
      v12 = off_10689708(v19) + 1.0;
      v11 = a4;
    }
    this[8] = v12;
    if ( v12 > v9 )
    {
      return this;
    }
    else
    {
      if ( v11 >= 56755.84086242099 )
        this[8] = 56755.84086242099;
      else
        this[8] = v11;
      return this;
    }
  }
  else
  {
    this[1] = NAN;
    return this;
  }
}
