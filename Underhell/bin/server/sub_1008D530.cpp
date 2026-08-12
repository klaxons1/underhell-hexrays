void __thiscall sub_1008D530(_DWORD *this, int a2)
{
  int v2; // eax
  int *v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax

  if ( this[21] == 30 )
  {
    DevMsg("Node %d has too many links\n", *this);
  }
  else
  {
    v2 = this[19];
    v3 = this + 18;
    v4 = this[21];
    if ( v4 + 1 > v2 )
      sub_102ABFC0(v4 - v2 + 1);
    ++v3[3];
    v5 = *v3;
    v6 = v3[3] - v4 - 1;
    v3[4] = *v3;
    if ( v6 > 0 )
      memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
    v7 = (_DWORD *)(*v3 + 4 * v4);
    if ( v7 )
      *v7 = a2;
  }
}
