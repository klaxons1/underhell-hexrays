_DWORD *__thiscall sub_10143FA0(_DWORD *this, _DWORD *a2)
{
  if ( *this != *a2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))*(this - 4))(this - 4, this);
    *this = *a2;
  }
  return this;
}
