int __thiscall sub_10308160(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx

  --this[909];
  result = dword_106E3074;
  v3 = this[909];
  if ( *(_DWORD *)(dword_106E3074 + 48) == 2 )
    return Msg("Guard summoned antlion count: %d\n", v3);
  return result;
}
