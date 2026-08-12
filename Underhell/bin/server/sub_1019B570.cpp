void __thiscall sub_1019B570(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // ebx
  int v12; // edx
  _DWORD *v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  int v23; // [esp+Ch] [ebp-2Ch] BYREF
  int v24; // [esp+10h] [ebp-28h]
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch]
  int v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h]
  int v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  _DWORD *v32; // [esp+30h] [ebp-8h]
  _DWORD *v33; // [esp+34h] [ebp-4h]

  v1 = dword_10632630;
  v2 = -1;
  v3 = 0;
  v4 = this;
  v33 = this;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v30 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = 0;
  v31 = 0;
  if ( dword_10632630 != -1 )
  {
    v5 = dword_10632624;
    do
    {
      v6 = 12 * v1;
      v32 = (_DWORD *)(12 * v1 + v5);
      v7 = sub_1018CED0(&v23, 0);
      v3 = v23;
      if ( v7 < 0 || v7 >= v24 || v7 > v30 || (v8 = v23 + 12 * v7, *(_DWORD *)(v8 + 4) == v7) )
      {
        v12 = v27;
      }
      else
      {
        v9 = *(_DWORD *)(v8 + 4);
        if ( v9 == -1 )
          v26 = *(_DWORD *)(v8 + 8);
        else
          *(_DWORD *)(v23 + 12 * v9 + 8) = *(_DWORD *)(v8 + 8);
        v10 = *(_DWORD *)(v8 + 8);
        if ( v10 == -1 )
        {
          v12 = *(_DWORD *)(v8 + 4);
          --v29;
        }
        else
        {
          v11 = *(_DWORD *)(v8 + 4);
          --v29;
          *(_DWORD *)(v3 + 12 * v10 + 4) = v11;
          v12 = v27;
        }
        v4 = v33;
        *(_DWORD *)(v8 + 8) = v7;
        *(_DWORD *)(v8 + 4) = v7;
      }
      v13 = (_DWORD *)(v3 + 12 * v7);
      v13[2] = -1;
      v13[1] = v12;
      v27 = v7;
      if ( v12 == -1 )
        v26 = v7;
      else
        *(_DWORD *)(v3 + 12 * v12 + 8) = v7;
      ++v29;
      if ( v13 )
        *v13 = *v32;
      v5 = dword_10632624;
      v1 = *(_DWORD *)(v6 + dword_10632624 + 8);
    }
    while ( v1 != -1 );
    v2 = v26;
  }
  sub_1018EC70(&dword_10632624);
  v14 = v2;
  if ( v2 != -1 )
  {
    do
    {
      v15 = (_DWORD *)(v3 + 12 * v14);
      v32 = v15;
      v16 = sub_1018CED0(&dword_10632624, 0);
      if ( v16 >= 0 && v16 < dword_10632628 && v16 <= dword_10632640 )
      {
        v17 = dword_10632624 + 12 * v16;
        if ( *(_DWORD *)(v17 + 4) != v16 )
        {
          v18 = *(_DWORD *)(v17 + 4);
          if ( v18 == -1 )
            dword_10632630 = *(_DWORD *)(v17 + 8);
          else
            *(_DWORD *)(dword_10632624 + 12 * v18 + 8) = *(_DWORD *)(v17 + 8);
          v19 = *(_DWORD *)(v17 + 8);
          if ( v19 == -1 )
            dword_10632634 = *(_DWORD *)(v17 + 4);
          else
            *(_DWORD *)(dword_10632624 + 12 * v19 + 4) = *(_DWORD *)(v17 + 4);
          v15 = v32;
          *(_DWORD *)(v17 + 8) = v16;
          *(_DWORD *)(v17 + 4) = v16;
          --dword_1063263C;
        }
      }
      v20 = dword_10632624;
      v21 = 12 * v16;
      *(_DWORD *)(dword_10632624 + v21 + 8) = -1;
      v22 = dword_10632634;
      *(_DWORD *)(v20 + v21 + 4) = dword_10632634;
      dword_10632634 = v16;
      if ( v22 == -1 )
        dword_10632630 = v16;
      else
        *(_DWORD *)(dword_10632624 + 12 * v22 + 8) = v16;
      ++dword_1063263C;
      if ( v21 + dword_10632624 )
        *(_DWORD *)(v21 + dword_10632624) = *v15;
      v14 = v15[2];
    }
    while ( v14 != -1 );
    v4 = v33;
  }
  sub_1019EF70(v4);
  v4[309] = 2;
  flt_106B82B4 = 0.0;
  v4[311] = dword_10632630;
  v4[310] = 3;
  sub_1018EC70(&v23);
  if ( v25 >= 0 )
  {
    if ( v23 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v23);
  }
}
