int __cdecl sub_1009AF50(
        int a1,
        int ArgList,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  int v21; // edx
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // ecx
  int v26; // eax
  _DWORD *v27; // edx
  int v28; // eax
  int v30; // [esp+14h] [ebp+8h]
  int v31; // [esp+1Ch] [ebp+10h]

  v21 = a21;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)a1 = ArgList;
  *(_DWORD *)(a1 + 36) = v21;
  *(_DWORD *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 4) = 5;
  v23 = sub_100DDA40((60 * (unsigned __int64)(unsigned int)a5) >> 32 != 0 ? -1 : 60 * a5);
  if ( v23 )
  {
    v24 = a5 - 1;
    if ( a5 - 1 >= 0 )
    {
      v25 = (_DWORD *)(v23 + 44);
      do
      {
        *(v25 - 6) = 0;
        *(v25 - 11) = 0;
        *v25 = 0;
        *(v25 - 10) = 0;
        *(v25 - 9) = 0;
        *(v25 - 3) = 0;
        *(v25 - 2) = 0;
        *(v25 - 1) = 0;
        v25[2] = 1;
        v25[1] = -1;
        *(v25 - 5) = 0;
        *(v25 - 4) = 0;
        *((_BYTE *)v25 - 28) = 0;
        v25 += 15;
        --v24;
      }
      while ( v24 >= 0 );
    }
    v30 = v23;
  }
  else
  {
    v30 = 0;
  }
  a21 = sub_1009B090("%s", ArgList);
  v26 = 0;
  if ( a5 > 0 )
  {
    v27 = (_DWORD *)v30;
    v31 = 0;
    do
    {
      qmemcpy(v27, &a6, 0x3Cu);
      v27[11] = v31;
      *v27 = off_103DDD30[v26];
      v27[14] = a21;
      ++v26;
      v27 += 15;
      v31 += a4;
    }
    while ( v26 < a5 );
  }
  v28 = sub_100DDA40(20);
  if ( v28 )
  {
    *(_DWORD *)v28 = v30;
    *(_DWORD *)(v28 + 8) = 0;
    *(_DWORD *)(a1 + 40) = v28;
    *(_DWORD *)(v28 + 4) = a5;
    *(_DWORD *)(v28 + 12) = ArgList;
    *(_WORD *)(v28 + 16) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
  }
  return a1;
}
