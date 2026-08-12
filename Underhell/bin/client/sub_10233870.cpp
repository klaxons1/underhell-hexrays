void __cdecl sub_10233870(_WORD *a1, int a2, __int16 a3)
{
  _WORD *v3; // esi
  int i; // ecx

  v3 = a1;
  if ( a1 )
  {
    for ( i = 0; i < a2 / 2; v3 += 2 )
    {
      *v3 = i + a3;
      v3[1] = i++ + a3 + 1;
    }
  }
}
