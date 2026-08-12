int sub_102629E0()
{
  int v0; // esi
  _DWORD *v1; // eax
  int v2; // eax
  float v3; // edx
  float v4; // eax
  int v5; // edx
  float *v6; // eax
  float *v7; // eax
  float v9[3]; // [esp+Ch] [ebp-24h] BYREF
  float v10[3]; // [esp+18h] [ebp-18h] BYREF
  float v11; // [esp+24h] [ebp-Ch]
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]

  Msg("VoxelTreePlayerView\n");
  v0 = 0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v1 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
    if ( v1 )
    {
      if ( (*v1 & 2) == 0 )
      {
        v2 = v1[3];
        if ( v2 )
          v0 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
        else
          v0 = 0;
      }
    }
  }
  if ( (*(_DWORD *)(v0 + 252) & 0x800) != 0 )
    sub_100DAE60(v0);
  v3 = *(float *)(v0 + 580);
  v4 = *(float *)(v0 + 584);
  v13 = *(float *)(v0 + 588);
  v11 = v3;
  v5 = *(_DWORD *)dword_106B3CDC;
  v12 = v4;
  v6 = (float *)(*(int (__thiscall **)(int))(v5 + 120))(dword_106B3CDC);
  v10[0] = v6[6] + v11;
  v10[1] = v6[7] + v12;
  v10[2] = v6[8] + v13;
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v9[0] = v11 - v7[3];
  v9[1] = v12 - v7[4];
  v9[2] = v13 - v7[5];
  return (*(int (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)dword_106B31EC + 76))(
           dword_106B31EC,
           v9,
           v10,
           3.0);
}
