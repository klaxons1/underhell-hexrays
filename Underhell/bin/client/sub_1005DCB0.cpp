int __thiscall sub_1005DCB0(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_10241570(a2);
  if ( *((_BYTE *)this + 973) )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, this[245]);
  return result;
}
