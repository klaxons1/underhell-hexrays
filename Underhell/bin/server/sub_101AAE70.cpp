int __cdecl sub_101AAE70(const char *a1, int a2, int a3, int a4, char a5)
{
  int v5; // esi
  int v6; // eax
  float v8; // [esp+0h] [ebp-60h] BYREF
  float v9; // [esp+4h] [ebp-5Ch]
  float v10; // [esp+8h] [ebp-58h]
  float v11; // [esp+Ch] [ebp-54h]
  float v12; // [esp+10h] [ebp-50h]
  float v13; // [esp+14h] [ebp-4Ch]
  float v14; // [esp+18h] [ebp-48h]
  float v15; // [esp+1Ch] [ebp-44h]
  float v16; // [esp+20h] [ebp-40h]
  float v17; // [esp+24h] [ebp-3Ch]
  float v18; // [esp+28h] [ebp-38h]
  float v19; // [esp+2Ch] [ebp-34h]
  int v20; // [esp+30h] [ebp-30h]
  int v21; // [esp+34h] [ebp-2Ch]
  float v22; // [esp+38h] [ebp-28h]
  float v23; // [esp+3Ch] [ebp-24h]
  float v24; // [esp+40h] [ebp-20h]
  int v25; // [esp+44h] [ebp-1Ch]
  __int16 v26; // [esp+48h] [ebp-18h]
  int v27; // [esp+4Ch] [ebp-14h]
  int v28; // [esp+50h] [ebp-10h]
  int v29; // [esp+54h] [ebp-Ch]
  char v30; // [esp+58h] [ebp-8h]

  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v20 = 0;
  v14 = 0.0;
  v21 = 0;
  v15 = 0.0;
  v25 = 0;
  v16 = 0.0;
  v26 = 0;
  v17 = 0.0;
  v27 = 0;
  v18 = 0.0;
  v28 = 0;
  v19 = 0.0;
  v30 = 0;
  v22 = 1.0;
  v23 = 0.0;
  v24 = 0.0;
  v29 = sub_10154400(a1);
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
      sub_100DAE60(a3);
    v8 = *(float *)(a3 + 580);
    v9 = *(float *)(a3 + 584);
    v5 = *(_DWORD *)(a3 + 24);
    v10 = *(float *)(a3 + 588);
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
    v20 |= 1u;
    v21 = v6;
  }
  v28 = a2;
  v25 = a4;
  if ( a5 )
    v20 |= 2u;
  return sub_1028E890("ParticleEffect", &v8);
}
