int __cdecl sub_10103740(float *a1)
{
  DWORD CurrentThreadId; // ecx
  int v2; // edi
  int v3; // eax
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
  sub_10431C60((52 * *(_DWORD *)(**(_DWORD **)a1 + 156) + 3) & 0xFFFFFFFC);
  v2 = (unsigned __int16)sub_10431BA0(0);
  v3 = sub_10103130(a1);
  result = sub_104314F0(v2, v3, *(_DWORD *)(v3 + 8));
  if ( !--dword_1069A670 )
    _InterlockedExchange(&dword_1069A66C, 0);
  return result;
}
