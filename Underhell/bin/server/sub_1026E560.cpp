int __thiscall sub_1026E560(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_102C0070(v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(48 * a2 + v5 + 48), (const void *)(48 * a2 + v5), 48 * v6);
  v7 = (_DWORD *)(*this + 48 * a2);
  if ( v7 )
  {
    v7[1] = -1;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
  }
  return a2;
}
