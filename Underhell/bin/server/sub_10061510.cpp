double __thiscall sub_10061510(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  double v6; // st6
  int v7; // esi
  int v8; // edx
  double v9; // rt0
  double v10; // st6
  double v11; // st7
  double v12; // st6
  int v13; // edx
  double v14; // st6
  double v15; // st6
  double v16; // rt1
  int v17; // edx
  double v18; // rt2
  double v19; // rtt
  double v20; // st6
  double v21; // st7
  double v22; // st6

  v2 = sub_10078330(this);
  v3 = sub_1007DFD0(v2);
  v4 = this[27] - 1;
  if ( v4 < 0 )
    return -1.0;
  v6 = 1.0;
  if ( v4 < 4 )
  {
LABEL_10:
    if ( v4 > 0 )
    {
      v17 = 56 * v4;
      while ( v6 < v3 )
      {
        v19 = v6;
        v20 = v3;
        v21 = v19;
        v22 = v20 - *(float *)(this[24] + v17 + 8);
        --v4;
        v17 -= 56;
        if ( v4 <= 0 )
          break;
        v18 = v22;
        v6 = v21;
        v3 = v18;
      }
    }
  }
  else
  {
    v7 = 56 * v4;
    while ( v6 < v3 )
    {
      v8 = this[24];
      v9 = v6;
      v10 = v3;
      v11 = v9;
      v12 = v10 - *(float *)(v8 + v7 + 8);
      v13 = v7 + v8;
      if ( v12 <= v9 )
      {
        --v4;
        return *(float *)(this[24] + 56 * v4 + 4);
      }
      v14 = v12 - *(float *)(v13 - 48);
      if ( v14 <= v11 )
      {
        v4 -= 2;
        return *(float *)(this[24] + 56 * v4 + 4);
      }
      v15 = v14 - *(float *)(v13 - 104);
      if ( v15 <= v11 )
      {
        v4 -= 3;
        return *(float *)(this[24] + 56 * v4 + 4);
      }
      v4 -= 4;
      v7 -= 224;
      v16 = v15 - *(float *)(v13 - 160);
      v6 = v11;
      v3 = v16;
      if ( v4 <= 3 )
        goto LABEL_10;
    }
  }
  return *(float *)(this[24] + 56 * v4 + 4);
}
