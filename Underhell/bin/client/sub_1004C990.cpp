int __thiscall sub_1004C990(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax

  v2 = *(_DWORD *)(this + 324);
  if ( v2 == -1 || (v3 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4), v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  sub_1004C4B0((char *)this, v4 != 0);
  return sub_100347C0((void *)this);
}
