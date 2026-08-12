int __cdecl sub_101AB0C0(int a1)
{
  float v2[13]; // [esp+0h] [ebp-60h] BYREF
  int v3; // [esp+34h] [ebp-2Ch]
  float v4; // [esp+38h] [ebp-28h]
  float v5; // [esp+3Ch] [ebp-24h]
  float v6; // [esp+40h] [ebp-20h]
  int v7; // [esp+44h] [ebp-1Ch]
  __int16 v8; // [esp+48h] [ebp-18h]
  int v9; // [esp+4Ch] [ebp-14h]
  int v10; // [esp+50h] [ebp-10h]
  int v11; // [esp+54h] [ebp-Ch]
  char v12; // [esp+58h] [ebp-8h]

  v2[0] = 0.0;
  v2[1] = 0.0;
  v8 = 0;
  v2[2] = 0.0;
  v2[3] = 0.0;
  v2[12] = 0.0;
  v2[4] = 0.0;
  v3 = 0;
  v2[5] = 0.0;
  v7 = 0;
  v2[6] = 0.0;
  v9 = 0;
  v2[7] = 0.0;
  v10 = 0;
  v2[8] = 0.0;
  v11 = 0;
  v2[9] = 0.0;
  v12 = 0;
  v2[10] = 0.0;
  v2[11] = 0.0;
  v4 = 1.0;
  v5 = 0.0;
  v6 = 0.0;
  if ( a1 )
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
  return sub_1028E890("ParticleEffectStop", v2);
}
