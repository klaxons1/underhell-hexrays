int *__cdecl sub_1001E3C0(int a1)
{
  DWORD CurrentThreadId; // ecx
  int *result; // eax

  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != dword_10403314 && _InterlockedCompareExchange(&dword_10403314, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&dword_10403314, CurrentThreadId, 0);
  }
  else
  {
    ++dword_10403318;
  }
  result = (int *)sub_1022DBC0(a1);
  if ( !--dword_10403318 )
  {
    result = &dword_10403314;
    _InterlockedExchange(&dword_10403314, 0);
  }
  return result;
}
