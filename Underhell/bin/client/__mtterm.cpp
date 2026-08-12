int __cdecl _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_103FE2F4 != -1 )
  {
    v2 = dword_103FE2F4;
    v0 = (void (__stdcall *)(int))DecodePointer(dword_104821C4);
    v0(v2);
    dword_103FE2F4 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}
