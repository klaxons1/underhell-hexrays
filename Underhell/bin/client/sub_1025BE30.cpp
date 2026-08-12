int __thiscall sub_1025BE30(_DWORD *this, char a2, int a3, int a4, char a5)
{
  if ( (this[73] & 8) != 0 )
  {
    if ( a2 )
      return this[78];
    if ( a5 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) && (this[73] & 0x40) != 0 )
      return this[79];
  }
  else if ( a2 )
  {
    return this[78];
  }
  return this[77];
}
