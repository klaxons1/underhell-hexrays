int _mtinit()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // edi
  BOOL (__stdcall *FlsFree)(DWORD); // eax
  DWORD v4; // eax
  int (__stdcall *v5)(_DWORD); // eax
  DWORD *v6; // eax
  DWORD *v7; // esi
  int (__stdcall *v8)(int, DWORD *); // eax
  DWORD CurrentThreadId; // eax
  int v10; // [esp-Ch] [ebp-10h]
  DWORD *v11; // [esp-8h] [ebp-Ch]

  ModuleHandleW = GetModuleHandleW(L"KERNEL32.DLL");
  v1 = ModuleHandleW;
  if ( !ModuleHandleW )
  {
    _mtterm();
    return 0;
  }
  FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))GetProcAddress(ModuleHandleW, "FlsAlloc");
  FlsGetValue = (PVOID (__stdcall *)(DWORD))GetProcAddress(v1, "FlsGetValue");
  FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))GetProcAddress(v1, "FlsSetValue");
  FlsFree = (BOOL (__stdcall *)(DWORD))GetProcAddress(v1, "FlsFree");
  dword_104821C4 = FlsFree;
  if ( !FlsAlloc || !FlsGetValue || !FlsSetValue || !FlsFree )
  {
    FlsGetValue = TlsGetValue;
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))__crtTlsAlloc;
    FlsSetValue = TlsSetValue;
    dword_104821C4 = TlsFree;
  }
  v4 = TlsAlloc();
  dwTlsIndex = v4;
  if ( v4 != -1 && TlsSetValue(v4, FlsGetValue) )
  {
    _init_pointers();
    FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))EncodePointer(FlsAlloc);
    FlsGetValue = (PVOID (__stdcall *)(DWORD))EncodePointer(FlsGetValue);
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))EncodePointer(FlsSetValue);
    dword_104821C4 = EncodePointer(dword_104821C4);
    if ( _mtinitlocks() )
    {
      v5 = (int (__stdcall *)(_DWORD))DecodePointer(FlsAlloc);
      dword_103FE2F4 = v5(_freefls);
      if ( dword_103FE2F4 != -1 )
      {
        v6 = (DWORD *)sub_100DD9C0(1, 532);
        v7 = v6;
        if ( v6 )
        {
          v11 = v6;
          v10 = dword_103FE2F4;
          v8 = (int (__stdcall *)(int, DWORD *))DecodePointer(FlsSetValue);
          if ( v8(v10, v11) )
          {
            _initptd((int)v7, 0);
            CurrentThreadId = GetCurrentThreadId();
            v7[1] = -1;
            *v7 = CurrentThreadId;
            return 1;
          }
        }
      }
    }
    _mtterm();
  }
  return 0;
}
