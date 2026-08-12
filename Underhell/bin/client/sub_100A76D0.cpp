void __cdecl sub_100A76D0(int a1)
{
  bool v1; // zf
  float v2; // [esp+0h] [ebp-10h]
  int v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(float *)v3 = 0.0;
  *(float *)&v3[1] = 0.0;
  *(float *)&v3[2] = 1.0;
  v2 = *(float *)(a1 + 56);
  if ( v1 )
    sub_100A6BC0((float *)a1, (float *)v3, v2);
  else
    sub_100A7510((_DWORD *)a1, (int)v3, v2);
}
