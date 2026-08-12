bool __thiscall sub_10215A30(int this)
{
  int v1; // eax
  bool result; // al

  result = 1;
  if ( !*(_BYTE *)(this + 828) )
  {
    v1 = *(_DWORD *)(this + 836);
    if ( v1 >= 0
      && (!v1 || *(_DWORD *)(this + 848) == *(_DWORD *)(dword_106B31C8 + 4) && *(unsigned __int16 *)(this + 818) >= v1) )
    {
      return 0;
    }
  }
  return result;
}
