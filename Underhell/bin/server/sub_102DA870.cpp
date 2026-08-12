int __thiscall sub_102DA870(_DWORD *this)
{
  int result; // eax
  int v3; // eax

  result = this[1269];
  if ( !result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this) )
    {
      v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this);
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v3 + 92))(v3, this, 1);
    }
    else
    {
      return 1;
    }
  }
  return result;
}
