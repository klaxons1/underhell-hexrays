int __initmbctable()
{
  if ( !dword_1048ACF8 )
  {
    _setmbcp(-3);
    dword_1048ACF8 = 1;
  }
  return 0;
}
