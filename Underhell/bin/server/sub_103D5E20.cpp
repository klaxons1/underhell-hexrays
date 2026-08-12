int __cdecl sub_103D5E20(float *a1, float *a2, float a3, float a4, float a5, int a6)
{
  int v6; // esi
  char v7; // al
  int v8; // edi
  unsigned __int16 v9; // ax
  int *v10; // edi
  int v11; // edx
  void (__thiscall *v12)(int *, float *); // edx
  int result; // eax
  int *v14; // ecx
  float v15; // [esp+10h] [ebp-1Ch]
  float v16; // [esp+10h] [ebp-1Ch]
  float v17; // [esp+14h] [ebp-18h]
  float v18[3]; // [esp+20h] [ebp-Ch] BYREF

  v6 = sub_101811E0("prop_combine_ball", -1);
  sub_103D2FA0(v6, a3);
  sub_100E0D20(v6, a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, a6);
  if ( a6 )
    *(_DWORD *)(v6 + 1172) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a6 + 8))(a6);
  else
    *(_DWORD *)(v6 + 1172) = -1;
  sub_100DD660(v6, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
  v7 = *(_BYTE *)(v6 + 1144);
  if ( v7 != 2 )
  {
    if ( !v7 )
      *(float *)(v6 + 1164) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(v6 + 1144) = 2;
  }
  v17 = a2[1] * a2[1] + *a2 * *a2 + a2[2] * a2[2];
  *(float *)(v6 + 1148) = off_10689708(v17);
  sub_1023C380((_DWORD *)v6, (int)"NPC_CombineBall.Launch", 0.0, 0);
  v8 = *(_DWORD *)(v6 + 424);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 72))(v8, v9 | 0x100);
  v15 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0((_DWORD *)v6, (int)sub_103D3C70, v15, off_1067E554);
  v10 = *(int **)(v6 + 424);
  if ( v10 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*v10 + 112))(*(_DWORD *)(v6 + 424), LODWORD(a4));
    v11 = *v10;
    v18[0] = 500.0;
    v12 = *(void (__thiscall **)(int *, float *))(v11 + 132);
    v18[1] = 500.0;
    v18[2] = 500.0;
    v12(v10, v18);
  }
  v16 = *(float *)(dword_106B31C8 + 12) + a5;
  sub_100EC3F0((_DWORD *)v6, (int)sub_103D1CE0, v16, off_1067E55C);
  *(_BYTE *)(v6 + 1142) = 1;
  result = v6;
  if ( *(_BYTE *)(v6 + 1178) != 1 )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
      *(_BYTE *)(v6 + 1178) = 1;
    }
    else
    {
      v14 = *(int **)(v6 + 24);
      if ( v14 )
        sub_100194B0(v14, 1178);
      *(_BYTE *)(v6 + 1178) = 1;
      return v6;
    }
  }
  return result;
}
