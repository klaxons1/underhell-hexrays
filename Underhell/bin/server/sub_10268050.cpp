void __thiscall sub_10268050(int this, float a2, float a3, __int16 a4, int a5)
{
  int v6; // ebx
  int *v7; // ecx
  int v8; // eax
  int v9; // ebx
  int *v10; // ecx
  int v11; // ebx
  int *v12; // ecx
  int v13; // ebx
  int *v14; // ecx
  int v15; // eax
  int *v16; // ecx
  int *v17; // ecx
  int *v18; // ecx
  double v19; // st7
  __int16 v20; // bx
  double v21; // st6
  __int64 v22; // [esp-8h] [ebp-1Ch]
  __int64 v23; // [esp-8h] [ebp-1Ch]
  __int64 v24; // [esp-8h] [ebp-1Ch]
  __int64 v25; // [esp-8h] [ebp-1Ch]
  float v26; // [esp+0h] [ebp-14h]
  int v27; // [esp+10h] [ebp-4h]

  v27 = *(_DWORD *)(LODWORD(a3) + 36);
  sub_101455D0(this + 1124, SLODWORD(a3), a2);
  v6 = *(_DWORD *)(this + 1164);
  if ( *(_DWORD *)(this + 1644) != v6 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 1644);
    }
    *(_DWORD *)(this + 1644) = v6;
  }
  v8 = *(_DWORD *)(this + 1172);
  if ( v8 <= 4095 )
    v9 = v8 < 0 ? 0 : v8;
  else
    v9 = 4095;
  if ( *(_DWORD *)(this + 1648) != v9 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 1648);
    }
    *(_DWORD *)(this + 1648) = v9;
  }
  v11 = *(_DWORD *)(this + 1180);
  if ( *(_DWORD *)(this + 1656) != v11 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 1656);
    }
    *(_DWORD *)(this + 1656) = v11;
  }
  v13 = *(_DWORD *)(this + 1184) != 0;
  if ( *(_DWORD *)(this + 1660) != v13 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 1660);
    }
    *(_DWORD *)(this + 1660) = v13;
  }
  v15 = *(_DWORD *)(this + 1652);
  a3 = *(float *)(this + 1136);
  if ( v15 != LODWORD(a3) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v16 = *(int **)(this + 24);
      if ( v16 )
        sub_100194B0(v16, 1652);
    }
    *(float *)(this + 1652) = a3;
  }
  if ( *(_BYTE *)(this + 1691) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v17 = *(int **)(this + 24);
      if ( v17 )
        sub_100194B0(v17, 1691);
    }
    *(_BYTE *)(this + 1691) = 0;
  }
  if ( *(_BYTE *)(this + 1692) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v18 = *(int **)(this + 24);
      if ( v18 )
        sub_100194B0(v18, 1692);
    }
    *(_BYTE *)(this + 1692) = 0;
  }
  v19 = 0.0;
  v20 = a4;
  a2 = 0.0;
  a3 = 0.0;
  if ( (a4 & 1) != 0 )
  {
    HIDWORD(v22) = this;
    LODWORD(v22) = this;
    sub_1010DD80((_DWORD *)(this + 1544), v22, 0.0);
    v19 = 0.0;
  }
  if ( (v20 & 0x800) != 0 )
  {
    v26 = v19;
    HIDWORD(v23) = this;
    LODWORD(v23) = this;
    sub_1010DD80((_DWORD *)(this + 1568), v23, v26);
  }
  if ( (v27 & 1) != 0 )
    v21 = 1.0;
  else
    v21 = a2;
  if ( (v27 & 0x800) != 0 )
    a3 = 1.0;
  a2 = v21;
  sub_1010C270((float *)(this + 1592), 1, (__int16 *)&a2);
  HIDWORD(v24) = this;
  LODWORD(v24) = this;
  sub_1010DA50(
    (_DWORD *)(this + 1592),
    *(_DWORD *)(this + 1592),
    *(_DWORD *)(this + 1596),
    *(_DWORD *)(this + 1600),
    *(_DWORD *)(this + 1604),
    *(_DWORD *)(this + 1608),
    v24,
    0.0);
  sub_1010C270((float *)(this + 1616), 1, (__int16 *)&a3);
  HIDWORD(v25) = this;
  LODWORD(v25) = this;
  sub_1010DA50(
    (_DWORD *)(this + 1616),
    *(_DWORD *)(this + 1616),
    *(_DWORD *)(this + 1620),
    *(_DWORD *)(this + 1624),
    *(_DWORD *)(this + 1628),
    *(_DWORD *)(this + 1632),
    v25,
    0.0);
}
