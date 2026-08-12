void __thiscall sub_100CE170(_DWORD *this, int a2, int a3)
{
  int i; // esi
  const char *v5; // eax

  for ( i = 0; i < a3; ++i )
  {
    v5 = *(const char **)(a2 + 4 * i);
    if ( a3 == 1 )
    {
      if ( !v5 )
        v5 = Locale;
      sub_100CDF50(this, " string (%s)\n", v5);
    }
    else
    {
      if ( !v5 )
        v5 = Locale;
      sub_100CDF50(this, "[%i] string (%s)\n", i, v5);
    }
  }
}
