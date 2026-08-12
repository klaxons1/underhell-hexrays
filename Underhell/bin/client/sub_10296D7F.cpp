int __cdecl sub_10296D7F(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_103FE4A0;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}
