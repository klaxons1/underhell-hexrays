int __thiscall sub_102454A0(int this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
    return sub_10245350((char *)this, *(_DWORD *)(*(_DWORD *)(v2 + 28) + 8 * a2));
  else
    return *(_DWORD *)this;
}
