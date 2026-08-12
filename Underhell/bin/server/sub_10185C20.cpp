int __thiscall sub_10185C20(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(this + 922) = 1;
    *(_DWORD *)(this + 804) = result;
  }
  else
  {
    result = 0;
    *(_BYTE *)(this + 922) = 1;
    *(_DWORD *)(this + 804) = 0;
  }
  return result;
}
