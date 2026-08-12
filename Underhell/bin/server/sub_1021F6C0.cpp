int __thiscall sub_1021F6C0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // edi
  int v6; // esi
  _DWORD *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  _DWORD *v13; // ecx
  unsigned int v15; // eax
  int *v16; // ecx
  int v17; // ecx
  _BYTE v18[4096]; // [esp+Ch] [ebp-1008h] BYREF
  _BYTE *v19; // [esp+100Ch] [ebp-8h]
  int v20; // [esp+1010h] [ebp-4h]
  int v21; // [esp+1024h] [ebp+10h]

  v4 = a3;
  v6 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*this + 60))(this, v18, a3, a4);
  v20 = v6;
  if ( v6 > 0 )
  {
    v7 = a2;
    v8 = (_BYTE *)(v18 - (_BYTE *)a2);
    v19 = (_BYTE *)(v18 - (_BYTE *)a2);
    v21 = v6;
    while ( 1 )
    {
      v9 = this[7];
      v10 = *(_DWORD *)((char *)v7 + (_DWORD)v8);
      if ( !v9 )
        goto LABEL_10;
      if ( v10 < 0 )
        goto LABEL_10;
      v11 = *(_DWORD *)(v9 + 1372);
      v12 = 0;
      if ( v11 <= 0 )
        goto LABEL_10;
      v13 = *(_DWORD **)(v9 + 1376);
      while ( *v13 != v10 )
      {
        ++v12;
        v13 += 14;
        if ( v12 >= v11 )
          goto LABEL_10;
      }
      v15 = v13[4];
      if ( v15 == -1 || (v16 = &off_1061BE18[4 * (v13[4] & 0xFFF) + 1], v16[1] != v15 >> 12) )
        v17 = 0;
      else
        v17 = *v16;
      if ( v17 )
        *v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
      else
LABEL_10:
        *v7 = -1;
      ++v7;
      if ( !--v21 )
        break;
      v8 = v19;
    }
    v4 = a3;
    v6 = v20;
  }
  if ( v6 < v4 )
    memset(&a2[v6], 255, 4 * (v4 - v6));
  return v6;
}
