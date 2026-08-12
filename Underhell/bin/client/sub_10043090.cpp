void __cdecl sub_10043090(int a1, int a2)
{
  double v2; // st7
  int v3; // edx
  int v4; // [esp+0h] [ebp-Ch] BYREF
  float v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v2 = *(float *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 232);
  v5 = *(float *)(a2 + 236);
  v4 = v3;
  v6 = *(_DWORD *)(a2 + 240);
  if ( v2 != v5 )
  {
    v5 = v2;
    sub_10034BD0((float *)a2, (float *)&v4);
  }
}
