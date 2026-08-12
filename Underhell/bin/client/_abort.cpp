void __cdecl __noreturn abort()
{
  if ( sub_10298C89() )
    raise(22);
  if ( (dword_103FDB70 & 2) != 0 )
    _call_reportfault(3, 1073741845, 1);
  _exit(3);
}
