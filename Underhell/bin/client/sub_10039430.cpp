int sub_10039430()
{
  int result; // eax
  int v1; // esi
  int v2; // edi
  DWORD CurrentThreadId; // eax
  int v4; // eax
  bool v5; // zf
  unsigned int v6; // eax
  int v7; // ebx
  float *v8; // eax
  float *v9; // esi
  void *v10; // eax
  int v11; // eax
  float *v12; // eax
  char v13[48]; // [esp+0h] [ebp-6Ch] BYREF
  _BYTE v14[48]; // [esp+30h] [ebp-3Ch] BYREF
  int v15; // [esp+60h] [ebp-Ch]
  float *v16; // [esp+64h] [ebp-8h]
  int i; // [esp+68h] [ebp-4h]

  result = 0;
  v15 = dword_10404D6C;
  for ( i = 0; result < v15; i = result )
  {
    v1 = *(_DWORD *)(dword_10404D60 + 4 * result);
    if ( (*(_BYTE *)(v1 + 112) & 1) == 0 || !byte_103D89C3 || (*(_DWORD *)(v1 + 312) & 0x800) == 0 )
      goto LABEL_29;
    v2 = v1 + 1176;
    CurrentThreadId = GetCurrentThreadId();
    if ( CurrentThreadId != *(_DWORD *)(v1 + 1176)
      && _InterlockedCompareExchange((volatile signed __int32 *)v2, CurrentThreadId, 0) )
    {
      _mm_pause();
      CThreadFastMutex::Lock(v1 + 1176, CurrentThreadId, 0);
    }
    else
    {
      ++*(_DWORD *)(v1 + 1180);
    }
    v4 = *(_DWORD *)(v1 + 312);
    if ( (v4 & 0x800) != 0 )
    {
      *(_DWORD *)(v1 + 312) = v4 & 0xFFFFF7FF;
      v6 = *(_DWORD *)(v1 + 324);
      if ( v6 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 324) & 0xFFF) + 2) == v6 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 324) & 0xFFF) + 1) )
      {
        if ( (*(_BYTE *)(v1 + 112) & 1) == 0 )
        {
          sub_101EE440(v1 + 604, v14);
          sub_101EDA20(v1 + 548, 3, v14);
          v10 = sub_10037EA0(v1, v13);
          sub_101EDC00(v10, v14, v1 + 660);
          sub_101EDA00(v1 + 660, 3, v1 + 500);
          if ( !sub_1000E3F0((float *)(v1 + 604), &flt_1045924C) || *(_BYTE *)(v1 + 318) )
          {
            sub_101ED7B0(v1 + 660, v1 + 512);
          }
          else
          {
            v11 = sub_1006BE10(v1 + 324);
            v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 40))(v11);
            *(float *)(v1 + 512) = *v12;
            *(float *)(v1 + 516) = v12[1];
            *(float *)(v1 + 520) = v12[2];
          }
          if ( *(_BYTE *)(v1 + 318) )
          {
            if ( (*(_BYTE *)(sub_1006BE10(v1 + 324) + 732) & 8) != 0 )
              *(_DWORD *)(v1 + 312) |= 0x800u;
          }
          v5 = (*(_DWORD *)(v1 + 1180))-- == 1;
          if ( !v5 )
            goto LABEL_29;
LABEL_28:
          _InterlockedExchange((volatile __int32 *)v2, 0);
          goto LABEL_29;
        }
        sub_10037E30((_DWORD *)v1);
        v5 = (*(_DWORD *)(v1 + 1180))-- == 1;
        if ( v5 )
          goto LABEL_28;
      }
      else
      {
        v7 = v1 + 548;
        v16 = (float *)(v1 + 604);
        sub_101F0B70(v1 + 604, v1 + 548, v1 + 660);
        v8 = v16;
        *(float *)(v1 + 500) = *(float *)(v1 + 548);
        v9 = (float *)(v1 + 512);
        *(v9 - 2) = *(float *)(v7 + 4);
        *(v9 - 1) = *(float *)(v7 + 8);
        *v9 = *v8;
        v9[1] = v8[1];
        v9[2] = v8[2];
        sub_10076970(v9);
        v5 = (*(_DWORD *)(v2 + 4))-- == 1;
        if ( v5 )
          goto LABEL_28;
      }
    }
    else
    {
      v5 = (*(_DWORD *)(v1 + 1180))-- == 1;
      if ( v5 )
        goto LABEL_28;
    }
LABEL_29:
    result = i + 1;
  }
  return result;
}
