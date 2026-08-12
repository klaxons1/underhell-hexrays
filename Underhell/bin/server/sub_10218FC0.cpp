__int16 __thiscall sub_10218FC0(int this, int a2, char a3)
{
  int v3; // edi
  int v4; // ebx
  unsigned __int16 *v5; // esi
  unsigned __int16 v6; // ax
  int v7; // edi
  int *v8; // eax
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // ecx
  unsigned __int16 v12; // si
  int v13; // ebx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int *v16; // esi
  unsigned __int16 v17; // ax
  int v18; // edi
  int v19; // ecx
  int v20; // edx
  int *v21; // esi
  int v24; // [esp+24h] [ebp+Ch]

  v3 = this;
  if ( a3 )
  {
    if ( a2 )
      v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      v4 = -1;
    v5 = (unsigned __int16 *)(v3 + 40);
    v6 = sub_10147EA0((int *)(v3 + 40), 0);
    v7 = v6;
    sub_100D09C0(v5, 0xFFFFu, v6);
    v8 = (int *)(*(_DWORD *)v5 + 8 * v7);
    if ( v8 )
      *v8 = v4;
    LOWORD(v9) = this;
    if ( *(unsigned __int16 *)(this + 58) > *(int *)(dword_106C2C0C + 48) )
    {
      v10 = *(unsigned __int16 *)(this + 52);
      v9 = *(_DWORD *)(*(_DWORD *)v5 + 8 * v10);
      if ( v9 != -1 )
      {
        v9 >>= 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v5 + 8 * v10) & 0xFFF) + 2] == v9 )
        {
          v11 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)v5 + 8 * v10) & 0xFFF) + 1];
          if ( v11 )
          {
            sub_100E31F0(v11, 0.0, 1);
            sub_10399E70(v10);
            LOWORD(v9) = v5[8];
            *(_WORD *)(8 * v10 + *(_DWORD *)v5 + 6) = v9;
            v5[8] = v10;
          }
        }
      }
    }
  }
  else
  {
    v12 = *(_WORD *)(this + 24);
    if ( v12 != 0xFFFF )
    {
      v13 = *(_DWORD *)(this + 12);
      while ( 1 )
      {
        v14 = *(_DWORD *)(v13 + 8 * v12);
        if ( v14 == -1 || (v3 = this, off_1061BE18[4 * (*(_DWORD *)(v13 + 8 * v12) & 0xFFF) + 2] != v14 >> 12) )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*(_DWORD *)(v13 + 8 * v12) & 0xFFF) + 1];
        if ( v15 == a2 )
          break;
        v12 = *(_WORD *)(v13 + 8 * v12 + 6);
        if ( v12 == 0xFFFF )
          goto LABEL_22;
      }
      sub_10399E70(v12);
      *(_WORD *)(*(_DWORD *)(v3 + 12) + 8 * v12 + 6) = *(_WORD *)(v3 + 28);
      *(_WORD *)(v3 + 28) = v12;
    }
LABEL_22:
    if ( a2 )
      v24 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      v24 = -1;
    v16 = (unsigned int *)(v3 + 12);
    v17 = sub_10147EA0((int *)(v3 + 12), 0);
    v18 = v17;
    sub_10399E70(v17);
    v9 = *v16;
    v19 = 8 * v18;
    *(_WORD *)(v9 + v19 + 6) = -1;
    v20 = *((unsigned __int16 *)v16 + 7);
    *(_WORD *)(v9 + v19 + 4) = v20;
    LOWORD(v9) = -1;
    *((_WORD *)v16 + 7) = v18;
    if ( (_WORD)v20 == 0xFFFF )
    {
      *((_WORD *)v16 + 6) = v18;
    }
    else
    {
      v9 = *v16;
      *(_WORD *)(*v16 + 8 * v20 + 6) = v18;
    }
    ++*((_WORD *)v16 + 9);
    v21 = (int *)(v19 + *v16);
    if ( v21 )
      *v21 = v24;
  }
  return v9;
}
