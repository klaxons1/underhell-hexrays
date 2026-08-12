int __cdecl _setmbcp(int CodePage)
{
  DWORD *v1; // edi
  DWORD v2; // ebx
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int i; // eax
  int j; // eax
  int k; // eax
  int v10; // [esp+14h] [ebp-20h]
  UINT CodePagea; // [esp+3Ch] [ebp+8h]

  v10 = -1;
  v1 = _getptd();
  __updatetmbcinfo();
  v2 = v1[26];
  CodePagea = getSystemCP(CodePage);
  if ( CodePagea == *(_DWORD *)(v2 + 4) )
    return 0;
  v3 = (_DWORD *)sub_10184390(544);
  v4 = (int)v3;
  if ( v3 )
  {
    qmemcpy(v3, (const void *)v1[26], 0x220u);
    *v3 = 0;
    v5 = _setmbcp_nolock(CodePagea, v3);
    v10 = v5;
    if ( v5 )
    {
      if ( v5 == -1 )
      {
        if ( (_UNKNOWN *)v4 != &unk_1068EA68 )
          sub_10184660(v4);
        *_errno() = 22;
      }
    }
    else
    {
      if ( !InterlockedDecrement((volatile LONG *)v1[26]) && (_UNKNOWN *)v1[26] != &unk_1068EA68 )
        sub_10184660(v1[26]);
      v1[26] = v4;
      InterlockedIncrement((volatile LONG *)v4);
      if ( (v1[28] & 2) == 0 && (dword_1068EF88 & 1) == 0 )
      {
        _lock(13);
        dword_107011BC = *(_DWORD *)(v4 + 4);
        dword_107011C0 = *(_DWORD *)(v4 + 8);
        dword_107011C4 = *(_DWORD *)(v4 + 12);
        for ( i = 0; i < 5; ++i )
          word_107011B0[i] = *(_WORD *)(v4 + 2 * i + 16);
        for ( j = 0; j < 257; ++j )
          byte_1068EC88[j] = *(_BYTE *)(j + v4 + 28);
        for ( k = 0; k < 256; ++k )
          byte_1068ED90[k] = *(_BYTE *)(k + v4 + 285);
        if ( !InterlockedDecrement(lpAddend) && lpAddend != (volatile LONG *)&unk_1068EA68 )
          sub_10184660((int)lpAddend);
        lpAddend = (volatile LONG *)v4;
        InterlockedIncrement((volatile LONG *)v4);
        _unlock(13);
      }
    }
  }
  return v10;
}
