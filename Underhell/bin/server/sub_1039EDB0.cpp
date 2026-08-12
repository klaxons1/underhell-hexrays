int __thiscall sub_1039EDB0(int this)
{
  int result; // eax
  char v2; // dl

  if ( !*(_BYTE *)(this + 3836) )
    return 0;
  v2 = *(_BYTE *)(this + 3829);
  if ( v2 && *(float *)(this + 3844) > 0.0 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3844) )
    return 9;
  if ( *(_BYTE *)(this + 3808) )
    return 24;
  result = 9;
  if ( v2 )
    return 24;
  return result;
}
