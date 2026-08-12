int __thiscall sub_10349170(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    result = *(_DWORD *)(a2 + 8);
  else
    result = 0;
  *(_DWORD *)(this + 3948) = result;
  if ( result >= 1 )
    *(_BYTE *)(this + 3976) = 1;
  return result;
}
