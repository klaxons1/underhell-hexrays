int __usercall sub_10127D20@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  volatile signed __int32 *v7; // edi
  DWORD CurrentThreadId; // eax
  _DWORD **v9; // eax
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-8h] [ebp-18h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  v3 = a1[1];
  if ( !v3 )
    return *(_DWORD *)(*a1 + 196);
  v5 = 1;
  v15 = *(_DWORD *)(*a1 + 196);
  v17 = 1;
  if ( *(int *)(v3 + 100) > 1 )
  {
    v16 = 144;
    v14 = a2;
    while ( 1 )
    {
      v6 = (_DWORD *)a1[7];
      if ( v6 != *(_DWORD **)a1[8] )
        break;
LABEL_15:
      if ( v5 >= 0 && v5 < a1[5] )
      {
        v12 = *(_DWORD *)(a1[2] + 4 * v5);
        if ( !v12 )
        {
          v12 = sub_10128980(v16 + *(_DWORD *)(a1[1] + 88));
          *(_DWORD *)(a1[2] + 4 * v5) = v12;
        }
      }
      else
      {
        if ( *a1 )
          v11 = (const char *)(*a1 + 12);
        else
          v11 = "<<null>>";
        if ( dword_10438198 < 5 )
        {
          Warning(
            "Invalid index passed to CStudioHdr(%s)::GroupStudioHdr(): %d, but max is %d [%d]\n",
            v11,
            v5,
            a1[5],
            v14);
          ++dword_10438198;
        }
        if ( (unsigned __int8)Plat_IsInDebugSession(v6) )
          __debugbreak();
        v12 = *a1;
      }
      v13 = *(_DWORD *)(v12 + 196);
      if ( v15 >= v13 )
        v15 = v13;
      v16 += 144;
      v17 = ++v5;
      if ( v5 >= *(_DWORD *)(a1[1] + 100) )
        return v15;
    }
    v7 = a1 + 9;
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != a1[9] )
    {
      if ( _InterlockedCompareExchange(v7, CurrentThreadId, 0) )
      {
        _mm_pause();
        CThreadFastMutex::Lock(a1 + 9, CurrentThreadId, 1);
        v5 = v17;
        goto LABEL_11;
      }
      v5 = v17;
    }
    ++a1[10];
LABEL_11:
    v9 = (_DWORD **)a1[8];
    v6 = *v9;
    if ( *v9 != (_DWORD *)a1[7] )
    {
      memset((void *)a1[2], 0, 4 * a1[5]);
      v6 = (_DWORD *)a1[8];
      a1[7] = *v6;
    }
    if ( a1[10]-- == 1 )
      v6 = (_DWORD *)_InterlockedExchange(v7, 0);
    goto LABEL_15;
  }
  return v15;
}
