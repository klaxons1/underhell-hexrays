int __thiscall sub_101E20E0(int this)
{
  int result; // eax

  *(_BYTE *)(this + 376) &= ~0x10u;
  if ( *(_BYTE *)(this + 4) == 12 )
  {
    result = *(_DWORD *)(this + 84);
    *(_DWORD *)(this + 88) = result;
  }
  return result;
}
