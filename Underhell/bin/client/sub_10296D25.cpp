int __cdecl sub_10296D25(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_103FE4A4;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
