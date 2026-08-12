void __cdecl sub_1005BF90(int a1, float *a2)
{
  double v2; // st7
  double v3; // st6
  float *v4; // eax

  v2 = *(float *)(a1 + 4);
  if ( v2 != a2[300] )
  {
    if ( -1.0 == v2 )
    {
      v3 = *((float *)off_103DC81C + 3) - 1.0;
      a2[308] = v3;
    }
    else
    {
      v4 = (float *)off_103DC81C;
      a2[308] = *((float *)off_103DC81C + 3);
      v3 = v2 + v4[3];
    }
    a2[309] = v3;
    a2[300] = v2;
  }
}
