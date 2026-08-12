int __thiscall sub_101E7400(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_101E22C0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  v7 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v6 >= 0 && !v7 )
    memcpy((void *)(v5 + 10 * a2 + 10), (const void *)(v5 + 10 * a2), 10 * v6);
  v8 = *this + 10 * a2;
  if ( v8 )
  {
    *(_WORD *)(v8 + 8) = 0;
    *(float *)v8 = 0.0;
    *(float *)(v8 + 4) = 0.0;
  }
  return a2;
}
