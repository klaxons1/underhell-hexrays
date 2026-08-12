int __thiscall sub_10276D30(int this, int a2, int a3)
{
  int v4; // edi
  int *v5; // ecx

  v4 = *(_DWORD *)(this + 1200) + 1;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 1200);
  }
  *(_DWORD *)(this + 1200) = v4;
  return sub_10276300((_DWORD *)this, a2, 1);
}
