_DWORD *__thiscall sub_1002AB00(_DWORD *this, _DWORD *a2)
{
  if ( *this != *a2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*(this - 55) + 464))(this - 55, this);
    *this = *a2;
  }
  return this;
}
