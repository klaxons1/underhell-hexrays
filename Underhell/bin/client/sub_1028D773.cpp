const char *__cdecl sub_1028D773(char *String)
{
  const char *v2; // [esp+14h] [ebp-1Ch]

  if ( String && strnlen(String, 0x7FFFu) < 0x7FFF )
  {
    _lock(7);
    v2 = _getenv_helper_nolock(String);
    _unlock(7);
    return v2;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
}
