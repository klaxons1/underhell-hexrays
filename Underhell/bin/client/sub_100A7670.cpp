void __cdecl sub_100A7670(int a1)
{
  bool v1; // zf
  float v2; // [esp+0h] [ebp-20h]
  _BYTE v3[12]; // [esp+8h] [ebp-18h] BYREF
  int v4[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_101EDFB0(a1 + 36, v3);
  *(float *)v4 = 0.0;
  v1 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(float *)&v4[1] = 0.0;
  *(float *)&v4[2] = 1.0;
  v2 = *(float *)(a1 + 56);
  if ( v1 )
    sub_100A6BC0((float *)a1, (float *)v4, v2);
  else
    sub_100A7510((_DWORD *)a1, (int)v4, v2);
}
