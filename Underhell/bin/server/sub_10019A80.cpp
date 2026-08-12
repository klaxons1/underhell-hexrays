char __thiscall sub_10019A80(_DWORD *this)
{
  int v3; // eax

  if ( !(unsigned __int8)sub_10021F60() )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2208))(this) )
    return 0;
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 2312))(this);
  this[1042] = v3;
  if ( !v3 )
    return 0;
  *(_DWORD *)(v3 + 4) = this + 913;
  return 1;
}
