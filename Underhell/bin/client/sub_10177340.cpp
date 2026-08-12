void __cdecl sub_10177340(int *a1)
{
  int v1[3]; // [esp+Ch] [ebp-18h] BYREF
  int v2[3]; // [esp+18h] [ebp-Ch] BYREF

  v1[0] = *a1;
  v1[1] = a1[1];
  v1[2] = a1[2];
  *(float *)v2 = 0.0;
  *(float *)&v2[1] = 0.0;
  *(float *)&v2[2] = 1.0;
  sub_10177290((float *)v1, (float *)v2, 100.0, 0.0, 200.0);
}
