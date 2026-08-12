void __thiscall sub_10029860(int this, int a2)
{
  if ( *(_DWORD *)(this + 1808) != a2 )
  {
    *(_DWORD *)(this + 1808) = a2;
    sub_1000F6C0(this, 8);
    if ( *(_BYTE *)(this + 1760) )
      sub_10029560((_DWORD *)this);
  }
}
