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

  dword_104824B0 = v0;
  dword_104824AC = v2;
  dword_104824A8 = v1;
  dword_104824A4 = v3;
  dword_104824A0 = v5;
  dword_1048249C = v4;
  word_104824C8 = __SS__;
  word_104824BC = __CS__;
  word_10482498 = __DS__;
  word_10482494 = __ES__;
  word_10482490 = __FS__;
  word_1048248C = __GS__;
  v6 = __readeflags();
  dword_104824C0 = v6;
  dword_104824B4 = vars0;
  dword_104824B8 = retaddr;
  dword_104824C4 = (int)&v10;
  dword_10482400 = 65537;
  dword_104823B4 = retaddr;
  dword_104823A8 = -1073740791;
  dword_104823AC = 1;
  dword_104823F8 = IsDebuggerPresent();
  sub_102A57C7(1);
  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
  if ( !dword_104823F8 )
    sub_102A57C7(1);
  CurrentProcess = GetCurrentProcess();
  TerminateProcess(CurrentProcess, 0xC0000409);
}
