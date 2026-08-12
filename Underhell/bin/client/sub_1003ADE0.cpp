void *__thiscall sub_1003ADE0(int this, float a2, void *Src, char a4)
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
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  double v25; // st7
  float *v26; // ecx
  float *v27; // eax
  int v28; // ecx
  int v29; // eax
  float *v30; // eax
  size_t v32; // [esp-10h] [ebp-10h]
  int v33; // [esp+10h] [ebp+10h]

  if ( a4 )
  {
    while ( *(_WORD *)(this + 16) )
    {
      v5 = *(unsigned __int16 *)(this + 14);
      v6 = *(unsigned __int16 *)(this + 12);
      if ( v5 >= v6 )
        v5 -= v6;
      if ( *(float *)(*(_DWORD *)(this + 8) + 16 * v5) + 0.000099999997 <= a2 )
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
    sub_10038BE0((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v11 = *(unsigned __int16 *)(this + 12);
    v12 = *(unsigned __int16 *)(this + 14);
    ++*(_WORD *)(this + 16);
    v13 = v12 + v11 - 1;
    if ( v13 >= v11 )
      LOWORD(v13) = v13 - v11;
    *(_WORD *)(this + 14) = v13;
    v33 = 0;
  }
  else
  {
    v10 = this + 8;
    sub_10038BE0((unsigned __int16 *)(this + 8), *(unsigned __int16 *)(this + 16) + 1);
    v14 = *(unsigned __int16 *)(this + 12);
    v15 = *(unsigned __int16 *)(this + 14);
    ++*(_WORD *)(this + 16);
    v16 = v15 + v14 - 1;
    if ( v16 >= v14 )
      LOWORD(v16) = v16 - v14;
    v17 = 1;
    *(_WORD *)(this + 14) = v16;
    v33 = 0;
    if ( *(_WORD *)(this + 16) > 1u )
    {
      do
      {
        v18 = *(unsigned __int16 *)(this + 12);
        v19 = v17 + *(unsigned __int16 *)(this + 14);
        if ( v19 >= v18 )
          v19 -= v18;
        if ( a2 >= (double)*(float *)(*(_DWORD *)v10 + 16 * v19) )
          break;
        v20 = *(unsigned __int16 *)(this + 14);
        v21 = v20 + v17;
        if ( v20 + v17 >= v18 )
          v21 -= v18;
        v22 = *(unsigned __int16 *)(this + 12);
        v23 = v33 + v20;
        if ( v23 >= v22 )
          v23 -= v22;
        v24 = 16 * v21;
        v25 = *(float *)(v24 + *(_DWORD *)v10);
        v26 = (float *)(*(_DWORD *)v10 + v24);
        v27 = (float *)(*(_DWORD *)v10 + 16 * v23);
        *v27 = v25;
        v33 = v17++;
        v27[1] = v26[1];
        v27[2] = v26[2];
        v27[3] = v26[3];
      }
      while ( v17 < *(unsigned __int16 *)(this + 16) );
    }
  }
  v28 = *(unsigned __int16 *)(v10 + 4);
  v29 = v33 + *(unsigned __int16 *)(v10 + 6);
  if ( v29 >= v28 )
    v29 -= v28;
  v30 = (float *)(*(_DWORD *)v10 + 16 * v29);
  v32 = 12 * *(unsigned __int8 *)(this + 29);
  *v30 = a2;
  return memcpy_0(v30 + 1, Src, v32);
}
