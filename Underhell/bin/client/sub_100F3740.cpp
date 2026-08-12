int *__stdcall sub_100F3740(int a1)
{
  int *result; // eax
  DWORD CurrentThreadId; // ecx

  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C);
  if ( (_BYTE)result )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != dword_10435DEC && _InterlockedCompareExchange(&dword_10435DEC, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(&dword_10435DEC, CurrentThreadId, 0);
    }
    else
    {
      ++dword_10435DF0;
    }
    result = (int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413160 + 80))(dword_10413160, a1);
    if ( !--dword_10435DF0 )
    {
      result = &dword_10435DEC;
      _InterlockedExchange(&dword_10435DEC, 0);
    }
  }
  return result;
}
