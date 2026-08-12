char __thiscall sub_102CD970(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  char v8; // al
  int v9; // ebx
  int v10; // ebx
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int *v14; // ebx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  int *v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  float *v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  char v28; // al
  _DWORD *v29; // ecx
  __int64 v30; // [esp+0h] [ebp-14h]
  float v31; // [esp+4h] [ebp-10h]

  v3 = *(_DWORD *)(this + 920);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        if ( v6 != a2 )
          return 0;
      }
    }
  }
  if ( *(_DWORD *)(this + 1044) && !sub_10260340(*(char **)(this + 1044), a2) )
    return 0;
  if ( a2 )
    *(_DWORD *)(this + 920) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 920) = -1;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  v9 = *(_DWORD *)(this + 248);
  if ( v8 )
  {
    v10 = v9 | 2;
    if ( *(_DWORD *)(this + 248) != v10 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(this + 24);
        if ( v11 )
          sub_100194B0(v11, 248);
      }
      *(_DWORD *)(this + 248) = v10;
    }
    v12 = *(_DWORD *)(this + 920);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
    v14 = (int *)(v13 + 2252);
    v15 = *(_DWORD *)(v13 + 2252);
    v16 = v15 | 1;
    if ( v15 != (v15 | 1) )
    {
      (*(void (__thiscall **)(int *, int *))*(v14 - 15))(v14 - 15, v14);
      *v14 = v16;
    }
  }
  else
  {
    v17 = v9 | 0x200;
    if ( *(_DWORD *)(this + 248) != v17 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v18 = *(int **)(this + 24);
        if ( v18 )
          sub_100194B0(v18, 248);
      }
      *(_DWORD *)(this + 248) = v17;
    }
    *(_BYTE *)(this + 1381) = 0;
  }
  v19 = *(_DWORD *)(this + 920);
  if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v19 >> 12 )
    v20 = 0;
  else
    v20 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
  if ( sub_100CF460(v20) )
  {
    v21 = *(_DWORD *)(this + 920);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
    v23 = sub_100CF460(v22);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 996))(v23, 0);
  }
  v24 = *(_DWORD *)(this + 920);
  if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v24 >> 12 )
    v25 = 0;
  else
    v25 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
  *(float *)(this + 928) = v25[179];
  *(float *)(this + 932) = v25[180];
  *(float *)(this + 936) = v25[181];
  sub_1023C380((_DWORD *)this, (int)"Func_Tank.BeginUse", 0.0, 0);
  v31 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v31, 0);
  v26 = *(_DWORD *)(this + 920);
  if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v26 >> 12 )
    v27 = 0;
  else
    v27 = off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
  v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 320))(v27);
  HIDWORD(v30) = this;
  LODWORD(v30) = this;
  v29 = (_DWORD *)(this + 1296);
  if ( !v28 )
    v29 = (_DWORD *)(this + 1248);
  sub_1010DD80(v29, v30, 0.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  return 1;
}
