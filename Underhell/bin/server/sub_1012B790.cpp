int __cdecl sub_1012B790(int a1, char a2)
{
  int result; // eax
  int v3; // edi
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+14h] [ebp-8h]
  float *v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+18h] [ebp-4h]
  float v13; // [esp+18h] [ebp-4h]
  float v14; // [esp+18h] [ebp-4h]

  result = sub_101811E0("entityflame", -1);
  v3 = result;
  if ( result )
  {
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 8))(a1 + 320);
    v10 = *v11 - *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320);
    v12 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 8))(a1 + 320) + 4);
    v5 = (v12 - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320) + 4) + v10) * 0.5;
    v13 = v5;
    if ( v5 < 16.0 )
      v13 = 16.0;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1025F370(v3, a1 + 580, 0);
    if ( *(_DWORD *)(v3 + 804) != LODWORD(v13) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v3 + 24);
        if ( v6 )
          sub_100194B0(v6, 804);
      }
      *(float *)(v3 + 804) = v13;
    }
    sub_100EC3F0((_DWORD *)v3, (int)sub_1012B310, 0.0, 0);
    v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)v3, v9, 0);
    sub_1012B1B0((unsigned int *)v3, a1);
    v14 = *(float *)(dword_106B31C8 + 12) + 2.0;
    if ( *(_DWORD *)(v3 + 820) != LODWORD(v14) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v3 + 24);
        if ( v7 )
          sub_100194B0(v7, 820);
      }
      *(float *)(v3 + 820) = v14;
    }
    *(_DWORD *)(v3 + 252) |= 0x80u;
    sub_100D8500((_DWORD *)v3);
    if ( a2 != *(_BYTE *)(v3 + 808) )
    {
      result = v3;
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
        *(_BYTE *)(v3 + 808) = a2;
        return result;
      }
      v8 = *(int **)(v3 + 24);
      if ( v8 )
        sub_100194B0(v8, 808);
      *(_BYTE *)(v3 + 808) = a2;
    }
    return v3;
  }
  return result;
}
