void __cdecl sub_10208EC0(_DWORD *a1)
{
  _DWORD *v1; // eax
  float *v2; // eax
  int v3; // esi
  bool v4; // zf
  double v5; // st7
  float v6; // [esp+0h] [ebp-D4h]
  _BYTE v7[64]; // [esp+8h] [ebp-CCh] BYREF
  _BYTE v8[64]; // [esp+48h] [ebp-8Ch] BYREF
  int v9[16]; // [esp+88h] [ebp-4Ch] BYREF
  float v10[3]; // [esp+C8h] [ebp-Ch] BYREF

  v1 = (_DWORD *)sub_10153490();
  v2 = (float *)sub_101E94B0(v1);
  v3 = (int)v2;
  if ( v2 )
  {
    v10[0] = v2[182];
    v4 = *a1 == 2;
    v10[1] = v2[183];
    v10[2] = v2[184];
    if ( v4 )
      v5 = atof((const char *)a1[259]);
    else
      v5 = 7.5;
    v6 = v5;
    sub_10425F30((int)v9, v6);
    sub_10425BC0(v10, v8);
    sub_10425BE0(v8, v9, v7);
    sub_10421A90(v7, v10);
    sub_100E11A0(v3, v10);
  }
}
