bool __thiscall sub_100446B0(_DWORD *this)
{
  int v2; // eax
  bool result; // al
  int v4; // eax
  int v5; // eax

  v2 = this[584];
  result = 0;
  if ( v2 != 7 && (v2 != 4 || this[581] == 4) )
  {
    if ( !sub_10023D10(this, 36) )
      return 1;
    v4 = this[531];
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 16) & 0x10) != 0 )
        return 1;
    }
    if ( this[581] == 3 && !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
      return 1;
    v5 = this[581];
    if ( v5 == 1 || v5 == 2 )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
        return 1;
    }
  }
  return result;
}
