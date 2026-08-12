int __cdecl sub_100208C0(float *a1)
{
  DWORD CurrentThreadId; // ecx
  int v2; // edi
  int v3; // eax
  int result; // eax

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
  sub_1022DDF0((52 * *(_DWORD *)(**(_DWORD **)a1 + 156) + 3) & 0xFFFFFFFC);
  v2 = (unsigned __int16)sub_1022DD30(0);
  v3 = sub_100202B0(a1);
  result = sub_1022D5B0(v2, v3, *(_DWORD *)(v3 + 8));
  if ( !--dword_10403318 )
    _InterlockedExchange(&dword_10403314, 0);
  return result;
}
