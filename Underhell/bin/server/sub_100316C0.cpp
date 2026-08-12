_BYTE *__thiscall sub_100316C0(_BYTE *this, char *a2)
{
  char v2; // bl

  v2 = *a2;
  if ( *a2 != *this )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)this - 56) + 472))(this - 224, this);
    *this = v2;
  }
  return this;
}
