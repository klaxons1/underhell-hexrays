int __thiscall sub_10100EF0(int *this)
{
  int *v1; // esi
  DWORD CurrentThreadId; // ecx
  int result; // eax

  v1 = this + 19;
  CurrentThreadId = GetCurrentThreadId();
  result = *v1;
  if ( CurrentThreadId != *v1 && (result = _InterlockedCompareExchange(v1, CurrentThreadId, 0)) != 0 )
  {
    _mm_pause();
    return CThreadFastMutex::Lock(v1, CurrentThreadId, 0);
  }
  else
  {
    ++v1[1];
  }
  return result;
}
