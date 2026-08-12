int __thiscall sub_100E9380(_DWORD *this, char a2)
{
  int v3; // esi
  unsigned int v4; // esi

  v3 = this[63];
  if ( (v3 & 0x400000) != 0 )
  {
    if ( a2 )
    {
      v4 = v3 & 0xFFBFFFFF;
LABEL_8:
      this[63] = v4;
      return sub_1012D820(this);
    }
  }
  else if ( a2 )
  {
    return sub_1012D820(this);
  }
  if ( (this[63] & 0x400000) == 0 && !sub_100E9300(this) )
  {
    v4 = v3 | 0x400000;
    goto LABEL_8;
  }
  return sub_1012D820(this);
}
