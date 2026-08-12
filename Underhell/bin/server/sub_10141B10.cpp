double __thiscall sub_10141B10(int this)
{
  int v2; // ebx
  unsigned int v3; // eax
  double v4; // st7
  float *v5; // edi
  double v6; // st6
  double v7; // st5
  int v8; // ecx
  double v9; // st2
  double result; // st7
  int v11; // eax
  double v12; // st6
  double v13; // st5
  double v14; // st7
  int v15; // ecx
  int v16; // ecx
  double v17; // st5
  double v18; // st6
  double v19; // st7
  int v20; // edx
  double v21; // st6
  double v22; // st5
  _BYTE v23[44]; // [esp+8h] [ebp-74h] BYREF
  float v24; // [esp+34h] [ebp-48h]
  float v25; // [esp+5Ch] [ebp-20h] BYREF
  float v26; // [esp+60h] [ebp-1Ch]
  float v27; // [esp+64h] [ebp-18h]
  float v28; // [esp+68h] [ebp-14h]
  float v29; // [esp+6Ch] [ebp-10h]
  float v30; // [esp+70h] [ebp-Ch]
  float v31; // [esp+74h] [ebp-8h]
  float v32; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(_DWORD *)(this + 1120) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != *(_DWORD *)(this + 1120) >> 12 )
  {
    v2 = 0;
  }
  else
  {
    v2 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
  }
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  v3 = *(_DWORD *)(this + 1120);
  v4 = *(float *)(v2 + 580) - *(float *)(this + 580);
  v5 = (float *)(this + 580);
  v6 = *(float *)(v2 + 584) - *(float *)(this + 584);
  v7 = *(float *)(v2 + 588) - *(float *)(this + 588);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] != v3 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
  v9 = *(float *)(v8 + 812) - 20.0;
  if ( v6 * v6 + v4 * v4 + v7 * v7 <= v9 * v9 )
  {
    v11 = *(_DWORD *)(this + 252) >> 11;
    v32 = 0.0;
    v31 = 0.0;
    v12 = *(float *)(this + 1164) * 0.2 + *(float *)(this + 1152);
    v13 = 0.2 * *(float *)(this + 1168) + *(float *)(this + 1156);
    v14 = *(float *)(this + 1204);
    v28 = (*(float *)(this + 1160) * 0.2 + *(float *)(this + 1148)) * v14;
    v29 = v12 * v14;
    v30 = v14 * v13;
    if ( (v11 & 1) != 0 )
      sub_100DAE60(this);
    v15 = *(_DWORD *)(this + 252) >> 11;
    v25 = *v5 + v28;
    v26 = *(float *)(this + 584) + v29;
    v27 = *(float *)(this + 588) + v30;
    if ( (v15 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), &v25, 33636363, this, 0, (int)v23);
    if ( v24 < 1.0 )
      v32 = 1.0 - v24;
    v16 = *(_DWORD *)(this + 252) >> 11;
    v17 = *(float *)(this + 1152) - *(float *)(this + 1164) * 0.2;
    v18 = *(float *)(this + 1156) - 0.2 * *(float *)(this + 1168);
    v19 = *(float *)(this + 1204);
    v28 = (*(float *)(this + 1148) - *(float *)(this + 1160) * 0.2) * v19;
    v29 = v17 * v19;
    v30 = v19 * v18;
    if ( (v16 & 1) != 0 )
      sub_100DAE60(this);
    v20 = *(_DWORD *)(this + 252) >> 11;
    v25 = *v5 + v28;
    v26 = *(float *)(this + 584) + v29;
    v27 = *(float *)(this + 588) + v30;
    if ( (v20 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), &v25, 33636363, this, 0, (int)v23);
    if ( v24 >= 1.0 )
      result = v31;
    else
      result = 1.0 - v24;
    if ( *(_BYTE *)(this + 1216) )
    {
      v21 = v32;
      if ( v32 <= 0.0 )
      {
        v22 = result * 100.0 + *(float *)(this + 1144);
LABEL_39:
        *(float *)(this + 1144) = v22;
LABEL_40:
        if ( v21 >= result )
          return v21;
        return result;
      }
    }
    else
    {
      if ( result > 0.0 )
      {
        *(float *)(this + 1144) = 100.0 * result + *(float *)(this + 1144);
        v21 = v32;
        goto LABEL_40;
      }
      v21 = v32;
    }
    v22 = *(float *)(this + 1144) - 100.0 * v21;
    goto LABEL_39;
  }
  if ( v7 * *(float *)(this + 1156) + v6 * *(float *)(this + 1152) + v4 * *(float *)(this + 1148) < 0.0 )
  {
    if ( *(_BYTE *)(this + 1216) )
    {
      *(float *)(this + 1144) = *(float *)(this + 1144) + -100.0;
      return 1.0;
    }
    *(float *)(this + 1144) = *(float *)(this + 1144) + 100.0;
  }
  return 1.0;
}
