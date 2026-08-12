void __stdcall sub_101FACE0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // ecx
  int v12; // eax

  v11 = a3;
  if ( a3 > 0 )
  {
    v12 = a6 + 8;
    do
    {
      *(float *)(v12 - 8) = 0.0;
      v12 += 12;
      --v11;
      *(float *)(v12 - 16) = 0.0;
      *(float *)(v12 - 12) = 0.0;
    }
    while ( v11 );
  }
}
