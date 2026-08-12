void __thiscall sub_100CE0B0(_DWORD *this, int a2, int a3)
{
  int i; // esi
  const char *v5; // eax

  for ( i = 0; i < a3; ++i )
  {
    v5 = "true";
    if ( a3 == 1 )
    {
      if ( !*(_BYTE *)(i + a2) )
        v5 = "false";
      sub_100CDF50(this, " bool (%s)\n", v5);
    }
    else
    {
      if ( !*(_BYTE *)(i + a2) )
        v5 = "false";
      sub_100CDF50(this, "[%i] bool (%s)\n", i, v5);
    }
  }
}
