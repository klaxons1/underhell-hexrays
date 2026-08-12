int __thiscall sub_10220670(_DWORD *this, _DWORD *a2, int a3, int a4)
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
  int v14; // eax
  unsigned int v16; // eax
  int *v17; // ecx
  int v18; // ecx
  _BYTE v19[4096]; // [esp+Ch] [ebp-1008h] BYREF
  _BYTE *v20; // [esp+100Ch] [ebp-8h]
  int v21; // [esp+1010h] [ebp-4h]
  int v22; // [esp+1024h] [ebp+10h]

  v4 = a3;
  v6 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int))(*this + 60))(this, v19, a3, a4);
  v21 = v6;
  if ( v6 > 0 )
  {
    v7 = a2;
    v8 = (_BYTE *)(v19 - (_BYTE *)a2);
    v20 = (_BYTE *)(v19 - (_BYTE *)a2);
    v22 = v6;
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
      v16 = v13[4];
      if ( v16 != -1 && (v17 = &off_1061BE18[4 * (v13[4] & 0xFFF) + 1], v17[1] == v16 >> 12) && (v18 = *v17) != 0 )
        v14 = *(_DWORD *)(v18 + 24);
      else
LABEL_10:
        v14 = 0;
      *v7++ = v14;
      if ( !--v22 )
        break;
      v8 = v20;
    }
    v6 = v21;
    v4 = a3;
  }
  if ( v6 < v4 )
    memset(&a2[v6], 0, 4 * (v4 - v6));
  return v6;
}
