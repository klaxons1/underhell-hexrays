int __thiscall sub_100D8440(_DWORD *this)
{
  unsigned int v2; // eax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this[48] & 0x20) != 0 )
  {
    v2 = this[78];
    if ( v2 == -1 || off_1061BE18[4 * (this[78] & 0xFFF) + 2] != v2 >> 12 || !off_1061BE18[4 * (this[78] & 0xFFF) + 1] )
      return sub_100D83F0(this, 16);
  }
  if ( (this[63] & 0x80) == 0
    && (!(*(int (__thiscall **)(_DWORD *))(*this + 24))(this)
     || !*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v4)) )
  {
    return sub_100D83F0(this, 16);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 24))(this) == 1 || (this[63] & 0x20000) != 0 )
    return sub_100D83F0(this, 8);
  return sub_100D83F0(this, 32);
}
