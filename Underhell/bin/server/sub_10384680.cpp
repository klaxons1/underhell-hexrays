int __thiscall sub_10384680(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax

  v2 = this + 55;
  if ( this[55] )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    *v2 = 0;
  }
  return result;
}
