int __thiscall sub_103991F0(_DWORD *this)
{
  unsigned int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this)
    && (v2 = this[1345], v2 != -1)
    && off_1061BE18[4 * (this[1345] & 0xFFF) + 2] == v2 >> 12 )
  {
    return off_1061BE18[4 * (this[1345] & 0xFFF) + 1];
  }
  else
  {
    return 0;
  }
}
