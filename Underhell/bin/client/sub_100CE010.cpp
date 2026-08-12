int __thiscall sub_100CE010(_DWORD *this, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < a3; ++i )
  {
    if ( a3 == 1 )
      result = sub_100CDF50(this, " short (%i)\n", *(__int16 *)(a2 + 2 * i));
    else
      result = sub_100CDF50(this, "[%i] short (%i)\n", i, *(__int16 *)(a2 + 2 * i));
  }
  return result;
}
