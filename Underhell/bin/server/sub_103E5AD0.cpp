int __thiscall sub_103E5AD0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax

  result = sub_1025FB50(1);
  v4 = result;
  if ( result )
  {
    v5 = this[391];
    if ( v5 == -1
      || (result = v5 >> 12, off_1061BE18[4 * (this[391] & 0xFFF) + 2] != result)
      || !off_1061BE18[4 * (this[391] & 0xFFF) + 1] )
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(*this + 340))(this);
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 68))(v6, v4, 0);
    }
  }
  return result;
}
