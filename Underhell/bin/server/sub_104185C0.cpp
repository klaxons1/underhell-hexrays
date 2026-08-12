void *__thiscall sub_104185C0(void *this)
{
  int i; // esi

  for ( i = 0; i < 17; ++i )
  {
    if ( !(&off_106895CC)[2 * i] )
      Error("g_NameMap:  Event type at %i has NULL name string!", i);
    if ( i != dword_106895C8[2 * i] )
      Error("g_NameMap:  Event type at %i has wrong value (%i)!", i, dword_106895C8[2 * i]);
  }
  return this;
}
