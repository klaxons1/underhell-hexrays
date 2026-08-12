int *__stdcall sub_10077B20(int *a1, int a2)
{
  int v2; // esi
  int *result; // eax
  int v4; // eax
  _DWORD *v5; // edi
  int *v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // dl
  int v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // [esp+8h] [ebp-14h] BYREF
  _DWORD *v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch]
  int *v20; // [esp+14h] [ebp-8h]
  char v21; // [esp+1Bh] [ebp-1h] BYREF

  v2 = *a1;
  result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
  v20 = result;
  while ( v20 )
  {
    v20 = (int *)((char *)v20 - 1);
    v4 = sub_10184390(56);
    if ( v4 )
    {
      *(_DWORD *)v4 = -1;
      *(float *)(v4 + 4) = flt_106F1CA8;
      v5 = (_DWORD *)v4;
      *(float *)(v4 + 8) = flt_106F1CAC;
      *(float *)(v4 + 12) = flt_106F1CB0;
      *(float *)(v4 + 16) = flt_106F1CA8;
      *(float *)(v4 + 20) = flt_106F1CAC;
      *(float *)(v4 + 24) = flt_106F1CB0;
      *(_DWORD *)(v4 + 52) = 0;
      *(float *)(v4 + 28) = 0.0;
      *(float *)(v4 + 32) = 0.0;
      *(float *)(v4 + 36) = 0.0;
      *(float *)(v4 + 40) = 0.0;
      *(float *)(v4 + 44) = 0.0;
      *(float *)(v4 + 48) = -3.4028235e38;
    }
    else
    {
      v5 = 0;
    }
    (*(void (__thiscall **)(int, _DWORD *, int *))(*(_DWORD *)a2 + 8))(a2, v5, &dword_10607EC8);
    if ( *v5 != -1
      && (v6 = &off_1061BE18[4 * (*v5 & 0xFFF) + 1], v7 = *v5 >> 12, off_1061BE18[4 * (*v5 & 0xFFF) + 2] == v7)
      && *v6 )
    {
      if ( off_1061BE18[4 * (*v5 & 0xFFF) + 2] == v7 )
        v8 = *v6;
      else
        v8 = 0;
      v17 = v8;
      v18 = v5;
      sub_10075A60((_BYTE *)v2, (int)&v17, (unsigned __int8 *)&a1 + 3, &v21);
      v9 = sub_10075BE0(v2);
      v10 = HIBYTE(a1);
      v11 = 12 * v9;
      v12 = v11 + *(_DWORD *)(v2 + 4);
      LOBYTE(v19) = v9;
      *(_BYTE *)(v12 + 2) = HIBYTE(a1);
      *(_WORD *)v12 = -1;
      *(_BYTE *)(v12 + 3) = 0;
      if ( v10 == 0xFF )
      {
        *(_BYTE *)(v2 + 16) = v9;
      }
      else
      {
        v13 = v10;
        v14 = *(_DWORD *)(v2 + 4);
        v15 = 3 * v13;
        if ( v21 )
          *(_BYTE *)(v14 + 4 * v15) = v9;
        else
          *(_BYTE *)(v14 + 4 * v15 + 1) = v9;
      }
      sub_10075FC0(v2, v19);
      v16 = *(_DWORD *)(v2 + 4);
      ++*(_BYTE *)(v2 + 17);
      result = (int *)(v11 + v16 + 4);
      if ( v11 + v16 != -4 )
      {
        *result = v17;
        *(_DWORD *)(v11 + v16 + 8) = v18;
      }
    }
    else
    {
      result = (int *)sub_10184660(v5);
    }
  }
  return result;
}
