bool __thiscall sub_10185AF0(int this)
{
  int v1; // eax
  bool v2; // zf
  bool v3; // sf
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(this + 248) & 0x20) == 0 )
  {
    v1 = 0;
    if ( *(int *)(dword_106B3E7C + 48) < 3 )
    {
      v2 = *(_DWORD *)(this + 800) == 0;
      v3 = *(int *)(this + 800) < 0;
    }
    else
    {
      v2 = *(_DWORD *)(this + 804) == 0;
      v3 = *(int *)(this + 804) < 0;
    }
    LOBYTE(v1) = !v3 && !v2;
    if ( !v1 )
      return 1;
  }
  return result;
}
