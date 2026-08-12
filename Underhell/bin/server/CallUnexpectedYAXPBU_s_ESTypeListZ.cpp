void __cdecl __noreturn CallUnexpected()
{
  if ( _getptd()[37] )
    _inconsistency();
  unexpected();
}
