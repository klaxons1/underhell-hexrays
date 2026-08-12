DWORD __cdecl _freeptd(int a1)
{
  int (__stdcall *Value)(int); // eax
  void (__stdcall *v2)(int, _DWORD); // eax
  DWORD result; // eax
  int v4; // [esp-8h] [ebp-8h]
  int v5; // [esp-8h] [ebp-8h]

  if ( dword_103FE2F4 != -1 )
  {
    if ( !a1 && TlsGetValue(dwTlsIndex) )
    {
      v4 = dword_103FE2F4;
      Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
      a1 = Value(v4);
    }
    v5 = dword_103FE2F4;
    v2 = (void (__stdcall *)(int, _DWORD))DecodePointer(dword_104821C0);
    v2(v5, 0);
    _freefls(a1);
  }
  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
    return TlsSetValue(dwTlsIndex, 0);
  return result;
}
