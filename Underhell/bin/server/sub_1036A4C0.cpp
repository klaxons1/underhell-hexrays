void __thiscall sub_1036A4C0(int this)
{
  float v2; // edx
  float v3; // eax
  long double v4; // st7
  double v5; // st4
  double v6; // st6
  long double v7; // st4
  double v8; // st5
  double v9; // st1
  double v10; // st3
  long double v11; // st7
  double v12; // rt1
  long double v13; // st3
  double v14; // st4
  double v15; // st5
  double v16; // rt2
  float v17; // [esp+0h] [ebp-18h]
  float v18[2]; // [esp+Ch] [ebp-Ch] BYREF
  float v19; // [esp+14h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 708);
  v3 = *(float *)(this + 712);
  v18[0] = *(float *)(this + 704);
  v18[1] = v2;
  v19 = v3;
  sub_10424CA0(v18[0]);
  v4 = v19;
  sub_10424CA0(v19);
  if ( 0.0 != v18[0] || 0.0 != v4 )
  {
    v5 = *(float *)(dword_106B31C8 + 28) * 300.0;
    if ( fabs(v18[0]) > v5 )
    {
      if ( v18[0] <= 0.0 )
        v9 = 1.0;
      else
        v9 = -1.0;
      v18[0] = v5 * v9 + v18[0];
      v6 = -1.0;
      v7 = 0.0;
      v8 = 1.0;
    }
    else
    {
      v6 = -1.0;
      v7 = 0.0;
      v8 = 1.0;
      v18[0] = 0.0;
    }
    v10 = *(float *)(dword_106B31C8 + 28) * 600.0;
    if ( fabs(v4) > v10 )
    {
      v12 = v10;
      v13 = v7;
      v14 = v12;
      if ( v13 >= v4 )
      {
        v16 = v8;
        v15 = v14;
        v6 = v16;
      }
      else
      {
        v15 = v14;
      }
      v11 = v4 + v6 * v15;
    }
    else
    {
      v11 = v7;
    }
    v19 = v11;
    sub_100E0EA0(this, v18);
    v17 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_1036A4C0, v17, off_106739C4);
  }
}
