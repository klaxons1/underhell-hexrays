void __cdecl __noreturn _inconsistency()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))DecodePointer(dword_107011D0);
  if ( v0 )
    v0();
  terminate();
}
