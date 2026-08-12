char __thiscall sub_102F6E60(_DWORD *this)
{
  char result; // al
  bool v3; // bl

  if ( !*(_DWORD *)(dword_106E289C + 48) || this[1458] == 3 )
    return 0;
  v3 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) == 0;
  result = sub_10022A60(this);
  if ( result )
  {
    if ( v3 )
      (*(void (__thiscall **)(_DWORD *))(*this + 1900))(this);
    return 1;
  }
  return result;
}
