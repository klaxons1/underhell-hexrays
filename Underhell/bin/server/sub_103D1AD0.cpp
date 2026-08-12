BOOL __thiscall sub_103D1AD0(int this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( *(_BYTE *)(this + 1144) == 3 )
  {
    v1 = *(_DWORD *)(this + 1128);
    if ( v1 )
    {
      if ( *(_DWORD *)(this + 1124) >= v1 )
        return 1;
    }
  }
  return result;
}
