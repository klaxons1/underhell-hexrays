int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  DWORD *v4; // eax
  DWORD *v5; // esi
  int (__stdcall *v6)(int, DWORD *); // eax
  int v7; // [esp-8h] [ebp-30h]
  DWORD *v8; // [esp-4h] [ebp-2Ch]

  if ( a2 == 1 )
  {
    if ( !sub_10184650() )
      return 0;
    if ( !_mtinit() )
    {
LABEL_5:
      nullsub_4();
      return 0;
    }
    sub_10441D9C();
    dword_10709CC0 = (int)GetCommandLineA();
    dword_10700B1C = (char *)__crtGetEnvironmentStringsA();
    if ( _ioinit() < 0 )
    {
LABEL_7:
      _mtterm();
      goto LABEL_5;
    }
    if ( _setargv() < 0 || _setenvp() < 0 || _cinit(0) )
    {
      _ioterm();
      goto LABEL_7;
    }
    ++dword_10700B18;
  }
  else if ( a2 )
  {
    if ( a2 == 2 )
    {
      __set_flsgetvalue();
      v4 = (DWORD *)sub_101845E0(1, 532);
      v5 = v4;
      if ( !v4 )
        return 0;
      v8 = v4;
      v7 = dword_1068EA54;
      v6 = (int (__stdcall *)(int, DWORD *))DecodePointer(dword_107011A4);
      if ( !v6(v7, v8) )
      {
        sub_10184660((int)v5);
        return 0;
      }
      _initptd(v5, 0);
      *v5 = GetCurrentThreadId();
      v5[1] = -1;
    }
    else if ( a2 == 3 )
    {
      _freeptd(0);
    }
  }
  else
  {
    if ( dword_10700B18 <= 0 )
      return 0;
    --dword_10700B18;
    if ( !dword_10701190 )
      _cexit();
    if ( !a3 )
    {
      _ioterm();
      _mtterm();
      nullsub_4();
      if ( dword_1068EA54 != -1 )
        _mtterm();
    }
  }
  return 1;
}
