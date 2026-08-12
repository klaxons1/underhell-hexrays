void *__thiscall sub_1002C9D0(int this, float a2, void *Src, char a4)
{
  int v5; // eax
  int v6; // ecx
  __int16 v7; // dx
  int v8; // ecx
  int v9; // eax
  int *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  float *v25; // eax
  size_t v27; // [esp-10h] [ebp-18h]
  int v28; // [esp+0h] [ebp-8h]
  int v29; // [esp+4h] [ebp-4h]
  int v30; // [esp+18h] [ebp+10h]

  if ( a4 )
  {
    while ( *(_WORD *)(this + 16) )
    {
      v5 = *(unsigned __int16 *)(this + 14);
      v6 = *(unsigned __int16 *)(this + 12);
      if ( v5 >= v6 )
        v5 -= v6;
      if ( *(float *)(*(_DWORD *)(this + 8) + 8 * v5) + 0.000099999997 <= a2 )
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
    v10 = (int *)(this + 8);
    sub_10027790((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v11 = *(unsigned __int16 *)(this + 12);
    v12 = *(unsigned __int16 *)(this + 14);
    ++*(_WORD *)(this + 16);
    v13 = v12 + v11 - 1;
    if ( v13 >= v11 )
      LOWORD(v13) = v13 - v11;
    *(_WORD *)(this + 14) = v13;
    v30 = 0;
  }
  else
  {
    v10 = (int *)(this + 8);
    sub_10027790((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v14 = *(unsigned __int16 *)(this + 12);
    v15 = *(unsigned __int16 *)(this + 14);
    ++*(_WORD *)(this + 16);
    v16 = v15 + v14 - 1;
    if ( v16 >= v14 )
      LOWORD(v16) = v16 - v14;
    *(_WORD *)(this + 14) = v16;
    v17 = 1;
    v30 = 0;
    v28 = 1;
    if ( *(_WORD *)(this + 16) > 1u )
    {
      do
      {
        v18 = *(unsigned __int16 *)(this + 12);
        v19 = v17 + *(unsigned __int16 *)(this + 14);
        v20 = v19;
        if ( v19 >= v18 )
          v20 = v19 - v18;
        v21 = *v10;
        if ( a2 >= (double)*(float *)(*v10 + 8 * v20) )
          break;
        v29 = v19;
        if ( v19 >= v18 )
          v29 = v19 - v18;
        v22 = v30 + *(unsigned __int16 *)(this + 14);
        if ( v22 >= v18 )
          v22 -= v18;
        *(_DWORD *)(v21 + 8 * v22) = *(_DWORD *)(v21 + 8 * v29);
        *(_DWORD *)(v21 + 8 * v22 + 4) = *(_DWORD *)(v21 + 8 * v29 + 4);
        v30 = v28;
        v17 = v28 + 1;
        v28 = v17;
      }
      while ( v17 < *(unsigned __int16 *)(this + 16) );
    }
  }
  v23 = *((unsigned __int16 *)v10 + 2);
  v24 = v30 + *((unsigned __int16 *)v10 + 3);
  if ( v24 >= v23 )
    v24 -= v23;
  v25 = (float *)(*v10 + 8 * v24);
  v27 = 4 * *(unsigned __int8 *)(this + 29);
  *v25 = a2;
  return memcpy_0(v25 + 1, Src, v27);
}
