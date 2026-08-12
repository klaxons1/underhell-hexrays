void *__thiscall sub_1010FF20(int this, float a2, void *Src, char a4)
{
  int v5; // eax
  int v6; // ecx
  __int16 v7; // dx
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // edi
  void *result; // eax
  int v30; // esi
  void *v31; // esi
  int v32; // [esp+0h] [ebp-4h]
  int v33; // [esp+14h] [ebp+10h]

  if ( a4 )
  {
    while ( *(_WORD *)(this + 16) )
    {
      v5 = *(unsigned __int16 *)(this + 14);
      v6 = *(unsigned __int16 *)(this + 12);
      if ( v5 >= v6 )
        v5 -= v6;
      if ( *(float *)(*(_DWORD *)(this + 8) + 12 * v5) + 0.000099999997 <= a2 )
        break;
      v7 = *(_WORD *)(this + 16);
      if ( v7 )
      {
        v8 = *(unsigned __int16 *)(this + 12);
        v9 = *(unsigned __int16 *)(this + 14) + 1;
        if ( v9 >= v8 )
          LOWORD(v9) = v9 - v8;
        *(_WORD *)(this + 14) = v9;
        *(_WORD *)(this + 16) = v7 - 1;
      }
    }
    v10 = this + 8;
    sub_10027660((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v11 = *(unsigned __int16 *)(this + 12);
    v12 = *(unsigned __int16 *)(this + 14);
    ++*(_WORD *)(this + 16);
    v13 = v12 + v11 - 1;
    if ( v13 >= v11 )
      LOWORD(v13) = v13 - v11;
    *(_WORD *)(this + 14) = v13;
    v14 = 0;
  }
  else
  {
    v10 = this + 8;
    sub_10027660((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v15 = *(unsigned __int16 *)(this + 12);
    v16 = *(unsigned __int16 *)(this + 14);
    v17 = 1;
    ++*(_WORD *)(this + 16);
    v18 = v16 + v15 - 1;
    if ( v18 >= v15 )
      LOWORD(v18) = v18 - v15;
    *(_WORD *)(this + 14) = v18;
    v14 = 0;
    v33 = 0;
    if ( *(_WORD *)(this + 16) > 1u )
    {
      while ( 1 )
      {
        v19 = *(unsigned __int16 *)(this + 12);
        v20 = v17 + *(unsigned __int16 *)(this + 14);
        v32 = v20;
        if ( v20 >= v19 )
          v20 -= v19;
        if ( a2 >= (double)*(float *)(*(_DWORD *)v10 + 12 * v20) )
          break;
        v21 = v32;
        if ( v32 >= v19 )
          v21 = v32 - v19;
        v22 = *(unsigned __int16 *)(this + 12);
        v23 = v33 + *(unsigned __int16 *)(this + 14);
        if ( v23 >= v22 )
          v23 -= v22;
        v24 = *(_DWORD *)v10 + 12 * v21;
        v25 = *(_DWORD *)v10 + 12 * v23;
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v24 + 8);
        *(_DWORD *)(v25 + 4) = *(_DWORD *)(v24 + 4);
        *(float *)v25 = *(float *)v24;
        *(_DWORD *)(v24 + 8) = 0;
        *(_DWORD *)(v24 + 4) = 0;
        v14 = v17++;
        v33 = v14;
        if ( v17 >= *(unsigned __int16 *)(this + 16) )
          goto LABEL_27;
      }
      v14 = v33;
    }
  }
LABEL_27:
  v26 = v14 + *(unsigned __int16 *)(v10 + 6);
  v27 = *(unsigned __int16 *)(v10 + 4);
  if ( v26 >= v27 )
    v26 -= v27;
  v28 = *(unsigned __int8 *)(this + 29);
  result = *(void **)v10;
  v30 = *(_DWORD *)v10 + 12 * v26;
  *(float *)v30 = a2;
  if ( v28 )
  {
    if ( v28 != *(_DWORD *)(v30 + 4) )
    {
      result = (void *)sub_10034930(*(_DWORD *)(v30 + 8));
      *(_DWORD *)(v30 + 8) = 0;
      *(_DWORD *)(v30 + 4) = 0;
    }
    if ( !*(_DWORD *)(v30 + 8) )
    {
      *(_DWORD *)(v30 + 4) = v28;
      result = (void *)sub_100DDA40((12 * (unsigned __int64)v28) >> 32 != 0 ? -1 : 12 * v28);
      *(_DWORD *)(v30 + 8) = result;
    }
  }
  else
  {
    result = (void *)sub_10034930(*(_DWORD *)(v30 + 8));
    *(_DWORD *)(v30 + 8) = 0;
    *(_DWORD *)(v30 + 4) = 0;
  }
  v31 = *(void **)(v30 + 8);
  if ( v31 )
  {
    if ( v28 )
      return memcpy_0(v31, Src, 12 * v28);
  }
  return result;
}
