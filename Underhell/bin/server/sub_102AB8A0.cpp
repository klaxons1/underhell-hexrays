int __thiscall sub_102AB8A0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = this[2];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[2] & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
    sub_102AA950((int)this, (int)this);
  sub_102AB080((int)this, (int)this);
  return sub_102AB320((int)this, (int)this);
}
