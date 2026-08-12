bool __thiscall sub_1008AA10(_DWORD *this, unsigned __int16 a2, float a3)
{
  int v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // eax
  bool result; // al

  v4 = this[9] + 168 * a2;
  v5 = (*(_BYTE *)(v4 + 8) & 0x20) != 0;
  result = 0;
  if ( sub_10089F20(this + 16, *(_WORD *)(v4 + 148), v5, a3) || v5 )
  {
    v6 = *(unsigned __int16 *)(v4 + 148);
    *(_WORD *)(v4 + 8) |= 0x20u;
    if ( *(_WORD *)(this[17] + 10 * v6) != 0xFFFF )
    {
      v7 = sub_1007A730(off_103DCD78, *(_DWORD *)v4);
      if ( sub_1008A820((int)this, v7, v4, 0) )
        return 1;
    }
  }
  return result;
}
