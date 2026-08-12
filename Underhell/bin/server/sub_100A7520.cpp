char __thiscall sub_100A7520(_DWORD *this)
{
  if ( !this[1] )
  {
    sub_100A74C0();
    if ( !sub_10068B30() )
    {
      dword_1069042C |= 1u;
      DevMsg("ERROR:  Mistake in default schedule definitions, AI Disabled.\n");
    }
  }
  return 1;
}
