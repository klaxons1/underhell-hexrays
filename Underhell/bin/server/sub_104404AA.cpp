int __cdecl sub_104404AA(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1068F3A8;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
