char __thiscall sub_100EBD40(void *this, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf
  double v5; // st7
  int v6; // esi
  void *v7; // esp
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // ebx
  _DWORD *v11; // ecx
  int v12; // ebx
  int v13; // edx
  int v14; // eax
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int i; // eax
  int v27; // ebx
  void *v28; // esp
  int v29; // ebx
  int v30; // edi
  int v31; // eax
  int j; // eax
  _DWORD v34[3]; // [esp+1Ch] [ebp-128h] BYREF
  char v35[64]; // [esp+28h] [ebp-11Ch] BYREF
  char v36[64]; // [esp+68h] [ebp-DCh] BYREF
  char v37[64]; // [esp+A8h] [ebp-9Ch] BYREF
  int v38[16]; // [esp+E8h] [ebp-5Ch] BYREF
  int v39; // [esp+128h] [ebp-1Ch] BYREF
  _DWORD *v40; // [esp+12Ch] [ebp-18h]
  float v41; // [esp+130h] [ebp-14h]
  void *v42; // [esp+134h] [ebp-10h]
  int v43; // [esp+138h] [ebp-Ch]
  float v44; // [esp+13Ch] [ebp-8h]
  void *Base; // [esp+140h] [ebp-4h]

  v42 = this;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 48))(dword_10439968);
  v4 = *(_DWORD *)(v3 + 8) == 0;
  v43 = v3;
  if ( v4 )
    return 0;
  if ( !*(_DWORD *)(v3 + 12) )
    return 0;
  v5 = *(float *)(dword_10435A6C + 44) * 1000.0;
  v41 = v5;
  if ( 0.0 == v5 )
    return 0;
  v6 = 0;
  v7 = alloca(4 * a2);
  v8 = a2;
  v9 = v34;
  v10 = 0;
  v40 = v34;
  if ( a2 >= 4 )
  {
    v11 = (_DWORD *)(a3 + 8);
    Base = (void *)(((unsigned int)(a2 - 4) >> 2) + 1);
    LODWORD(v44) = 4 * (_DWORD)Base;
    do
    {
      v12 = *(v11 - 2);
      v13 = *(_DWORD *)(v12 + 80);
      if ( 0.0 != *(float *)(v13 + 452) && (*(_BYTE *)(v12 + 6720) & 0x10) != 0 )
      {
        v14 = *((_DWORD *)off_103DC81C + 1);
        if ( *(_DWORD *)(v13 + 464) != v14 )
        {
          *(_DWORD *)(v13 + 464) = v14;
          v34[v6++] = *(_DWORD *)(*(v11 - 2) + 80);
        }
      }
      v15 = *(v11 - 1);
      v16 = *(_DWORD *)(v15 + 80);
      if ( 0.0 != *(float *)(v16 + 452) && (*(_BYTE *)(v15 + 6720) & 0x10) != 0 )
      {
        v17 = *((_DWORD *)off_103DC81C + 1);
        if ( *(_DWORD *)(v16 + 464) != v17 )
        {
          *(_DWORD *)(v16 + 464) = v17;
          v34[v6++] = *(_DWORD *)(*(v11 - 1) + 80);
        }
      }
      v18 = *(_DWORD *)(*v11 + 80);
      if ( 0.0 != *(float *)(v18 + 452) && (*(_BYTE *)(*v11 + 6720) & 0x10) != 0 )
      {
        v19 = *((_DWORD *)off_103DC81C + 1);
        if ( *(_DWORD *)(v18 + 464) != v19 )
        {
          *(_DWORD *)(v18 + 464) = v19;
          v34[v6++] = *(_DWORD *)(*v11 + 80);
        }
      }
      v20 = v11[1];
      v21 = *(_DWORD *)(v20 + 80);
      if ( 0.0 != *(float *)(v21 + 452) && (*(_BYTE *)(v20 + 6720) & 0x10) != 0 )
      {
        v22 = *((_DWORD *)off_103DC81C + 1);
        if ( *(_DWORD *)(v21 + 464) != v22 )
        {
          *(_DWORD *)(v21 + 464) = v22;
          v34[v6++] = *(_DWORD *)(v11[1] + 80);
        }
      }
      v11 += 4;
      Base = (char *)Base - 1;
    }
    while ( Base );
    v10 = LODWORD(v44);
    v8 = a2;
  }
  if ( v10 < v8 )
  {
    do
    {
      v23 = *(_DWORD *)(a3 + 4 * v10);
      v24 = *(_DWORD *)(v23 + 80);
      if ( 0.0 != *(float *)(v24 + 452) && (*(_BYTE *)(v23 + 6720) & 0x10) != 0 )
      {
        v25 = *((_DWORD *)off_103DC81C + 1);
        if ( *(_DWORD *)(v24 + 464) != v25 )
        {
          *(_DWORD *)(v24 + 464) = v25;
          v34[v6++] = *(_DWORD *)(*(_DWORD *)(a3 + 4 * v10) + 80);
        }
      }
      ++v10;
    }
    while ( v10 < a2 );
    v8 = a2;
  }
  if ( !v6 )
    return 0;
  for ( i = 0; i < v8; ++i )
    *(_BYTE *)(*(_DWORD *)(a3 + 4 * i) + 6721) |= 1u;
  v27 = v43;
  (*(void (__thiscall **)(int, int, char *, char *, char *, int *))(*(_DWORD *)dword_10413168 + 200))(
    dword_10413168,
    v43,
    v35,
    v37,
    v36,
    v38);
  v44 = tan(*(float *)(v27 + 36) * 0.5 * 0.017453292);
  v28 = alloca(12 * a2);
  v29 = 0;
  Base = v34;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v30 = v9[v29];
      v31 = sub_100EBAB0(a2, (int)Base, (float *)&v39, v30, v43, (int)v38, v44);
      if ( *(float *)&v39 > (double)v41 )
        sub_100EBC80(v30, v31, (char *)Base, *(float *)&v39, v41);
      if ( ++v29 >= v6 )
        break;
      v9 = v40;
    }
  }
  for ( j = 0; j < a2; ++j )
    *(_BYTE *)(*(_DWORD *)(a3 + 4 * j) + 6721) &= ~1u;
  return 1;
}
