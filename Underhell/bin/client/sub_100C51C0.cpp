void __thiscall sub_100C51C0(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // eax
  int i; // [esp+4h] [ebp-8h]
  _DWORD *v7; // [esp+8h] [ebp-4h]

  v3 = this[5];
  v4 = 0;
  v7 = this;
  for ( i = v3; v4 < v3; ++v4 )
  {
    v5 = *(_DWORD **)(this[2] + 4 * v4);
    if ( !v5[3] )
    {
      sub_100C4FD0((int)&dword_10430978, a2, v5[2], *(_DWORD *)(*(_DWORD *)(84 * v5[2] + *a3 + 28) + 12 * v5[1] + 4));
      this = v7;
      v3 = i;
    }
  }
}
