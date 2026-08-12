int __thiscall sub_10245470(int this, int a2)
{
  int v2; // edx

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
    return sub_10245350((char *)this, *(_DWORD *)(*(_DWORD *)(v2 + 8) + 16 * a2 + 8));
  else
    return *(_DWORD *)this;
}
