void __cdecl sub_102628B0(int a1, int a2, int a3)
{
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _BYTE v5[48]; // [esp+4h] [ebp-C0h] BYREF
  _BYTE v6[48]; // [esp+34h] [ebp-90h] BYREF
  _BYTE v7[48]; // [esp+64h] [ebp-60h] BYREF
  _BYTE v8[48]; // [esp+94h] [ebp-30h] BYREF

  if ( a1 )
  {
    sub_104227F0(a3);
    sub_10421D00(a2, 3, v7);
    v3 = *(_DWORD *)(a1 + 300);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(a1 + 300) & 0xFFF) + 1] )
    {
      v4 = sub_100D8E80(a1, v8);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v4 = (_DWORD *)(a1 + 500);
    }
    qmemcpy(v8, v4, sizeof(v8));
    sub_10424F80(v8, v5);
    sub_10421E30(v5, v7, v6);
    sub_10421CE0(v6, 3, a2);
    sub_10421A90(v6, a3);
  }
}
