int __thiscall sub_1024BC90(_DWORD *this, int a2)
{
  if ( a2 == 1 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 56))(this, 0);
  if ( a2 == -1 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 52))(this, 0);
  return sub_10237240(this, 0);
}
