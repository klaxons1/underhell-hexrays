int __thiscall sub_1010AF80(_DWORD *this, _BYTE *a2, _BYTE *a3, int a4)
{
  int v5; // ebx
  int *v6; // esi

  ++dword_103E2CAC;
  if ( !*(_BYTE *)(a4 + 16) )
    sub_10109D80(a4);
  sub_1010AF00(this, a2, a3, (_DWORD *)a4);
  v5 = dword_103E2CAC;
  sub_1010A950((int)this, dword_103E2CAC, a4, *(_DWORD *)a4, *(_DWORD *)(a4 + 4));
  v6 = *(int **)(a4 + 12);
  if ( v6 )
    sub_1010AEB0(this, v5, v6);
  return this[10];
}
