int __thiscall sub_103C7280(_BYTE *this, int a2)
{
  if ( this[5761] )
  {
    if ( a2 == 1 )
      return 411;
    if ( a2 == 6 || a2 == 7 || a2 == 11 || a2 == 12 )
      return 412;
  }
  if ( a2 == 1 )
  {
    if ( sub_103942C0((int)this) >= 1 )
      return 78;
  }
  else if ( a2 == 18 )
  {
    return dword_106EBEAC;
  }
  return sub_10398300((int)this, a2);
}
