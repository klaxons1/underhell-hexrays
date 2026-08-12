int __cdecl _cinit(int a1)
{
  int result; // eax
  void (**v2)(void); // edi

  if ( _fpmath && _IsNonwritableInCurrentImage(&off_103AD4B0) )
    _fpmath(a1);
  _initp_misc_cfltcvt_tab();
  result = _initterm_e((_PIFV *)&First, (_PIFV *)&Last);
  if ( !result )
  {
    atexit(sub_1029888E);
    v2 = (void (**)(void))&unk_102CF2A8;
    if ( &unk_102CF2A8 < (_UNKNOWN *)&dword_102D30BC )
    {
      do
      {
        if ( *v2 )
          (*v2)();
        ++v2;
      }
      while ( v2 < &dword_102D30BC );
    }
    if ( dword_1048ACFC )
    {
      if ( _IsNonwritableInCurrentImage(&dword_1048ACFC) )
        dword_1048ACFC(0, 2, 0);
    }
    return 0;
  }
  return result;
}
