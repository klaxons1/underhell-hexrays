void __thiscall sub_10038150(int this)
{
  int v2; // ebx
  DWORD CurrentThreadId; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  float *v7; // esi
  unsigned __int8 v8; // al
  float *v9; // edi
  bool v10; // zf
  _BYTE v11[16]; // [esp+4h] [ebp-20h] BYREF
  float v12[3]; // [esp+14h] [ebp-10h] BYREF
  float *v13; // [esp+20h] [ebp-4h]

  if ( (*(_DWORD *)(this + 312) & 0x1000) != 0 )
  {
    v2 = this + 1184;
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *(_DWORD *)v2
      && _InterlockedCompareExchange((volatile signed __int32 *)v2, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(this + 1184, CurrentThreadId, 0);
    }
    else
    {
      ++*(_DWORD *)(this + 1188);
    }
    v4 = *(_DWORD *)(this + 312);
    if ( (v4 & 0x1000) != 0 )
    {
      *(_DWORD *)(this + 312) = v4 & 0xFFFFEFFF;
      v5 = *(_DWORD *)(this + 324);
      if ( v5 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) != v5 >> 12
        || (v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1), (v13 = (float *)v6) == 0) )
      {
        *(float *)(this + 244) = *(float *)(this + 232);
        *(float *)(this + 248) = *(float *)(this + 236);
        *(float *)(this + 252) = *(float *)(this + 240);
        goto LABEL_17;
      }
      sub_10037F50(v6);
      v7 = (float *)(this + 244);
      sub_101ED920(this + 232, v13 + 165, this + 244);
      v8 = *(_BYTE *)(this + 318);
      v9 = v13;
      if ( !v8
        || !(*(unsigned __int8 (__thiscall **)(float *, _DWORD, float *, _BYTE *))(*(_DWORD *)v13 + 288))(
              v13,
              v8,
              v12,
              v11) )
      {
        sub_10038150(v9);
        *v7 = v9[61] + *v7;
        v7[1] = v9[62] + v7[1];
        v7[2] = v9[63] + v7[2];
LABEL_17:
        v10 = (*(_DWORD *)(v2 + 4))-- == 1;
        if ( !v10 )
          return;
        goto LABEL_18;
      }
      *v7 = v12[0] + *v7;
      v7[1] = v12[1] + v7[1];
      v7[2] = v7[2] + v12[2];
    }
    v10 = (*(_DWORD *)(v2 + 4))-- == 1;
    if ( !v10 )
      return;
LABEL_18:
    _InterlockedExchange((volatile __int32 *)v2, 0);
  }
}
