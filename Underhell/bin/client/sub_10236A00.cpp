int __thiscall sub_10236A00(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 292))(this);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 528))(this);
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 288))(this);
      if ( !(_BYTE)result )
      {
        v3 = this[12];
        if ( v3 )
          sub_1025D6C0(v3);
        return (*(int (__thiscall **)(_DWORD *))(*this + 396))(this);
      }
    }
  }
  return result;
}
