int __tzset()
{
  int result; // eax

  if ( !dword_10482284 )
  {
    _lock(6);
    if ( !dword_10482284 )
    {
      _tzset_nolock();
      ++dword_10482284;
    }
    return _unlock(6);
  }
  return result;
}
