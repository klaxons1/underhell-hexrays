int __thiscall sub_10266930(_DWORD *this, int a2)
{
  unsigned __int8 v3; // cl
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // edi
  char v8; // cl
  int (__cdecl *v9)(int, _DWORD **, _DWORD **); // esi
  int result; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // ecx
  bool v17; // zf
  int v18; // ebp
  int *v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned __int8 (__cdecl *v24)(int, int); // ecx
  int v25; // esi
  int v26; // ebp
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // [esp+Ch] [ebp-18h]
  unsigned __int8 (__cdecl *v30)(int, int); // [esp+10h] [ebp-14h] BYREF
  _DWORD *v31; // [esp+14h] [ebp-10h]
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h] BYREF
  int v34; // [esp+20h] [ebp-4h]

  v3 = *(_BYTE *)(a2 + this[65]);
  v4 = this[63];
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_4:
    v29 = -1;
  }
  else
  {
    while ( *(_BYTE *)(this[60] + v5) != v3 )
    {
      if ( ++v5 >= v4 )
        goto LABEL_4;
    }
    v29 = v5;
  }
  v6 = this[54] + 72 * v3;
  v7 = v6 + 28;
  sub_102651D0((_DWORD *)(v6 + 28));
  v8 = *(_BYTE *)(v6 + 24);
  v9 = *(int (__cdecl **)(int, _DWORD **, _DWORD **))(v6 + 20);
  dword_10480434 = (int)this;
  byte_1048043C = v8;
  if ( !v9 )
    v9 = sub_102613F0;
  result = this[75];
  dword_10480440 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))v9;
  byte_103FD4BC = 1;
  for ( dword_10480444 = 0; result != -1; result = *(_DWORD *)(v32 + this[72] + 8) )
  {
    v11 = this[72];
    v12 = 12 * result;
    v13 = *(_DWORD *)(v12 + v11);
    v32 = v12;
    v33 = v13;
    v14 = this[63];
    v34 = 0;
    v15 = *(_DWORD **)(v11 + v12);
    v16 = v14 - 1;
    v17 = v15[10] == v16;
    v31 = v15;
    if ( v17 && v29 == v16 )
    {
      v18 = v15[10];
      v19 = v15 + 7;
      v20 = v15[8];
      if ( v18 + 1 > v20 )
        sub_1010AFF0(v19, v18 - v20 + 1);
      ++v19[3];
      v21 = *v19;
      v22 = v19[3] - v18 - 1;
      v17 = v19[3] - v18 == 1;
      v19[4] = *v19;
      if ( v22 >= 0 && !v17 )
        memcpy((void *)(v21 + 4 * v18 + 4), (const void *)(v21 + 4 * v18), 4 * v22);
    }
    sub_10263A30((unsigned __int8 (__cdecl **)(int, int))v7, (int)&v33, &v30, &a2);
    v23 = sub_10263B90((_DWORD *)v7);
    v24 = v30;
    v25 = v23;
    v26 = 24 * v23;
    v27 = (_DWORD *)(24 * v23 + *(_DWORD *)(v7 + 4));
    v17 = (unsigned __int8 (__cdecl *)(int, int))((char *)v30 + 1) == 0;
    v27[2] = v30;
    v27[1] = -1;
    *v27 = -1;
    v27[3] = 0;
    if ( v17 )
    {
      *(_DWORD *)(v7 + 16) = v25;
    }
    else if ( (_BYTE)a2 )
    {
      *(_DWORD *)(*(_DWORD *)(v7 + 4) + 24 * (_DWORD)v24) = v25;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(v7 + 4) + 24 * (_DWORD)v24 + 4) = v25;
    }
    sub_10263FA0((_DWORD *)v7, v25);
    v28 = *(_DWORD *)(v7 + 4);
    ++*(_DWORD *)(v7 + 20);
    if ( v28 + v26 != -16 )
    {
      *(_DWORD *)(v28 + v26 + 16) = v33;
      *(_DWORD *)(v28 + v26 + 20) = v34;
    }
    *(_DWORD *)(v31[7] + 4 * v29) = v25;
  }
  return result;
}
