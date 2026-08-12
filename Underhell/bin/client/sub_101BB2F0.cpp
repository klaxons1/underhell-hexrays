int __thiscall sub_101BB2F0(int this, int a2)
{
  unsigned __int16 v3; // ax
  unsigned int v4; // eax
  char *v5; // ecx
  unsigned int v6; // eax
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF

  v8[0] = a2;
  v8[1] = -1;
  v3 = sub_101BA800((_WORD *)(this + 8), (int)v8);
  if ( v3 == 0xFFFF )
    return 0;
  v4 = *(_DWORD *)(*(_DWORD *)(this + 12) + 16 * v3 + 12);
  if ( v4 == -1 )
    return 0;
  v5 = (char *)off_103DCD74 + 16 * (v4 & 0xFFF) + 4;
  v6 = v4 >> 12;
  if ( *((_DWORD *)v5 + 1) != v6 || !*(_DWORD *)v5 )
    return 0;
  if ( *((_DWORD *)v5 + 1) == v6 )
    return sub_10034E90(*(_DWORD **)v5);
  return sub_10034E90(0);
}
