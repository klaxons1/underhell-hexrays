int __thiscall sub_10249640(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( this[66] != a2 )
  {
    this[66] = a2;
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
