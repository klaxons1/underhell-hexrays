int __thiscall sub_10266160(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 4))(this, a2, 1);
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*(this - 372) + 340))(this - 372);
    if ( v4 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 116))(v4, a2);
    else
      return 1;
  }
  return result;
}
