void *__thiscall sub_101E1D70(void *this)
{
  int i; // esi

  for ( i = 0; i < 17; ++i )
  {
    if ( !(&off_103EDEA4)[2 * i] )
      Error("g_NameMap:  Event type at %i has NULL name string!", i);
    if ( i != dword_103EDEA0[2 * i] )
      Error("g_NameMap:  Event type at %i has wrong value (%i)!", i, dword_103EDEA0[2 * i]);
  }
  return this;
}
