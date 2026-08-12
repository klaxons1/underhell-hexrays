int __thiscall sub_101EC2A0(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax

  v2 = this + 1002;
  if ( this[1002] != a2 )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 1628))(this, this + 1002);
    *v2 = a2;
  }
  return result;
}
