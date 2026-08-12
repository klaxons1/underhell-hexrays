int __thiscall sub_10085210(int this, int a2)
{
  unsigned __int16 v3; // ax
  __int16 v5; // ax
  int v6; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v3 == 0xFFFF )
    return 0;
  v5 = *(_WORD *)(168 * v3 + *(_DWORD *)(this + 36) + 8);
  if ( (v5 & 4) != 0 )
    v6 = *(_BYTE *)(this + 208) != 0;
  else
    v6 = (v5 & 0x10) != 0 ? 3 : 0;
  return v6 + 1;
}
