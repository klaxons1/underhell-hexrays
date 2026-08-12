int __thiscall sub_100CE120(_DWORD *this, int a2, int a3)
{
  int i; // esi
  int result; // eax
  double ArgList; // [esp+0h] [ebp-14h]

  for ( i = 0; i < a3; ++i )
  {
    ArgList = *(float *)(a2 + 4 * i);
    if ( a3 == 1 )
      result = sub_100CDF50(this, " float (%f)\n", ArgList);
    else
      result = sub_100CDF50(this, "[%i] float (%f)\n", i, ArgList);
  }
  return result;
}
