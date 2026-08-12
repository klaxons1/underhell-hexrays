int __thiscall sub_101F9C40(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[16];
  if ( v2 )
    return *(_DWORD *)(*(_DWORD *)(v2 + 588) + 4 * a2);
  else
    return 0;
}
