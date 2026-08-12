int __thiscall sub_102ABF20(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // ecx

  v4 = this[3];
  v5 = this[1];
  if ( v4 + 1 > v5 )
    sub_102AB870(this, v4 - v5 + 1);
  ++this[3];
  v6 = *this;
  v7 = this[3] - a2 - 1;
  v8 = this[3] - a2 == 1;
  this[4] = *this;
  if ( v7 >= 0 && !v8 )
    memcpy((void *)(16 * a2 + v6 + 16), (const void *)(16 * a2 + v6), 16 * v7);
  v9 = *this + 16 * a2;
  if ( v9 )
    sub_1022D2E0(v9, a3);
  return a2;
}
