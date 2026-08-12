int __thiscall sub_103991A0(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this)
    && (v2 = this[1345], v2 != -1)
    && off_1061BE18[4 * (this[1345] & 0xFFF) + 2] == v2 >> 12
    && (v3 = off_1061BE18[4 * (this[1345] & 0xFFF) + 1]) != 0 )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 340))(v3);
  }
  else
  {
    return 0;
  }
}
