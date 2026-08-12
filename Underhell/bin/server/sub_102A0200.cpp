char __thiscall sub_102A0200(int this, _BYTE *a2, int a3)
{
  int v5; // edi

  if ( *(_DWORD *)(this + 16) != 2 )
    return 0;
  v5 = *(_DWORD *)(this + 4);
  *(_DWORD *)(v5 + 2704) = *sub_10162BE0(&a2, a2);
  sub_10039F40(*(int **)(this + 4), 16);
  sub_100457E0(*(_DWORD **)(this + 4), 100006);
  return 1;
}
