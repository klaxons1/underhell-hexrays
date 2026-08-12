int __thiscall sub_101278B0(int this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
    return sub_10127760((char *)this, *(_DWORD *)(*(_DWORD *)(v2 + 28) + 8 * a2));
  else
    return *(_DWORD *)this;
}
