char __thiscall sub_10139A20(int this, int a2, float *a3)
{
  int *v5; // edx
  int v6; // edx
  unsigned int v7; // eax
  int v8; // esi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st5
  double v15; // st5
  double v16; // st7
  float v17; // [esp+0h] [ebp-10h]

  *a3 = 0.0;
  if ( *(_BYTE *)(this + 800) )
    return 0;
  if ( *(_DWORD *)(this + 844) == -1 )
  {
LABEL_10:
    v5 = off_1061BE18;
    goto LABEL_11;
  }
  v5 = off_1061BE18;
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 2] == *(_DWORD *)(this + 844) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 844) & 0xFFF) + 1] )
  {
    if ( *(_DWORD *)a2 == -1 )
      return 0;
    if ( off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 2] != *(_DWORD *)a2 >> 12 )
      return 0;
    v6 = off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 1];
    if ( !v6 || !(unsigned __int8)sub_1013D760(this, v6) )
      return 0;
    goto LABEL_10;
  }
LABEL_11:
  v7 = *(_DWORD *)(this + 804);
  if ( v7 == -1 || v5[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = v5[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v9 = *(float *)(a2 + 36) - *(float *)(v8 + 580);
  v10 = v9 * v9;
  v11 = *(float *)(a2 + 40) - *(float *)(v8 + 584);
  v12 = *(float *)(a2 + 44) - *(float *)(v8 + 588);
  v17 = v12 * v12 + v11 * v11 + v10;
  v13 = off_10689708(v17);
  if ( 0.0 == v13 )
  {
    *a3 = 1.0;
    return 1;
  }
  if ( 0.0 != *(float *)(this + 820) && *(float *)(this + 820) < v13 )
    return 0;
  v14 = (double)*(int *)(a2 + 8) * *(float *)(this + 812);
  if ( v14 < v13 )
    return 0;
  v15 = 1.0 - v13 / v14;
  v16 = 1.0;
  *a3 = v15;
  if ( v15 > 1.0 || (v16 = v15, v15 >= 0.0) )
  {
    *a3 = v16;
    return 1;
  }
  else
  {
    *a3 = 0.0;
    return 1;
  }
}
