void __thiscall sub_103665F0(int this, int a2, int a3)
{
  if ( a3 == 3 )
  {
    sub_10366040((_DWORD *)this);
  }
  else if ( *(_DWORD *)(this + 3772) && (a3 == 1 || a3 == 2) && !sub_1032E9B0(this) )
  {
    *(_BYTE *)(this + 3996) = 0;
    sub_10365F90((_DWORD *)this);
  }
}
