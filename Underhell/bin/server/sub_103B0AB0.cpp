bool __thiscall sub_103B0AB0(_DWORD *this)
{
  const char *v2; // eax
  unsigned int v3; // eax
  bool result; // al

  v2 = (const char *)this[974];
  if ( !v2 )
    v2 = String;
  result = 0;
  if ( v2 != "null" )
  {
    if ( _stricmp(v2, "null") )
    {
      v3 = this[652];
      if ( v3 == -1
        || off_1061BE18[4 * (this[652] & 0xFFF) + 2] != v3 >> 12
        || !off_1061BE18[4 * (this[652] & 0xFFF) + 1] )
      {
        return 1;
      }
    }
  }
  return result;
}
