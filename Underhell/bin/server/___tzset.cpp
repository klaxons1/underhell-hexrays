int __tzset()
{
  int result; // eax

  if ( !dword_1070128C )
  {
    _lock(6);
    if ( !dword_1070128C )
    {
      _tzset_nolock();
      ++dword_1070128C;
    }
    return _unlock(6);
  }
  return result;
}
