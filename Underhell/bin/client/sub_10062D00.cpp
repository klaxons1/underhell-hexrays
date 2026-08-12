int __thiscall sub_10062D00(char *this, int a2)
{
  char *v2; // ebx
  char *v3; // edi
  DWORD CurrentThreadId; // ecx
  int result; // eax
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx
  char *v13; // [esp+Ch] [ebp-10h]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = this + 48;
  v13 = this + 48;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *(_DWORD *)v3
    && _InterlockedCompareExchange((volatile signed __int32 *)v3, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v3, CurrentThreadId, 0);
  }
  else
  {
    ++*((_DWORD *)v3 + 1);
  }
  for ( result = *((unsigned __int16 *)v2 + 90);
        (unsigned __int16)result < *((int *)v2 + 43);
        result = *(unsigned __int16 *)(v6 + *((_DWORD *)v2 + 42) + 10) )
  {
    if ( (unsigned __int16)result > *((_WORD *)v2 + 94) )
      break;
    v6 = 12 * (unsigned __int16)result;
    v7 = v6 + *((_DWORD *)v2 + 42);
    v15 = v6;
    if ( *(_WORD *)(v7 + 8) == (_WORD)result && *(_WORD *)(v7 + 10) != (_WORD)result )
      break;
    v16 = 0;
    if ( *(_DWORD *)(v7 + 4) )
    {
      v8 = 0;
      do
      {
        v9 = *(_DWORD *)v7;
        v10 = 0;
        if ( *(_DWORD *)(*(_DWORD *)v7 + v8 + 8) )
        {
          v11 = (_DWORD *)(v9 + v8 + 12);
          do
          {
            if ( *v11 == a2 )
              *v11 = 0;
            ++v10;
            ++v11;
          }
          while ( v10 != *(_DWORD *)(v9 + v8 + 8) );
          v6 = v15;
          v2 = this;
        }
        v8 += 524;
        ++v16;
      }
      while ( v16 != *(_DWORD *)(v7 + 4) );
      v3 = v13;
    }
  }
  if ( (*((_DWORD *)v3 + 1))-- == 1 )
    _InterlockedExchange((volatile __int32 *)v3, 0);
  return result;
}
