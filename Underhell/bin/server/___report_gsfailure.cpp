void __cdecl __noreturn __report_gsfailure()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  unsigned int v6; // kr00_4
  HANDLE CurrentProcess; // eax
  int vars0; // [esp+328h] [ebp+0h]
  int retaddr; // [esp+32Ch] [ebp+4h]
  char v10; // [esp+330h] [ebp+8h] BYREF

  dword_10701670 = v0;
  dword_1070166C = v2;
  dword_10701668 = v1;
  dword_10701664 = v3;
  dword_10701660 = v5;
  dword_1070165C = v4;
  word_10701688 = __SS__;
  word_1070167C = __CS__;
  word_10701658 = __DS__;
  word_10701654 = __ES__;
  word_10701650 = __FS__;
  word_1070164C = __GS__;
  v6 = __readeflags();
  dword_10701680 = v6;
  dword_10701674 = vars0;
  dword_10701678 = retaddr;
  dword_10701684 = (int)&v10;
  dword_107015C0 = 65537;
  dword_10701574 = retaddr;
  dword_10701568 = -1073740791;
  dword_1070156C = 1;
  dword_107015B8 = IsDebuggerPresent();
  sub_10444E40(1);
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( !dword_107015B8 )
    sub_10444E40(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}
