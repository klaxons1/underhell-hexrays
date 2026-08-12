int __cdecl _mtterm()
{
  void (__stdcall *v0)(int); // eax
  int v2; // [esp-4h] [ebp-4h]

  if ( dword_1068EA54 != -1 )
  {
    v2 = dword_1068EA54;
    v0 = (void (__stdcall *)(int))DecodePointer(dword_107011A8);
    v0(v2);
    dword_1068EA54 = -1;
  }
  if ( dwTlsIndex != -1 )
  {
    TlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return _mtdeletelocks();
}
