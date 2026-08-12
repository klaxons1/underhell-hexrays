int __thiscall sub_100928A0(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax

  v3 = this[581];
  if ( v3 != 1 && v3 != 2
    || (LOBYTE(result) = (*(int (__thiscall **)(_DWORD *, int))(*this + 2340))(this, a2), !(_BYTE)result) )
  {
    v5 = *this;
    if ( this[581] == 2 )
      return (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v5 + 2328))(this, a2);
    LOBYTE(result) = (*(int (__thiscall **)(_DWORD *, int))(v5 + 2324))(this, a2);
  }
  return (unsigned __int8)result;
}
