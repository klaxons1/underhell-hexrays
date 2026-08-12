int __userpurge sub_10245AB0@<eax>(int *a1@<ecx>, int a2@<edi>, int *a3)
{
  int v4; // eax
  int *v5; // ecx
  int result; // eax
  int v7; // ebx
  volatile signed __int32 *v8; // edi
  DWORD CurrentThreadId; // eax
  int **v10; // eax
  const char *v12; // eax
  int v13; // [esp-8h] [ebp-14h]
  int v14; // [esp+8h] [ebp-4h]

  v4 = *a1;
  v5 = a3;
  *(_DWORD *)(v4 + 200) = a3;
  result = a1[1];
  if ( result )
  {
    v7 = 1;
    if ( *(int *)(result + 100) > 1 )
    {
      v14 = 144;
      v13 = a2;
      do
      {
        if ( a1[7] != *(_DWORD *)a1[8] )
        {
          v8 = a1 + 9;
          CurrentThreadId = GetCurrentThreadId();
          if ( CurrentThreadId != a1[9] && _InterlockedCompareExchange(v8, CurrentThreadId, 0) )
          {
            _mm_pause();
            CThreadFastMutex::Lock(a1 + 9, CurrentThreadId, 1);
          }
          else
          {
            ++a1[10];
          }
          v10 = (int **)a1[8];
          v5 = *v10;
          if ( *v10 != (int *)a1[7] )
          {
            memset((void *)a1[2], 0, 4 * a1[5]);
            v5 = (int *)a1[8];
            a1[7] = *v5;
          }
          if ( a1[10]-- == 1 )
            v5 = (int *)_InterlockedExchange(v8, 0);
        }
        if ( v7 >= 0 && v7 < a1[5] )
        {
          result = *(_DWORD *)(a1[2] + 4 * v7);
          if ( !result )
          {
            result = sub_102466C0(v14 + *(_DWORD *)(a1[1] + 88));
            *(_DWORD *)(a1[2] + 4 * v7) = result;
          }
        }
        else
        {
          if ( *a1 )
            v12 = (const char *)(*a1 + 12);
          else
            v12 = "<<null>>";
          if ( dword_106C5C68 < 5 )
          {
            Warning(
              "Invalid index passed to CStudioHdr(%s)::GroupStudioHdr(): %d, but max is %d [%d]\n",
              v12,
              v7,
              a1[5],
              v13);
            ++dword_106C5C68;
          }
          if ( (unsigned __int8)Plat_IsInDebugSession(v5) )
            __debugbreak();
          result = *a1;
        }
        v5 = a3;
        v14 += 144;
        *(_DWORD *)(result + 200) = a3;
        ++v7;
      }
      while ( v7 < *(_DWORD *)(a1[1] + 100) );
    }
  }
  return result;
}
