int __thiscall sub_100CE1D0(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  unsigned __int8 *v5; // esi
  int result; // eax

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = (unsigned __int8 *)(a2 + 2);
    do
    {
      if ( a3 == 1 )
        result = sub_100CDF50(this, " color (%i %i %i %i)\n", *(v5 - 2), *(v5 - 1), *v5, v5[1]);
      else
        result = sub_100CDF50(this, "[%i] color (%i %i %i %i)\n", v3, *(v5 - 2), *(v5 - 1), *v5, v5[1]);
      ++v3;
      v5 += 4;
    }
    while ( v3 < a3 );
  }
  return result;
}
