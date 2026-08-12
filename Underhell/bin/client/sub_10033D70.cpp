int __thiscall sub_10033D70(_DWORD *this)
{
  unsigned int v3; // eax

  if ( (this[27] & 0x10) != 0 )
    return 0;
  v3 = this[489];
  if ( v3 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (this[489] & 0xFFF) + 2) != v3 >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (this[489] & 0xFFF) + 1) )
  {
    return 2;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*(this - 1) + 1268))(this - 1) )
    return 0;
  return this[505] != 1 ? 2 : 0;
}
