double __cdecl sub_10100230(int a1, int a2, float a3)
{
  int v4; // eax

  if ( a1 && (v4 = sub_10100080(a2)) != 0 )
    return (*(float *)(v4 + 12) - *(float *)(v4 + 8)) * a3 + *(float *)(v4 + 8);
  else
    return 0.0;
}
