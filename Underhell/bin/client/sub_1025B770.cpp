char __thiscall sub_1025B770(_WORD *this)
{
  __int16 v2; // ax
  char result; // al

  if ( !(*(unsigned __int8 (__thiscall **)(_WORD *))(*(_DWORD *)this + 204))(this) )
    goto LABEL_7;
  v2 = this[146];
  if ( (v2 & 4) != 0 )
  {
    result = 1;
    goto LABEL_8;
  }
  if ( (this[146] & 1) != 0 && (v2 & 0x80u) != 0 )
    result = 1;
  else
LABEL_7:
    result = 0;
LABEL_8:
  if ( result )
    this[146] |= 2u;
  else
    this[146] &= ~2u;
  return result;
}
