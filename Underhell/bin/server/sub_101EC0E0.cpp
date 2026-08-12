int __userpurge sub_101EC0E0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int result; // eax
  int v5; // eax
  float *v6; // edi
  float v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-20h]
  int v11; // [esp-4h] [ebp-20h]
  int v12; // [esp-4h] [ebp-20h]
  float v13[3]; // [esp+4h] [ebp-18h] BYREF
  float v14; // [esp+10h] [ebp-Ch] BYREF
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  result = sub_100CAFA0(a1, a3);
  if ( result )
  {
    v5 = *(_DWORD *)(dword_106B31C8 + 44);
    v10 = a2;
    if ( !*(_DWORD *)(v5 + 1308) )
    {
      Msg("No Landmark:%s\n", (const char *)(v5 + 1312));
      v6 = (float *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1404))(a1, a2);
      v13[0] = v6[179];
      v13[1] = v6[180];
      v13[2] = v6[181] + 1.0;
      sub_100E10C0(a1, v13);
      sub_100E11A0(a1, v6 + 182);
    }
    v7 = *(float *)(a1 + 3252);
    v14 = *(float *)(a1 + 3248);
    v16 = 0.0;
    v15 = v7;
    sub_100E11A0(a1, &v14);
    *(float *)(a1 + 3248) = v14;
    *(float *)(a1 + 3252) = v15;
    *(float *)(a1 + 3256) = v16;
    *(_DWORD *)(a1 + 3264) = 1;
    sub_100CF450((_DWORD *)a1, 0);
    *(_DWORD *)(a1 + 3416) &= ~0x10u;
    if ( (*(_BYTE *)(a1 + 256) & 2) != 0 )
    {
      sub_101E4DF0((int)&savedregs, a1);
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, v10) + 48;
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
      sub_1025F360(a1, v8 + 36, v11);
      if ( *(_BYTE *)(a1 + 2272) != 1 )
      {
        (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2272);
        *(_BYTE *)(a1 + 2272) = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 2272) )
      {
        (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2272);
        *(_BYTE *)(a1 + 2272) = 0;
      }
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, v10) + 24;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
      sub_1025F360(a1, v9 + 12, v12);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1560))(a1, a1 + 580);
    return 1;
  }
  return result;
}
