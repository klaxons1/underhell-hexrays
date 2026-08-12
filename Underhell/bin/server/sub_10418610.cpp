void *__thiscall sub_10418610(void *this)
{
  int i; // esi

  for ( i = 0; i < 3; ++i )
  {
    if ( !(&off_10689654)[2 * i] )
      Error("g_NameMap:  CC type at %i has NULL name string!", i);
    if ( i != dword_10689650[2 * i] )
      Error("g_CCNameMap:  Event type at %i has wrong value (%i)!", i, dword_10689650[2 * i]);
  }
  return this;
}
