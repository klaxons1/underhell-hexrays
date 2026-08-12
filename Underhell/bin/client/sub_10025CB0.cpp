int __thiscall sub_10025CB0(volatile signed __int32 *this, int a2)
{
  int result; // eax
  volatile signed __int32 *v4; // edi
  DWORD CurrentThreadId; // ecx
  char v6; // bl
  int v7; // eax
  int v9; // [esp+10h] [ebp+8h]

  result = *((_DWORD *)this + 3);
  if ( result == 1 || result == 2 || result == 4 )
  {
    v4 = this + 5;
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *v4 && _InterlockedCompareExchange(v4, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(this + 5, CurrentThreadId, 0);
    }
    else
    {
      ++*((_DWORD *)this + 6);
    }
    (**(void (__thiscall ***)(volatile signed __int32 *))this)(this);
    switch ( *((_DWORD *)this + 3) )
    {
      case 1:
      case 4:
        v6 = a2;
        v7 = (*(int (__thiscall **)(volatile signed __int32 *, int))(*this + 16))(this, a2);
        *((_DWORD *)this + 3) = v7;
        v9 = v7;
        if ( v6 )
          (*(void (__thiscall **)(volatile signed __int32 *))(*this + 20))(this);
        CThreadEvent::Set((CThreadEvent *)(this + 10));
        break;
      default:
        v9 = *((_DWORD *)this + 3);
        break;
    }
    (*(void (__thiscall **)(volatile signed __int32 *))(*this + 4))(this);
    if ( (*((_DWORD *)this + 6))-- == 1 )
      _InterlockedExchange(v4, 0);
    return v9;
  }
  return result;
}
