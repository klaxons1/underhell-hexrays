int __thiscall sub_101175D0(_DWORD *this, void *a2)
{
  int v2; // ecx

  v2 = this[6];
  if ( v2 && *(_DWORD *)(v2 + 12) != *(_DWORD *)(v2 + 8) && !sub_10116870(v2, a2, 12) )
    Warning("Restore underflow!\n");
  return 1;
}
