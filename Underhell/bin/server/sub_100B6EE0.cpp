double __thiscall sub_100B6EE0(void *this, int a2, int a3, float *a4, float a5)
{
  int v5; // esi
  char v6; // bl
  int v7; // eax
  int v8; // edi
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  int v13; // edx
  double v14; // st7
  double v16; // st5
  double v17; // st7
  float v18; // [esp+0h] [ebp-3Ch]
  float v19; // [esp+0h] [ebp-3Ch]
  float v20[3]; // [esp+10h] [ebp-2Ch] BYREF
  float v21; // [esp+1Ch] [ebp-20h]
  float v22; // [esp+20h] [ebp-1Ch]
  float v23; // [esp+24h] [ebp-18h]
  float v24; // [esp+28h] [ebp-14h] BYREF
  float v25; // [esp+2Ch] [ebp-10h]
  float v26; // [esp+30h] [ebp-Ch]
  void *v27; // [esp+34h] [ebp-8h]
  float v28; // [esp+38h] [ebp-4h]
  float v29; // [esp+50h] [ebp+14h]
  float v30; // [esp+50h] [ebp+14h]

  v28 = 0.0;
  v27 = this;
  sub_100B6940((int)this, &v24);
  v5 = a2;
  sub_101ACB10();
  if ( sub_101ACC70(a2, 1) )
  {
    v6 = LOBYTE(a5);
    while ( !(unsigned __int8)sub_101ACB50(v5) )
    {
      sub_101ACB40(v5);
      if ( v6 )
        v7 = sub_101ACC90(v5);
      else
        v7 = sub_101ACCC0(v5);
      v8 = v7;
      if ( v5 == a3 )
      {
        v21 = *a4 - v24;
        v22 = a4[1] - v25;
        v23 = a4[2] - v26;
        sub_100B5730(v5, v20);
        if ( v20[1] * v22 + v20[0] * v21 + v20[2] * v23 <= 0.0 )
          v16 = -1.0;
        else
          v16 = 1.0;
        v30 = v16;
        v19 = v21 * v21 + v22 * v22;
        v17 = off_10689708(v19);
        v28 = v17 * v30 + v28;
        break;
      }
      if ( v6 )
        v9 = 1.0;
      else
        v9 = -1.0;
      v29 = v9;
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(v5);
      v10 = v25 - *(float *)(v5 + 584);
      v11 = v24 - *(float *)(v5 + 580);
      v18 = v11 * v11 + v10 * v10;
      v12 = off_10689708(v18);
      v13 = *(_DWORD *)(v5 + 252) >> 11;
      v28 = v12 * v29 + v28;
      if ( (v13 & 1) != 0 )
        sub_100DAE60(v5);
      v24 = *(float *)(v5 + 580);
      v25 = *(float *)(v5 + 584);
      v14 = *(float *)(v5 + 588);
      v5 = v8;
      v26 = v14;
      if ( !sub_101ACC70(v8, 1) )
      {
        sub_101ACB30();
        return v28;
      }
    }
  }
  sub_101ACB30();
  return v28;
}
