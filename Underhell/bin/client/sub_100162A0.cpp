int __thiscall sub_100162A0(_DWORD *this)
{
  int result; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(this[1] + 12))(this + 1);
  if ( (_BYTE)result )
  {
    v3 = this[307];
    if ( v3 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (this[307] & 0xFFF) + 2) == v3 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (this[307] & 0xFFF) + 1)
      || (v4 = this[308], v4 != -1)
      && *((_DWORD *)off_103DCD74 + 4 * (this[308] & 0xFFF) + 2) == v4 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (this[308] & 0xFFF) + 1) )
    {
      sub_10015D90(this, v5, v6);
      sub_1008FC00(v5, v6);
    }
    return sub_10035F90(0);
  }
  return result;
}
