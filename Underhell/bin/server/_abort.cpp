void __cdecl __noreturn abort()
{
  if ( sub_10442FE7() )
    raise(22);
  if ( (dword_1068EA10 & 2) != 0 )
    _call_reportfault(3, 1073741845, 1);
  _exit(3);
}
