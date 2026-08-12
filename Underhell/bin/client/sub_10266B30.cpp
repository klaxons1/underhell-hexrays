char __thiscall sub_10266B30(_DWORD *this, int a2)
{
  _DWORD *v3; // edx
  int v4; // eax
  int v5; // ecx
  int i; // ebp
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // edi
  int *v10; // esi
  int v11; // edi
  int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  int v16; // ecx
  bool v17; // cc
  int v18; // edi
  int (*v19)(void); // edx
  int v20; // esi
  char v21; // al
  int (__cdecl *v22)(int, _DWORD **, _DWORD **); // edi
  int v23; // eax
  unsigned __int8 (__cdecl *v24)(int, int); // ecx
  int v25; // edi
  int v26; // ebp
  _DWORD *v27; // eax
  int v28; // edx
  _DWORD *v29; // ebp
  _DWORD *v31; // [esp+10h] [ebp-14h]
  int v32; // [esp+14h] [ebp-10h]
  unsigned __int8 (__cdecl *v33)(int, int); // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v34; // [esp+1Ch] [ebp-8h] BYREF
  int v35; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD **)(this[72] + 12 * a2);
  v4 = this[63];
  v5 = v3[10];
  v31 = v3;
  a2 = v4;
  if ( v4 >= v5 )
    a2 = v5;
  for ( i = 0; i < a2; ++i )
  {
    v4 = this[54];
    v7 = (_DWORD *)(v4 + 72 * *(unsigned __int8 *)(this[60] + i) + 28);
    v8 = v3[7];
    v9 = *(_DWORD *)(v8 + 4 * i);
    if ( v9 != -1 )
    {
      sub_102662D0(v7, *(_DWORD *)(v8 + 4 * i));
      v4 = 24 * v9;
      *(_DWORD *)(v4 + v7[1]) = v9;
      *(_DWORD *)(v4 + v7[1] + 4) = v7[6];
      --v7[5];
      v7[6] = v9;
    }
    v3 = v31;
  }
  v10 = v3 + 7;
  v3[10] = 0;
  v11 = this[63];
  v12 = v3[10];
  if ( v11 )
  {
    v13 = v3[8];
    a2 = v11 + v12;
    if ( v11 + v12 > v13 )
      sub_1010AFF0(v3 + 7, v11 + v12 - v13);
    v10[3] += v11;
    v14 = *v10;
    v4 = v10[3] - v12 - v11;
    v15 = v10[3] - v12 == v11;
    v10[4] = *v10;
    if ( v4 >= 0 && !v15 && v11 > 0 )
      LOBYTE(v4) = (unsigned __int8)memcpy((void *)(v14 + 4 * a2), (const void *)(v14 + 4 * v12), 4 * v4);
  }
  v16 = 0;
  v17 = this[63] <= 0;
  dword_10480434 = (int)this;
  v32 = 0;
  if ( !v17 )
  {
    do
    {
      LOBYTE(v4) = *(_BYTE *)(v16 + this[60]);
      if ( (_BYTE)v4 != 0xFF )
      {
        v18 = this[54] + 72 * (unsigned __int8)v4;
        v34 = v31;
        v35 = 0;
        v19 = *(int (**)(void))(**(_DWORD **)v18 + 72);
        v20 = v18 + 28;
        dword_10480434 = (int)this;
        dword_10480438 = (char *)v19();
        v21 = *(_BYTE *)(v18 + 24);
        v22 = *(int (__cdecl **)(int, _DWORD **, _DWORD **))(v18 + 20);
        byte_1048043C = v21;
        if ( !v22 )
          v22 = sub_102613F0;
        dword_10480440 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))v22;
        byte_103FD4BC = 1;
        dword_10480444 = 0;
        sub_10263A30((unsigned __int8 (__cdecl **)(int, int))v20, (int)&v34, &v33, &a2);
        v23 = sub_10263B90((_DWORD *)v20);
        v24 = v33;
        v25 = v23;
        v26 = 24 * v23;
        v27 = (_DWORD *)(24 * v23 + *(_DWORD *)(v20 + 4));
        v15 = (unsigned __int8 (__cdecl *)(int, int))((char *)v33 + 1) == 0;
        v27[2] = v33;
        v27[1] = -1;
        *v27 = -1;
        v27[3] = 0;
        if ( v15 )
        {
          *(_DWORD *)(v20 + 16) = v25;
        }
        else if ( (_BYTE)a2 )
        {
          *(_DWORD *)(*(_DWORD *)(v20 + 4) + 24 * (_DWORD)v24) = v25;
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)(v20 + 4) + 24 * (_DWORD)v24 + 4) = v25;
        }
        sub_10263FA0((_DWORD *)v20, v25);
        v28 = *(_DWORD *)(v20 + 4);
        ++*(_DWORD *)(v20 + 20);
        v29 = (_DWORD *)(v28 + v26 + 16);
        if ( v29 )
        {
          *v29 = v34;
          v29[1] = v35;
        }
        LOBYTE(v4) = v32;
        *(_DWORD *)(v31[7] + 4 * v32) = v25;
        v16 = v32;
      }
      v32 = ++v16;
    }
    while ( v16 < this[63] );
  }
  return v4;
}
