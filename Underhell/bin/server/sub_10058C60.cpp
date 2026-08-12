char __thiscall sub_10058C60(_DWORD *this, float *a2, float *a3)
{
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int v9; // edi
  int v10; // eax
  double v11; // st4
  double v12; // st3
  double v13; // st6
  double v14; // st2
  double v15; // st4
  float v16; // [esp+0h] [ebp-44h]
  int v17; // [esp+4h] [ebp-40h]
  float v18; // [esp+18h] [ebp-2Ch] BYREF
  float v19; // [esp+1Ch] [ebp-28h]
  float v20; // [esp+20h] [ebp-24h]
  float v21; // [esp+24h] [ebp-20h]
  float v22; // [esp+28h] [ebp-1Ch]
  float v23; // [esp+2Ch] [ebp-18h]
  float v24; // [esp+30h] [ebp-14h] BYREF
  float v25; // [esp+34h] [ebp-10h]
  float i; // [esp+38h] [ebp-Ch]
  float v27; // [esp+3Ch] [ebp-8h]
  float v28; // [esp+40h] [ebp-4h]

  v4 = **(_DWORD **)(*(_DWORD *)(this[1] + 2588) + 36);
  v5 = 0;
  if ( v4 )
  {
LABEL_8:
    v9 = this[1];
    v10 = *(_DWORD *)(v9 + 252);
    v28 = 1000000000.0;
    v27 = 1000000000.0;
    if ( (v10 & 0x800) != 0 )
      sub_100DAE60(v9);
    v24 = *(float *)(v9 + 580);
    v25 = *(float *)(v9 + 584);
    for ( i = *(float *)(v9 + 588); v4; v4 = *(_DWORD *)(v4 + 40) )
    {
      sub_10424670(a2, &v24, v4, &v18, 0);
      v24 = *(float *)v4;
      v25 = *(float *)(v4 + 4);
      i = *(float *)(v4 + 8);
      v11 = v19 - a2[1];
      v12 = v18 - *a2;
      v13 = v12 * v12 + v11 * v11;
      if ( v28 >= v13 )
      {
        v14 = v20 - a2[2];
        v15 = v14 * v14 + v13;
        if ( v13 != v28 || v27 > v15 )
        {
          v28 = v13;
          v27 = v15;
          v21 = v18;
          v22 = v19;
          v23 = v20;
        }
      }
    }
    if ( v5 )
      sub_100B9C00(v5);
    *a3 = v21;
    a3[1] = v22;
    a3[2] = v23;
    return 1;
  }
  if ( !(unsigned __int8)sub_1004B510(this, 100000, 0) )
  {
    v6 = (_DWORD *)this[1];
    if ( (v6[63] & 0x800) != 0 )
      sub_100DAE60(this[1]);
    v17 = sub_100223E0(v6);
    v16 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v6 + 2044))(v6);
    v7 = sub_1008E9F0((int)(v6 + 145), (int)(this + 18), 0, v16, v17, 1);
    v5 = v7;
    if ( !v7 )
      return 0;
    sub_1008DB10(v7);
    v4 = v5;
    goto LABEL_8;
  }
  return 1;
}
