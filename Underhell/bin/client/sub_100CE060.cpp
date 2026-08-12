int __thiscall sub_100CE060(_DWORD *this, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a3; ++i )
  {
    if ( a3 == 1 )
      result = sub_100CDF50(this, " integer (%i)\n", *(_DWORD *)(a2 + 4 * i));
    else
      result = sub_100CDF50(this, "[%i] integer (%i)\n", i, *(_DWORD *)(a2 + 4 * i));
  }
  return result;
}
