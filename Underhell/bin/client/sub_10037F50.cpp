void __thiscall sub_10037F50(int this)
{
  int v2; // edi
  DWORD CurrentThreadId; // ecx
  int v4; // eax
  int v5; // ebx
  float *v6; // eax
  float *v7; // esi
  bool v8; // zf
  void *v9; // eax
  int v10; // eax
  float *v11; // eax
  _BYTE v12[48]; // [esp+4h] [ebp-64h] BYREF
  _BYTE v13[48]; // [esp+34h] [ebp-34h] BYREF
  int v14; // [esp+64h] [ebp-4h]

  if ( byte_103D89C3 && (*(_DWORD *)(this + 312) & 0x800) != 0 )
  {
    v2 = this + 1176;
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *(_DWORD *)v2
      && _InterlockedCompareExchange((volatile signed __int32 *)v2, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(this + 1176, CurrentThreadId, 0);
    }
    else
    {
      ++*(_DWORD *)(this + 1180);
    }
    v4 = *(_DWORD *)(this + 312);
    if ( (v4 & 0x800) == 0 )
    {
LABEL_10:
      v8 = (*(_DWORD *)(v2 + 4))-- == 1;
      if ( !v8 )
        return;
      goto LABEL_11;
    }
    *(_DWORD *)(this + 312) = v4 & 0xFFFFF7FF;
    if ( sub_10036940((unsigned int *)(this + 324)) )
    {
      v5 = this + 548;
      v14 = this + 604;
      sub_101F0B70(this + 604, this + 548, this + 660);
      v6 = (float *)(this + 604);
      *(float *)(this + 500) = *(float *)(this + 548);
      v7 = (float *)(this + 512);
      *(v7 - 2) = *(float *)(v5 + 4);
      *(v7 - 1) = *(float *)(v5 + 8);
      *v7 = *v6;
      v7[1] = v6[1];
      v7[2] = v6[2];
      sub_10076970(v7);
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(this + 112) & 1) != 0 )
    {
      sub_10037E30((_DWORD *)this);
      v8 = (*(_DWORD *)(this + 1180))-- == 1;
      if ( v8 )
LABEL_11:
        _InterlockedExchange((volatile __int32 *)v2, 0);
    }
    else
    {
      sub_101EE440(this + 604, v13);
      sub_101EDA20(this + 548, 3, v13);
      v9 = sub_10037EA0(this, v12);
      sub_101EDC00(v9, v13, this + 660);
      sub_101EDA00(this + 660, 3, this + 500);
      if ( !sub_1000E3F0((float *)(this + 604), &flt_1045924C) || *(_BYTE *)(this + 318) )
      {
        sub_101ED7B0(this + 660, this + 512);
      }
      else
      {
        v10 = sub_1006BE10(this + 324);
        v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 40))(v10);
        *(float *)(this + 512) = *v11;
        *(float *)(this + 516) = v11[1];
        *(float *)(this + 520) = v11[2];
      }
      if ( *(_BYTE *)(this + 318) && (*(_BYTE *)(sub_1006BE10(this + 324) + 732) & 8) != 0 )
        *(_DWORD *)(this + 312) |= 0x800u;
      v8 = (*(_DWORD *)(this + 1180))-- == 1;
      if ( v8 )
        _InterlockedExchange((volatile __int32 *)v2, 0);
    }
  }
}
