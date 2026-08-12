int __thiscall sub_10026520(int this)
{
  int v2; // esi
  DWORD CurrentThreadId; // ecx
  int result; // eax
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-4h]

  v2 = this + 1948;
  v9 = this + 1948;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != *(_DWORD *)v2
    && _InterlockedCompareExchange((volatile signed __int32 *)v2, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(v2, CurrentThreadId, 0);
  }
  else
  {
    ++*(_DWORD *)(v2 + 4);
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 160))(dword_10413178, result);
    *(_WORD *)(this + 1944) = result;
    if ( (_WORD)result != 0xFFFF )
    {
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA8C + 160))(dword_1047CA8C, result);
      result = *(_DWORD *)(this + 1940);
      v6 = 0;
      if ( result )
      {
        v6 = *(_DWORD **)(this + 1940);
      }
      else
      {
        if ( !v5 )
        {
          *(_WORD *)(this + 1944) = -1;
LABEL_18:
          *(_DWORD *)(this + 1940) = v6;
          v2 = v9;
          goto LABEL_19;
        }
        v7 = sub_100DDA40(144);
        if ( v7 )
          v6 = (_DWORD *)sub_10128850(v7);
        else
          v6 = 0;
        result = sub_101281D0(v5, dword_1047CA8C);
      }
      if ( v6 && v6[1] )
        result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA8C + 160))(*(unsigned __int16 *)(*v6 + 344));
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( (*(_DWORD *)(v2 + 4))-- == 1 )
    _InterlockedExchange((volatile __int32 *)v2, 0);
  return result;
}
