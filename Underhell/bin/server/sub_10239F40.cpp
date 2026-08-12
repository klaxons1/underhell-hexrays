int __thiscall sub_10239F40(int this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)(this + 912) )
  {
    *(_DWORD *)(this + 916) = *(_DWORD *)(this + 896);
  }
  else
  {
    sub_102386F0(this, 4);
    sub_10239DF0(this);
    result = *(_DWORD *)(this + 896);
    *(_DWORD *)(this + 916) = result;
  }
  return result;
}
