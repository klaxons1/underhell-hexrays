int __thiscall sub_101CB960(int this)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 1867) )
  {
    *(_BYTE *)(this + 1867) = 1;
    *(_DWORD *)(this + 1124) = 0;
    return sub_101CB850(this);
  }
  return result;
}
