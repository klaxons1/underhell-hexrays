int __thiscall sub_103D8D50(int this)
{
  int v2; // edx
  float v4; // [esp+0h] [ebp-60h] BYREF
  float v5; // [esp+4h] [ebp-5Ch]
  float v6; // [esp+8h] [ebp-58h]
  float v7; // [esp+Ch] [ebp-54h]
  float v8; // [esp+10h] [ebp-50h]
  float v9; // [esp+14h] [ebp-4Ch]
  float v10; // [esp+18h] [ebp-48h]
  float v11; // [esp+1Ch] [ebp-44h]
  float v12; // [esp+20h] [ebp-40h]
  float v13; // [esp+24h] [ebp-3Ch]
  float v14; // [esp+28h] [ebp-38h]
  float v15; // [esp+2Ch] [ebp-34h]
  int v16; // [esp+30h] [ebp-30h]
  int v17; // [esp+34h] [ebp-2Ch]
  float v18; // [esp+38h] [ebp-28h]
  float v19; // [esp+3Ch] [ebp-24h]
  float v20; // [esp+40h] [ebp-20h]
  int v21; // [esp+44h] [ebp-1Ch]
  __int16 v22; // [esp+48h] [ebp-18h]
  int v23; // [esp+4Ch] [ebp-14h]
  int v24; // [esp+50h] [ebp-10h]
  int v25; // [esp+54h] [ebp-Ch]
  char v26; // [esp+58h] [ebp-8h]

  v4 = 0.0;
  v5 = 0.0;
  v2 = *(_DWORD *)(this + 252);
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v16 = 0;
  v10 = 0.0;
  v17 = 0;
  v11 = 0.0;
  v21 = 0;
  v12 = 0.0;
  v22 = 0;
  v13 = 0.0;
  v23 = 0;
  v14 = 0.0;
  v24 = 0;
  v15 = 0.0;
  v25 = 0;
  v26 = 0;
  v18 = 1.0;
  v19 = 0.0;
  v20 = 0.0;
  if ( (v2 & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 580);
  v5 = *(float *)(this + 584);
  v26 = 1;
  v6 = *(float *)(this + 588);
  v10 = flt_106F1CA8;
  v11 = flt_106F1CAC;
  v12 = flt_106F1CB0;
  v13 = flt_106F1CB4;
  v14 = flt_106F1CB8;
  v15 = flt_106F1CBC;
  return sub_1028E890((int)"CommandPointer", (int)&v4);
}
