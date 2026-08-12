char __thiscall sub_1042DD70(int this, int a2)
{
  if ( *(int *)(this + 8) < 0 )
  {
    if ( (*(_BYTE *)(this + 21) & 2) == 0 )
      return 0;
    sub_1042D510(this, 0);
  }
  while ( *(_DWORD *)(this + 4) < a2 + *(_DWORD *)(this + 16) - *(_DWORD *)(this + 32) )
    sub_1042D560((_DWORD *)this, 1);
  return 1;
}
