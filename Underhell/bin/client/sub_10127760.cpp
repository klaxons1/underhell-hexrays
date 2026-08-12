int __thiscall sub_10127760(char *this, int a2)
{
  _DWORD *v3; // ecx
  volatile signed __int32 *v4; // edi
  DWORD CurrentThreadId; // eax
  _DWORD **v6; // eax
  const char *v8; // eax
  int result; // eax
  int v10; // [esp+0h] [ebp-Ch]

  if ( !this && dword_1043819C < 5 )
  {
    Warning("Call to NULL CStudioHdr::GroupStudioHdr()\n");
    ++dword_1043819C;
  }
  v3 = (_DWORD *)*((_DWORD *)this + 7);
  if ( v3 != **((_DWORD ***)this + 8) )
  {
    v4 = (volatile signed __int32 *)(this + 36);
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *((_DWORD *)this + 9) && _InterlockedCompareExchange(v4, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(this + 36, CurrentThreadId, 1);
    }
    else
    {
      ++*((_DWORD *)this + 10);
    }
    v6 = (_DWORD **)*((_DWORD *)this + 8);
    v3 = *v6;
    if ( *v6 != *((_DWORD **)this + 7) )
    {
      memset(*((void **)this + 2), 0, 4 * *((_DWORD *)this + 5));
      v3 = (_DWORD *)*((_DWORD *)this + 8);
      *((_DWORD *)this + 7) = *v3;
    }
    if ( (*((_DWORD *)this + 10))-- == 1 )
      v3 = (_DWORD *)_InterlockedExchange(v4, 0);
  }
  if ( a2 >= 0 && a2 < *((_DWORD *)this + 5) )
  {
    result = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * a2);
    if ( !result )
    {
      result = sub_10128980(*(_DWORD *)(*((_DWORD *)this + 1) + 88) + 144 * a2);
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * a2) = result;
    }
  }
  else
  {
    if ( *(_DWORD *)this )
      v8 = (const char *)(*(_DWORD *)this + 12);
    else
      v8 = "<<null>>";
    if ( dword_10438198 < 5 )
    {
      Warning(
        "Invalid index passed to CStudioHdr(%s)::GroupStudioHdr(): %d, but max is %d [%d]\n",
        v8,
        a2,
        *((_DWORD *)this + 5),
        v10);
      ++dword_10438198;
    }
    if ( (unsigned __int8)Plat_IsInDebugSession(v3) )
      __debugbreak();
    return *(_DWORD *)this;
  }
  return result;
}
