int __cdecl sub_104404D7(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1068F3A0;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
