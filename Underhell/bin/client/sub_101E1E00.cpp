void *__thiscall sub_101E1E00(void *this)
{
  int i; // esi

  for ( i = 0; i < 3; ++i )
  {
    if ( !(&off_103EDF2C)[2 * i] )
      Error("g_NameMap:  CC type at %i has NULL name string!", i);
    if ( i != dword_103EDF28[2 * i] )
      Error("g_CCNameMap:  Event type at %i has wrong value (%i)!", i, dword_103EDF28[2 * i]);
  }
  return this;
}
