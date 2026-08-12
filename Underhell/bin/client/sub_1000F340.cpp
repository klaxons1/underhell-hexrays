char __thiscall sub_1000F340(int *this, char a2)
{
  int v3; // esi
  char result; // al

  v3 = this[78];
  result = (v3 & 0x400000) != 0;
  if ( (v3 & 0x400000) != 0 )
  {
    if ( a2 )
    {
      this[78] = v3 & 0xFFBFFFFF;
      return result;
    }
  }
  else if ( a2 )
  {
    return result;
  }
  if ( (this[78] & 0x400000) == 0 )
  {
    result = sub_1000F310(this);
    if ( !result )
      this[78] = v3 | 0x400000;
  }
  return result;
}
