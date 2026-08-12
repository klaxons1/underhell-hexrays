int __thiscall sub_103D9C80(int this, int a2)
{
  int result; // eax

  if ( (*(_DWORD *)(this + 248) & 0x10000) != 0 )
  {
    result = a2;
    *(_DWORD *)a2 = *(_DWORD *)(this + 716);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(this + 720);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(this + 724);
  }
  else
  {
    sub_10021150((float *)this, (float *)a2);
    return a2;
  }
  return result;
}
