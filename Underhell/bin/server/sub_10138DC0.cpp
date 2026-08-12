int __thiscall sub_10138DC0(int this, int a2)
{
  int *v2; // eax
  int result; // eax

  v2 = (int *)(a2 + 8);
  *(_DWORD *)(this + 876) = 0;
  if ( v2[4] != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  result = *v2;
  *(_DWORD *)(this + 808) = result;
  *(_BYTE *)(this + 892) = 1;
  return result;
}
