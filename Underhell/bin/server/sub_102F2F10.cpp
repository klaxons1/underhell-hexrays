int __userpurge sub_102F2F10@<eax>(unsigned int a1@<ecx>, int a2@<edi>, int a3)
{
  double v4; // st7
  int v5; // edi
  int v6; // ecx
  int v8[11]; // [esp+8h] [ebp-50h] BYREF
  unsigned int v9; // [esp+34h] [ebp-24h]
  float v10; // [esp+3Ch] [ebp-1Ch]

  sub_1001E4E0(v8, a3);
  if ( v10 > 20.0 )
    v10 = 20.0;
  *(float *)(a1 + 2824) = *(float *)(dword_106B31C8 + 12);
  v4 = *(float *)(a1 + 2728);
  v5 = sub_100C7DC0((_DWORD *)a1, a2, v8);
  if ( *(float *)(dword_106B31C8 + 12) != v4 )
  {
    if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
    sub_1017CC00(a1 + 3620, *(_DWORD *)(a1 + 220), __SPAIR64__(a1, v6));
  }
  return v5;
}
