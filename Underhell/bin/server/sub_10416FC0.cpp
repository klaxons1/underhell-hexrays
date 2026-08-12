void __userpurge sub_10416FC0(int a1@<ecx>, float a2@<edi>, float *a3, float a4)
{
  double v5; // st7
  int v6; // edx
  float v7; // [esp+0h] [ebp-14h]
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(a1 + 248) & 4) != 0 )
    v5 = -1.0;
  else
    v5 = 8.0;
  v7 = v5;
  sub_10416D60(a1, a2, v7);
  sub_100E0970(a1, v6, 5, 1);
  v8[0] = *a3 * a4;
  v8[1] = a3[1] * a4;
  v8[2] = a4 * a3[2];
  sub_100DD660(a1, v8);
  *(float *)(a1 + 552) = 1.0;
}
