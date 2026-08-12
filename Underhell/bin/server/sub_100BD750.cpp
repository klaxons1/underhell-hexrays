int __thiscall sub_100BD750(volatile signed __int32 *this)
{
  volatile signed __int32 *v2; // esi
  DWORD CurrentThreadId; // ecx
  int v4; // eax
  unsigned __int16 v5; // ax
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  bool v9; // zf
  int result; // eax
  volatile signed __int32 *v11; // [esp+Ch] [ebp-4h]

  v2 = this + 276;
  v11 = this + 276;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *v2 && _InterlockedCompareExchange(v2, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v2, CurrentThreadId, 0);
  }
  else
  {
    ++*((_DWORD *)v2 + 1);
  }
  v4 = sub_100D7240(this);
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 160))(dword_106B31F0, v4);
    if ( v5 != 0xFFFF )
    {
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10700AC8 + 160))(dword_10700AC8, v5);
      v7 = 0;
      if ( *((_DWORD *)this + 275) )
      {
        v7 = (_DWORD *)*((_DWORD *)this + 275);
      }
      else
      {
        if ( !v6 )
        {
LABEL_17:
          *((_DWORD *)this + 275) = v7;
          v2 = v11;
          goto LABEL_18;
        }
        v8 = sub_10184390(144);
        if ( v8 )
          v7 = (_DWORD *)sub_10246590(v8);
        else
          v7 = 0;
        sub_10245F10(v6, dword_10700AC8);
      }
      if ( v7 && v7[1] )
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10700AC8 + 160))(*(unsigned __int16 *)(*v7 + 344));
      goto LABEL_17;
    }
  }
LABEL_18:
  v9 = (*((_DWORD *)v2 + 1))-- == 1;
  result = *((_DWORD *)v2 + 1);
  if ( v9 )
    _InterlockedExchange(v2, 0);
  return result;
}
