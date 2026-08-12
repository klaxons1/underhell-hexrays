double __cdecl sub_10100330(int a1, int a2, float a3)
{
  int v3; // eax

  if ( a2 < 0 || a2 >= sub_10245290(a1) )
    return 0.0;
  v3 = sub_10245670(a2);
  return (*(float *)(v3 + 12) - *(float *)(v3 + 8)) * a3 + *(float *)(v3 + 8);
}
