char __thiscall sub_1044EAA0(_DWORD *this, int a2)
{
  int v3; // eax
  void *v4; // ecx
  unsigned int v5; // edi

  v3 = this[6];
  v4 = (void *)this[1];
  v5 = ~(v3 - 1) & (v3 + a2 - 1);
  if ( v5 > this[2] || !VirtualAlloc(v4, v5 - (_DWORD)v4, 0x1000u, 4u) )
    return 0;
  this[1] = v5;
  return 1;
}
