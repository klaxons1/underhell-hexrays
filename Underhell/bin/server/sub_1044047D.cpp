int __cdecl sub_1044047D(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1068F3A4;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
