int __usercall sub_101BF870@<eax>(float *a1@<edi>, int a2)
{
  int v2; // ebx
  int i; // esi
  long double v4; // st7
  float v6[3]; // [esp+8h] [ebp-10h] BYREF
  float v7; // [esp+14h] [ebp-4h]

  v7 = -1.0;
  v2 = 0;
  for ( i = 0; i < 3; ++i )
  {
    sub_10421CE0(a2, i, v6);
    v4 = fabs(a1[1] * v6[1] + *a1 * v6[0] + a1[2] * v6[2]);
    if ( v7 < v4 )
    {
      v7 = v4;
      v2 = i;
    }
  }
  return v2;
}
