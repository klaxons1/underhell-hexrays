int *__cdecl sub_10101200(int a1)
{
  DWORD CurrentThreadId; // ecx
  int *result; // eax

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
  result = (int *)sub_10431A30(a1);
  if ( !--dword_1069A670 )
  {
    result = &dword_1069A66C;
    _InterlockedExchange(&dword_1069A66C, 0);
  }
  return result;
}
