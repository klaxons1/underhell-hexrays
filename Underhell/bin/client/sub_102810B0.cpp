unsigned int __thiscall sub_102810B0(int *this)
{
  int *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // eax
  int v7; // [esp+4h] [ebp-4h]

  if ( this[9] <= 0 )
  {
    v3 = sub_10280970(this + 1, this[4]);
  }
  else
  {
    v2 = (int *)this[6];
    this[11] = *v2;
    if ( this[9] - 1 > 0 )
      memcpy(v2, v2 + 1, 4 * (this[9] - 1));
    --this[9];
    v3 = this[11];
  }
  v4 = this[1];
  *(_DWORD *)(v4 + 8 * v3) &= ~0x80000000;
  v5 = (_DWORD *)(v4 + 8 * v3);
  v5[1] = 0;
  ++*this;
  return v3 & 0xFFFFF | v7 & 0x80000000 | ((*v5 & 0x7FF) << 20);
}
