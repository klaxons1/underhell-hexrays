int __cdecl sub_10101E40(int a1)
{
  DWORD CurrentThreadId; // ecx
  int result; // eax

  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != dword_1069A66C && _InterlockedCompareExchange(&dword_1069A66C, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&dword_1069A66C, CurrentThreadId, 0);
  }
  else
  {
    ++dword_1069A670;
  }
  result = sub_10431AF0(a1);
  if ( !--dword_1069A670 )
    _InterlockedExchange(&dword_1069A66C, 0);
  return result;
}
