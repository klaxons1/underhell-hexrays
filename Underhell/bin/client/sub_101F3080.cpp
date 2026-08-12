int __thiscall sub_101F3080(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edi
  _BYTE *v8; // ebx
  _BYTE *v9; // ebp
  int v10; // esi
  int v11; // edx
  int *v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  bool v16; // cc
  _BYTE *v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  _BYTE *v21; // [esp+28h] [ebp+8h]

  result = 0;
  v5 = 12 * a3;
  v18 = 0;
  v19 = 12 * a3;
  do
  {
    v6 = *(_DWORD *)(a4 + 4 * result);
    v7 = (_DWORD *)(v5 + this[2]);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v8 = (_BYTE *)(a2 + 2 * (v6 & 3));
    v9 = (_BYTE *)(a2 + 2 * (((_BYTE)v6 + 1) & 3));
    v10 = 0;
    v21 = (_BYTE *)(a2 + 2 * (((_BYTE)v6 - 2) & 3));
    v17 = (_BYTE *)(a2 + 2 * (((_BYTE)v6 - 1) & 3));
    do
    {
      v11 = *v8 & 1;
      v12 = &v7[v10 % 3];
      *v12 = v11 | (2 * *v12);
      *(_WORD *)v8 = (*(_WORD *)v8 >> 1) | (~(_WORD)v11 << 15);
      v13 = *v9 & 1;
      *v12 = v13 | (2 * *v12);
      *(_WORD *)v9 = (*(_WORD *)v9 >> 1) | (~(_WORD)v13 << 15);
      v14 = *v21 & 1;
      *v12 = v14 | (2 * *v12);
      *(_WORD *)v21 = (*(_WORD *)v21 >> 1) | (~(_WORD)v14 << 15);
      v15 = *v17 & 1;
      *v12 = v15 | (2 * *v12);
      ++v10;
      *(_WORD *)v17 = (*(_WORD *)v17 >> 1) | (~(_WORD)v15 << 15);
    }
    while ( v10 < 15 );
    result = v18 + 1;
    v5 = v19 + 12;
    v16 = ++v18 < 8;
    v19 += 12;
  }
  while ( v16 );
  return result;
}
