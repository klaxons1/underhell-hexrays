void __thiscall sub_103E2200(int this, int a2, int a3, int a4, int a5)
{
  int *v6; // ecx
  int v7; // ebx
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  float v11; // [esp+18h] [ebp+Ch]

  if ( *(_BYTE *)(a3 + 40) == 100 )
  {
    if ( *(_BYTE *)(this + 1804) )
      sub_103E1AA0(this);
    else
      sub_103E1A40(this);
  }
  if ( *(_BYTE *)(this + 1689) )
    sub_103E2100(this, a3);
  sub_101455D0(this + 1124, a3, *(float *)(dword_106B31C8 + 28));
  sub_103E0BB0(this, 0);
  v11 = *(float *)(this + 1136);
  if ( *(_DWORD *)(this + 1652) != LODWORD(v11) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 1652);
    }
    *(float *)(this + 1652) = v11;
  }
  v7 = *(_DWORD *)(this + 1164);
  if ( *(_DWORD *)(this + 1644) != v7 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 1644);
    }
    *(_DWORD *)(this + 1644) = v7;
  }
  v9 = *(_DWORD *)(this + 1172);
  if ( *(_DWORD *)(this + 1648) != v9 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1648) = v9;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 1648);
      *(_DWORD *)(this + 1648) = v9;
    }
  }
}
