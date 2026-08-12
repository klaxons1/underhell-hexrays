int __thiscall sub_1023C8D0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // edi
  int v5; // esi

  result = this[201];
  if ( result == -1 )
    return sub_1023C870((int)this);
  while ( 1 )
  {
    v4 = &this[13 * result + 203];
    if ( this[13 * result + 211] == a3 )
    {
      v5 = *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 ? 0 : off_1061BE18[4 * (*v4 & 0xFFF) + 1];
      if ( v5 == a2 )
        break;
    }
    result = SLOWORD(this[13 * result + 210]);
    if ( result == -1 )
      return sub_1023C870((int)this);
  }
  return result;
}
