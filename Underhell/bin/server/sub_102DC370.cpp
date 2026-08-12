BOOL __thiscall sub_102DC370(_BYTE *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( this[5196] && !this[2137] && !this[5217] && (!this[2272] || this[2273]) && this[447] != 3 )
  {
    v1 = sub_101679A0((int)"suit_no_sprint");
    if ( sub_10167A00(v1) != 1 )
      return 1;
  }
  return result;
}
