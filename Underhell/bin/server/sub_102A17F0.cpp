bool __thiscall sub_102A17F0(int this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int v6; // ecx
  int v7; // ecx
  float v9; // [esp+0h] [ebp-7Ch]
  float v10; // [esp+18h] [ebp-64h] BYREF
  float v11; // [esp+1Ch] [ebp-60h]
  float v12; // [esp+20h] [ebp-5Ch]
  int v13[3]; // [esp+24h] [ebp-58h] BYREF
  int v14; // [esp+30h] [ebp-4Ch] BYREF
  float v15; // [esp+34h] [ebp-48h]
  float v16; // [esp+38h] [ebp-44h]
  float v17; // [esp+3Ch] [ebp-40h]
  float v18; // [esp+40h] [ebp-3Ch]
  float v19; // [esp+44h] [ebp-38h]
  float v20; // [esp+48h] [ebp-34h]
  float v21; // [esp+4Ch] [ebp-30h]
  float v22; // [esp+50h] [ebp-2Ch]
  int v23; // [esp+54h] [ebp-28h] BYREF
  float v24; // [esp+58h] [ebp-24h]
  float v25; // [esp+5Ch] [ebp-20h]
  int v26; // [esp+60h] [ebp-1Ch] BYREF
  float v27; // [esp+64h] [ebp-18h]
  float v28; // [esp+68h] [ebp-14h]
  int v29; // [esp+6Ch] [ebp-10h] BYREF
  float v30; // [esp+70h] [ebp-Ch]
  float v31; // [esp+74h] [ebp-8h] BYREF
  int var1; // [esp+7Bh] [ebp-1h] BYREF

  *(float *)&v29 = sub_100BD360((float *)*(_DWORD *)(this + 4));
  if ( !sub_102A1630((_DWORD *)this, *(float *)&v29, &var1, (float *)&v23, (float *)&v26) )
    return 0;
  v2 = sub_102A0A80((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 4) + 908), *(float *)&v29);
  v30 = v2;
  if ( v2 <= 1.0 )
  {
    if ( v2 < 0.0 )
    {
      v2 = 0.0;
      v30 = 0.0;
    }
  }
  else
  {
    v2 = 1.0;
    v30 = 1.0;
  }
  v9 = v2;
  sub_102A0990((int *)this, v9, (float *)(this + 76), (float *)(this + 88), (float *)v13, (float *)&v14);
  *(float *)&v29 = 1.0;
  v31 = 1.0;
  sub_1029FBE0((float *)this, v30, (float *)&v29, &v31);
  v20 = (*(float *)v13 - *(float *)&v23) * *(float *)&v29;
  v21 = (*(float *)&v13[1] - v24) * *(float *)&v29;
  v22 = *(float *)&v29 * (*(float *)&v13[2] - v25);
  v3 = *(float *)&v14;
  sub_10424C10(*(float *)&v14, *(float *)&v26);
  v17 = v3 * v31;
  v4 = v15;
  sub_10424C10(v15, v27);
  v18 = v4 * v31;
  v5 = v16;
  sub_10424C10(v16, v28);
  v6 = *(_DWORD *)(this + 4);
  v19 = v5 * v31;
  v10 = v20 + *(float *)&v23;
  v11 = v21 + v24;
  v12 = v22 + v25;
  sub_100E10C0(v6, &v10);
  v10 = v17 + *(float *)&v26;
  v11 = v18 + v27;
  v7 = *(_DWORD *)(this + 4);
  v12 = v19 + v28;
  sub_100E11A0(v7, &v10);
  if ( *(_DWORD *)(dword_106DB4EC + 48) )
    sub_1029FCF0((_DWORD *)this, (float *)v13, (int)&v14, (float *)&v23, (int)&v26);
  return (_BYTE)var1 == 0;
}
