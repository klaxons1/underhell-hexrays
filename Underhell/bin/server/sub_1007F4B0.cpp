char __thiscall sub_1007F4B0(int this, float *a2, float a3, char a4)
{
  int v5; // esi
  char result; // al
  bool v7; // zf
  double v8; // st7
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt0
  double v17; // st7
  double v18; // st6
  double v19; // st4
  double v20; // st5
  double v21; // st7
  double v22; // st7
  double v23; // st5
  int v24; // eax
  double v25; // st6
  double v26; // rt1
  float v27; // [esp+0h] [ebp-1Ch]
  float v28; // [esp+10h] [ebp-Ch] BYREF
  float v29; // [esp+14h] [ebp-8h]
  float v30; // [esp+18h] [ebp-4h]

  v5 = **(_DWORD **)(this + 36);
  if ( !v5 )
    return 0;
  v7 = *(_DWORD *)(v5 + 40) == 0;
  v8 = a3;
  v9 = *(float **)(this + 4);
  v10 = v9[179];
  v11 = v9[180];
  v12 = v9[181];
  v28 = v10;
  v29 = v11;
  v30 = v12;
  if ( !v7 )
  {
    v13 = v30;
    v14 = v29;
    v15 = v28;
    while ( 1 )
    {
      if ( *(_DWORD *)(this + 12) )
      {
        v19 = *(float *)(v5 + 4) - v14;
        v18 = v19 * v19 + (*(float *)v5 - v15) * (*(float *)v5 - v15);
        v20 = *(float *)(v5 + 8) - v13;
        v17 = v20 * v20;
      }
      else
      {
        v17 = (*(float *)v5 - v15) * (*(float *)v5 - v15);
        v18 = (*(float *)(v5 + 4) - v14) * (*(float *)(v5 + 4) - v14);
      }
      v27 = v17 + v18;
      v21 = off_10689708(v27);
      if ( a3 < v21 )
        break;
      a3 = a3 - v21;
      v22 = *(float *)v5;
      v28 = *(float *)v5;
      v14 = *(float *)(v5 + 4);
      v29 = *(float *)(v5 + 4);
      v23 = *(float *)(v5 + 8);
      v30 = *(float *)(v5 + 8);
      if ( a4
        && ((v24 = *(_DWORD *)(v5 + 40)) == 0
         || *(_DWORD *)(v5 + 36) != *(_DWORD *)(v24 + 36)
         || (*(_BYTE *)(v5 + 32) & 0x2A) != 0)
        || (v5 = *(_DWORD *)(v5 + 40)) == 0 )
      {
        v8 = v23;
        goto LABEL_16;
      }
      v16 = v23;
      v15 = v22;
      v13 = v16;
    }
    v8 = a3;
  }
LABEL_16:
  sub_10079A70(*(_DWORD *)(this + 12), &v28, (float *)v5);
  if ( v8 - a3 >= 0.1 )
  {
    v25 = *(float *)(v5 + 4) - v29;
    v26 = *(float *)(v5 + 8) - v30;
    *a2 = *(float *)v5 - v28;
    a2[1] = v25;
    a2[2] = v26;
    off_10689714();
    result = 1;
    *a2 = *a2 * a3 + v28;
    a2[1] = a2[1] * a3 + v29;
    a2[2] = a3 * a2[2] + v30;
  }
  else
  {
    *a2 = *(float *)v5;
    a2[1] = *(float *)(v5 + 4);
    a2[2] = *(float *)(v5 + 8);
    return 1;
  }
  return result;
}
