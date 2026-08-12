int __thiscall sub_100851C0(int this, unsigned __int16 a2)
{
  __int16 v3; // ax
  int v4; // eax

  if ( a2 == 0xFFFF )
    return 0;
  v3 = *(_WORD *)(168 * a2 + *(_DWORD *)(this + 36) + 8);
  if ( (v3 & 4) != 0 )
    v4 = *(_BYTE *)(this + 208) != 0;
  else
    v4 = (v3 & 0x10) != 0 ? 3 : 0;
  return v4 + 1;
}
