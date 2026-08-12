int __thiscall sub_1006DD90(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  unsigned int v4; // eax
  int v5; // eax

  result = this[212];
  if ( (result & 1) != 0 )
  {
    result |= 4u;
    v3 = 0;
    for ( this[212] = result; v3 < this[209]; ++v3 )
    {
      v4 = *(_DWORD *)(this[206] + 4 * v3);
      if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * v3) & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * v3) & 0xFFF) + 1];
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 736))(this, v5);
    }
  }
  return result;
}
