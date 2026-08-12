bool __thiscall sub_10038CB0(int this, int a2, float a3, float a4, _DWORD *a5)
{
  double v5; // st7
  int v6; // esi
  int v7; // edi
  int v8; // eax
  double v9; // st5
  int v10; // ebx
  double v11; // st6
  int v13; // edi
  int v14; // eax
  double v15; // st5
  double v16; // st5
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  unsigned int v28; // edi
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // [esp+0h] [ebp-4h]
  int v35; // [esp+10h] [ebp+Ch]
  unsigned int v36; // [esp+14h] [ebp+10h]

  v5 = a3 - a4;
  *(float *)(a2 + 16) = 0.0;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a2 + 12) = -1;
  *(_DWORD *)(a2 + 8) = -1;
  *(_DWORD *)(a2 + 4) = -1;
  v6 = 0;
  if ( !*(_WORD *)(this + 16) )
  {
LABEL_55:
    v32 = *(_DWORD *)(a2 + 12);
    if ( v32 == -1 )
    {
      v33 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 12) = v33;
      return v33 != -1;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = v32;
      return 1;
    }
  }
  while ( 1 )
  {
    *(_DWORD *)(a2 + 8) = v6;
    v7 = *(unsigned __int16 *)(this + 12);
    v8 = v6 + *(unsigned __int16 *)(this + 14);
    if ( v8 >= v7 )
      v8 -= v7;
    v9 = *(float *)(*(_DWORD *)(this + 8) + 16 * v8);
    if ( 0.0 == v9 )
      goto LABEL_55;
    if ( v9 <= v5 )
      break;
    *(_DWORD *)(a2 + 12) = v6++;
    if ( v6 >= *(unsigned __int16 *)(this + 16) )
      goto LABEL_55;
  }
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(float *)(*(_DWORD *)(this + 8) + 16 * v8);
  if ( v10 != -1 )
  {
    v13 = *(unsigned __int16 *)(this + 12);
    v14 = v10 + *(unsigned __int16 *)(this + 14);
    if ( v14 >= v13 )
      v14 -= v13;
    v15 = *(float *)(16 * v14 + *(_DWORD *)(this + 8)) - v9;
    if ( v15 > 0.000099999997 )
    {
      v16 = (v5 - v11) / v15;
      *(float *)(a2 + 16) = v16;
      if ( v16 >= 2.0 )
        v16 = 2.0;
      *(float *)(a2 + 16) = v16;
      v17 = v6 + 1;
      if ( (*(_BYTE *)(this + 28) & 0x10) == 0 && v17 >= 0 && v17 < *(unsigned __int16 *)(this + 16) )
      {
        *(_DWORD *)(a2 + 4) = v17;
        v18 = v17 + *(unsigned __int16 *)(this + 14);
        v19 = *(unsigned __int16 *)(this + 12);
        if ( v18 >= v19 )
          v18 -= v19;
        if ( v11 - *(float *)(16 * v18 + *(_DWORD *)(this + 8)) > 0.000099999997 )
          *(_BYTE *)a2 = 1;
      }
      if ( a5 && v10 == (*(_WORD *)(this + 16) != 0) - 1 )
      {
        v20 = *(unsigned __int16 *)(this + 14);
        v36 = 12 * *(unsigned __int8 *)(this + 29);
        v21 = v36;
        v22 = v20 + v6;
        v23 = *(unsigned __int16 *)(this + 12);
        if ( v22 >= v23 )
          v22 -= v23;
        v35 = *(_DWORD *)(this + 8);
        v24 = v35 + 16 * v22 + 4;
        v25 = v20 + *(_DWORD *)(a2 + 12);
        v34 = v25;
        if ( v25 >= v23 )
          v25 -= v23;
        v26 = v35 + 16 * v25 + 4;
        if ( v36 >= 4 )
        {
          while ( *(_DWORD *)v26 == *(_DWORD *)v24 )
          {
            v21 -= 4;
            v24 += 4;
            v26 += 4;
            if ( v21 < 4 )
              goto LABEL_33;
          }
          return 1;
        }
LABEL_33:
        if ( !v21
          || *(_BYTE *)v24 == *(_BYTE *)v26
          && (v21 <= 1
           || *(_BYTE *)(v24 + 1) == *(_BYTE *)(v26 + 1) && (v21 <= 2 || *(_BYTE *)(v24 + 2) == *(_BYTE *)(v26 + 2))) )
        {
          if ( !*(_BYTE *)a2 )
            goto LABEL_53;
          v27 = v20 + *(_DWORD *)(a2 + 4);
          v28 = v36;
          if ( v27 >= v23 )
            v27 -= v23;
          v29 = v34;
          v30 = v35 + 16 * v27 + 4;
          if ( v34 >= v23 )
            v29 = v34 - v23;
          v31 = v35 + 16 * v29 + 4;
          if ( v36 >= 4 )
          {
            while ( *(_DWORD *)v31 == *(_DWORD *)v30 )
            {
              v28 -= 4;
              v30 += 4;
              v31 += 4;
              if ( v28 < 4 )
                goto LABEL_47;
            }
            return 1;
          }
LABEL_47:
          if ( !v28
            || *(_BYTE *)v30 == *(_BYTE *)v31
            && (v28 <= 1
             || *(_BYTE *)(v30 + 1) == *(_BYTE *)(v31 + 1) && (v28 <= 2 || *(_BYTE *)(v30 + 2) == *(_BYTE *)(v31 + 2))) )
          {
LABEL_53:
            *a5 = 1;
            return 1;
          }
        }
      }
    }
    return 1;
  }
  *(_DWORD *)(a2 + 12) = v6;
  if ( a5 )
    *a5 = 1;
  return 1;
}
