int __thiscall sub_10404DE0(int this)
{
  int v2; // edx
  int (__thiscall *v3)(int); // eax
  float *v4; // eax
  double v5; // st7
  int v7; // eax
  float v8; // [esp+18h] [ebp-64h] BYREF
  float v9; // [esp+1Ch] [ebp-60h]
  float v10; // [esp+20h] [ebp-5Ch]
  float v11; // [esp+24h] [ebp-58h]
  float v12; // [esp+28h] [ebp-54h]
  float v13; // [esp+2Ch] [ebp-50h]
  float v14; // [esp+30h] [ebp-4Ch]
  float v15; // [esp+34h] [ebp-48h]
  float v16; // [esp+38h] [ebp-44h]
  float v17; // [esp+3Ch] [ebp-40h]
  float v18; // [esp+40h] [ebp-3Ch]
  float v19; // [esp+44h] [ebp-38h]
  int v20; // [esp+48h] [ebp-34h]
  int v21; // [esp+4Ch] [ebp-30h]
  float v22; // [esp+50h] [ebp-2Ch]
  float v23; // [esp+54h] [ebp-28h]
  float v24; // [esp+58h] [ebp-24h]
  int v25; // [esp+5Ch] [ebp-20h]
  __int16 v26; // [esp+60h] [ebp-1Ch]
  int v27; // [esp+64h] [ebp-18h]
  int v28; // [esp+68h] [ebp-14h]
  int v29; // [esp+6Ch] [ebp-10h]
  char v30; // [esp+70h] [ebp-Ch]
  float v31; // [esp+78h] [ebp-4h]

  if ( *(_BYTE *)(this + 447) )
  {
    v2 = *(_DWORD *)this;
    v8 = 0.0;
    v9 = 0.0;
    v26 = 0;
    v3 = *(int (__thiscall **)(int))(v2 + 576);
    v10 = 0.0;
    v11 = 0.0;
    v20 = 0;
    v12 = 0.0;
    v21 = 0;
    v13 = 0.0;
    v25 = 0;
    v14 = 0.0;
    v27 = 0;
    v15 = 0.0;
    v28 = 0;
    v16 = 0.0;
    v29 = 0;
    v17 = 0.0;
    v30 = 0;
    v18 = 0.0;
    v19 = 0.0;
    v22 = 1.0;
    v23 = 0.0;
    v24 = 0.0;
    v4 = (float *)v3(this);
    v8 = *v4;
    v9 = v4[1];
    v5 = v4[2];
    v20 = 0;
    v10 = v5;
    v23 = 128.0;
    v22 = 128.0;
    return sub_1028E890((int)"WaterSurfaceExplosion", (int)&v8);
  }
  else
  {
    v7 = *(_DWORD *)(this + 252) >> 11;
    v31 = *(float *)(dword_106F0624 + 44);
    if ( (v7 & 1) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    return sub_1013D530((float *)(this + 580), (float *)(this + 704), this, (int)v31, 100, 1, 20000.0, 0, 0, -1);
  }
}
