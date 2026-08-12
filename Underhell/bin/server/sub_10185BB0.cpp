int __thiscall sub_10185BB0(int this, int a2)
{
  int v2; // eax
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  *(_DWORD *)(this + 800) += v2;
  result = *(_DWORD *)(this + 800);
  if ( !*(_BYTE *)(this + 922) )
    *(_DWORD *)(this + 804) = result;
  return result;
}
