int __cdecl sub_101AAF50(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        int a11)
{
  int v11; // eax
  float v13[12]; // [esp+0h] [ebp-60h] BYREF
  int v14; // [esp+30h] [ebp-30h]
  int v15; // [esp+34h] [ebp-2Ch]
  float v16; // [esp+38h] [ebp-28h]
  float v17; // [esp+3Ch] [ebp-24h]
  float v18; // [esp+40h] [ebp-20h]
  int v19; // [esp+44h] [ebp-1Ch]
  __int16 v20; // [esp+48h] [ebp-18h]
  int v21; // [esp+4Ch] [ebp-14h]
  int v22; // [esp+50h] [ebp-10h]
  int v23; // [esp+54h] [ebp-Ch]
  char v24; // [esp+58h] [ebp-8h]

  v13[6] = 0.0;
  v11 = 0;
  v13[7] = 0.0;
  v13[8] = 0.0;
  v20 = 0;
  v16 = 1.0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v21 = 0;
  v17 = 0.0;
  v22 = 0;
  v18 = 0.0;
  v24 = 0;
  v23 = a1;
  v13[0] = a2;
  v13[1] = a3;
  v13[2] = a4;
  v13[3] = a5;
  v13[4] = a6;
  v13[5] = a7;
  v13[9] = a8;
  v13[10] = a9;
  v13[11] = a10;
  if ( a11 )
  {
    v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a11 + 24));
    v14 |= 1u;
    v22 = 2;
  }
  v15 = v11;
  return sub_1028E890("ParticleEffect", v13);
}
