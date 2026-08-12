int __usercall TranslatorGuardHandler@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        struct EHExceptionRecord *ExceptionRecord,
        unsigned int TargetFrame,
        struct _CONTEXT *a4)
{
  int (*v5)(void); // [esp+4h] [ebp-4h] BYREF

  sub_1028BA07(TargetFrame ^ *(_DWORD *)(TargetFrame + 8));
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    *(_DWORD *)(TargetFrame + 36) = 1;
    return 1;
  }
  else
  {
    __InternalCxxFrameHandler(
      ExceptionRecord,
      *(struct EHRegistrationNode **)(TargetFrame + 16),
      a4,
      0,
      *(struct _s_FuncInfo **)(TargetFrame + 12),
      *(_DWORD *)(TargetFrame + 20),
      *(struct EHRegistrationNode **)(TargetFrame + 24),
      1u);
    if ( !*(_DWORD *)(TargetFrame + 36) )
      _UnwindNestedFrames(a1, (PVOID)TargetFrame, (PEXCEPTION_RECORD)ExceptionRecord);
    _CallSETranslator((struct EHExceptionRecord *)0x123, (struct EHRegistrationNode *)&v5, 0, 0, 0, 0, 0);
    return v5();
  }
}
