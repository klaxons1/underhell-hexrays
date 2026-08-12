int __thiscall sub_1024DAB0(_DWORD *this, int a2)
{
  int result; // eax
  bool v4; // zf

  result = (*(int (__thiscall **)(_DWORD *))(*this + 724))(this);
  if ( !(_BYTE)result )
  {
    v4 = this[200] == 0;
    this[50] = 0;
    if ( !v4 )
      return result;
    return (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  }
  result = this[200];
  if ( !result )
    return (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  if ( result == 1 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 728))(this);
  return result;
}
