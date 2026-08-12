int __thiscall sub_10064870(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax

  v2 = this + 55;
  if ( this[55] != a2 )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    *v2 = a2;
  }
  return result;
}
