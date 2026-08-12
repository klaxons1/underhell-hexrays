int __thiscall sub_1025AE90(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2;
  if ( this[84] != a2 || this[85] != a3 )
  {
    this[84] = a2;
    this[85] = a3;
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
