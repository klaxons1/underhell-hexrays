bool __thiscall sub_10070060(int this)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)(this + 828) )
  {
    v1 = *(__int16 *)(this + 816);
    if ( v1 >= 13 && (v1 <= 14 || v1 == 16) )
      return 1;
  }
  return result;
}
