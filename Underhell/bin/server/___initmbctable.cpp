int __initmbctable()
{
  if ( !dword_10709CB4 )
  {
    _setmbcp(-3);
    dword_10709CB4 = 1;
  }
  return 0;
}
