int __thiscall sub_10185BF0(int this, int a2)
{
  int result; // eax
  bool v3; // zf

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  v3 = *(_BYTE *)(this + 921) == 0;
  *(_DWORD *)(this + 912) = result;
  if ( v3 )
    *(_DWORD *)(this + 916) = result;
  return result;
}
