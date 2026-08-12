int __cdecl _cinit(int a1)
{
  int result; // eax
  void (**v2)(void); // edi

  if ( _fpmath && _IsNonwritableInCurrentImage(&off_105C91F4) )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&First, (_PIFV *)&Last);
  if ( !result )
  {
    atexit(sub_10441DC2);
    v2 = (void (**)(void))&unk_1047A270;
    if ( &unk_1047A270 < (_UNKNOWN *)&dword_1047DC44 )
    {
      do
      {
        if ( *v2 )
          (*v2)();
        ++v2;
      }
      while ( v2 < &dword_1047DC44 );
    }
    if ( dword_10709CB8 )
    {
      if ( _IsNonwritableInCurrentImage(&dword_10709CB8) )
        dword_10709CB8(0, 2, 0);
    }
    return 0;
  }
  return result;
}
