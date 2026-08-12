int __thiscall sub_100E9E50(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_10059C80(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 28 * a2 + 28), (const void *)(v5 + 28 * a2), 28 * v6);
  v7 = *this + 28 * a2;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 24) = -1;
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 1;
    *(_DWORD *)(v7 + 8) = 0;
    *(float *)(v7 + 12) = flt_10459240;
    *(_QWORD *)(v7 + 16) = qword_10459244;
  }
  return a2;
}
