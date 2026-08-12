int __thiscall sub_102549C0(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
  {
    result = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(this + 852) = 1;
    *(_DWORD *)(this + 812) = result;
  }
  else
  {
    result = 0;
    *(_BYTE *)(this + 852) = 1;
    *(_DWORD *)(this + 812) = 0;
  }
  return result;
}
