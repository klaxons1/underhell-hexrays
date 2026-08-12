int __stdcall sub_10417F70(int a1)
{
  int v2; // esi
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // eax

  if ( !a1 )
    return 0;
  v2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v3 = v2 & 0xFFF;
  if ( v3 >= 0x800 )
    return 0;
  v4 = dword_1069E3E4[4 * v3];
  if ( !v4 )
    return 0;
  v5 = v3 | (dword_1069E3E8[4 * v3] << 12);
  if ( v5 == -1 || ((v2 ^ v5) & 0x3FF000) != 0 )
    return 0;
  else
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
}
