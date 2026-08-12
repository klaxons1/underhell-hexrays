_DWORD *__thiscall sub_101E9D90(_DWORD *this, _DWORD *a2)
{
  if ( *this != *a2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*(this - 1002) + 1628))(this - 1002, this);
    *this = *a2;
  }
  return this;
}
