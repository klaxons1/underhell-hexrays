volatile signed __int32 *__thiscall sub_103D2A20(unsigned int this, float a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  bool v9; // dl
  int v10; // ecx
  double v11; // st6
  double v12; // st5
  int v14; // [esp-4h] [ebp-3Ch]
  float v15[3]; // [esp+8h] [ebp-30h] BYREF
  float v16[3]; // [esp+14h] [ebp-24h] BYREF
  float v17[3]; // [esp+20h] [ebp-18h] BYREF
  float v18; // [esp+2Ch] [ebp-Ch] BYREF
  float v19; // [esp+30h] [ebp-8h]
  float v20; // [esp+34h] [ebp-4h]

  v5 = *(_DWORD *)(this + 1168);
  if ( v5 == -1 || (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1], v6[1] != v5 >> 12) )
    v7 = 0;
  else
    v7 = *v6;
  v8 = (_DWORD *)(v7 + 908);
  if ( !*(_BYTE *)(this + 1143) )
    v8 = (_DWORD *)(v7 + 932);
  sub_1010DD80(v8, __SPAIR64__(v7, this), 0.0);
  v9 = *(_BYTE *)(this + 1143) == 0;
  *(_BYTE *)(this + 1143) = v9;
  if ( *(_DWORD *)(this + 1168) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] != *(_DWORD *)(this + 1168) >> 12 )
  {
    v10 = 0;
  }
  else
  {
    v10 = off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
  }
  if ( v9 )
  {
    v11 = 1.0;
    v12 = 0.0;
  }
  else
  {
    v12 = 0.0;
    v11 = 0.0;
  }
  v17[0] = 1.0;
  v17[1] = 1.0;
  v17[2] = v11;
  v16[2] = v11;
  v16[0] = v12;
  v16[1] = v16[0];
  sub_10111860(v10 + 320, v16, v17, v15);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v18 = v15[0] - *(float *)(this + 580);
  v19 = v15[1] - *(float *)(this + 584);
  v20 = v15[2] - *(float *)(this + 588);
  off_10689714();
  v14 = *(_DWORD *)(a4 + 4 * a3);
  v18 = v18 * a2;
  v19 = v19 * a2;
  v20 = a2 * v20;
  return sub_101BA870(v14, (int *)&v18);
}
