void __thiscall sub_1038F830(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ebx
  unsigned int v5; // esi
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int *v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // esi
  unsigned int v18; // ebx
  int *v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  _DWORD *v23; // esi
  _DWORD *v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int *v28; // ebx
  int v29; // eax
  int v30; // esi
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // [esp+Ch] [ebp-4h]

  v2 = this[1105];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[1105] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = *(_DWORD *)(v4 + 248) & 0xFFF7FFFF;
  if ( *(_DWORD *)(v4 + 248) != v5 )
  {
    if ( *(_BYTE *)(v4 + 84) )
    {
      *(_BYTE *)(v4 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(v4 + 24);
      if ( v6 )
        sub_100194B0(v6, 248);
    }
    *(_DWORD *)(v4 + 248) = v5;
  }
  v7 = this[1105];
  if ( v7 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 584))(v8);
  v9 = this[1105];
  if ( v9 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  sub_101129A0((unsigned __int16 *)(v10 + 320), *(_WORD *)(v10 + 356) & 0xFFFB);
  v12 = this[1105];
  if ( v12 == -1 || (v11 = off_1061BE18, off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v12 >> 12) )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  sub_100E0970(v13, (int)v11, 6, 0);
  v14 = this[1105];
  if ( v14 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v15 + 140))(v15, 0, -1);
  v16 = this[1105];
  if ( v16 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  v18 = *(_DWORD *)(v17 + 248) & 0xFFFFFF7F;
  if ( *(_DWORD *)(v17 + 248) != v18 )
  {
    if ( *(_BYTE *)(v17 + 84) )
    {
      *(_BYTE *)(v17 + 88) |= 1u;
    }
    else
    {
      v19 = *(int **)(v17 + 24);
      if ( v19 )
        sub_100194B0(v19, 248);
    }
    *(_DWORD *)(v17 + 248) = v18;
  }
  v20 = this[1105];
  if ( v20 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v20 >> 12 )
    v21 = 0;
  else
    v21 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
  sub_10044510(v21, (int)"Manhack released by metropolice");
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    v22 = this[1105];
    if ( v22 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = (_DWORD *)off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
    v24 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    sub_100285C0(v23, v24, 1);
    v25 = this[1105];
    if ( v25 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
    sub_1002B660(v26, 3);
    v27 = this[1105];
    if ( v27 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v27 >> 12 )
      v28 = 0;
    else
      v28 = (int *)off_1061BE18[4 * (this[1105] & 0xFFF) + 1];
    v29 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v34 = v29;
    if ( (*(_DWORD *)(v29 + 252) & 0x800) != 0 )
      sub_100DAE60(v29);
    v30 = *v28;
    v31 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 368))(this, v34 + 580, 0);
    (*(void (__thiscall **)(int *, int))(v30 + 1876))(v28, v31);
  }
  v32 = this[699];
  if ( v32 )
  {
    v33 = this[1105];
    if ( v33 == -1 || off_1061BE18[4 * (this[1105] & 0xFFF) + 2] != v33 >> 12 )
      sub_100B20E0(v32, 0);
    else
      sub_100B20E0(v32, (_DWORD *)off_1061BE18[4 * (this[1105] & 0xFFF) + 1]);
  }
}
