int __thiscall sub_1024DB50(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  bool v7; // zf

  result = (*(int (__thiscall **)(_DWORD *))(*this + 724))(this);
  if ( !(_BYTE)result )
  {
    v7 = this[200] == 0;
    this[50] = 0;
    if ( !v7 )
      return result;
    return (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  }
  result = sub_100D62E0(a4, this[200] == 1);
  if ( !result )
    return result;
  result = this[200];
  if ( !result )
    return (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  if ( result == 1 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 728))(this);
  return result;
}
