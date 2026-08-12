int __thiscall sub_10185C90(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(this + 921) = 1;
    *(_DWORD *)(this + 916) = result;
  }
  else
  {
    result = 0;
    *(_BYTE *)(this + 921) = 1;
    *(_DWORD *)(this + 916) = 0;
  }
  return result;
}
