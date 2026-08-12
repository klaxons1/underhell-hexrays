_BYTE *__thiscall DName::operator|=(_BYTE *this, int a2)
{
  _BYTE *result; // eax
  char v3; // dl

  result = this;
  if ( this[4] != 3 )
  {
    v3 = *(_BYTE *)(a2 + 4);
    if ( v3 > 1 )
      this[4] = v3;
  }
  return result;
}
