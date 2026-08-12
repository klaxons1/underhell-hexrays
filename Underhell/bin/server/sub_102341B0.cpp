int __thiscall sub_102341B0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  float v6; // [esp+0h] [ebp-Ch]

  v2 = *(_DWORD *)(this + 2420);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
  {
    *(float *)(this + 3652) = 0.0;
    v4 = sub_10233FD0(this);
    sub_100218B0((_DWORD *)this, v4);
  }
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v6, 0);
}
