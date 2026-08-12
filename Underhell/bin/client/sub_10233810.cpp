void __cdecl sub_10233810(_WORD *a1, int a2, __int16 a3)
{
  _WORD *v3; // ecx
  int i; // eax

  v3 = a1;
  if ( a1 )
  {
    for ( i = 0; i < a2 / 3; v3 += 3 )
    {
      *v3 = a3;
      v3[1] = i + a3 + 1;
      v3[2] = i++ + a3 + 2;
    }
  }
}
