char __thiscall sub_1001E240(int this)
{
  DWORD CurrentThreadId; // eax
  char result; // al

  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *(_DWORD *)(this + 76)
    && _InterlockedCompareExchange((volatile signed __int32 *)(this + 76), CurrentThreadId, 0) )
  {
    return 0;
  }
  result = 1;
  ++*(_DWORD *)(this + 80);
  return result;
}
