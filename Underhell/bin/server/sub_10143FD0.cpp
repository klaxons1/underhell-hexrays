_DWORD *__thiscall sub_10143FD0(_DWORD *this, _DWORD *a2)
{
  if ( *this != *a2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))*(this - 5))(this - 5, this);
    *this = *a2;
  }
  return this;
}
