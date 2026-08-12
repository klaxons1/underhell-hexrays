_BYTE *__thiscall sub_100317D0(_BYTE *this, char *a2)
{
  char v2; // bl

  v2 = *a2;
  if ( *a2 != *this )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(this - 225) + 480))(this - 225, this);
    *this = v2;
  }
  return this;
}
