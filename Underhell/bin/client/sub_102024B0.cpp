char __thiscall sub_102024B0(int this, int a2, int a3, int a4, int a5, int a6)
{
  if ( *(_DWORD *)(this + 56) == 3 )
  {
    if ( *(_BYTE *)(this + 80) )
      return sub_102012E0(this, a2, a3, a4, a5, a6);
    else
      return sub_10201620(this, a2, a3, a4, a5, a6);
  }
  else if ( *(_BYTE *)(this + 80) )
  {
    return sub_10201C00(this, a2, a3, a4, a5, a6);
  }
  else
  {
    return sub_10201F00(this, a2, a3, a4, a5, a6);
  }
}
