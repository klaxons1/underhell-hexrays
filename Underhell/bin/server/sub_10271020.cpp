void __cdecl sub_10271020(int a1, float a2)
{
  float *v2; // esi
  int v3; // edi
  double v4; // st7
  long double v5; // st7
  double v6; // st7
  int v7; // ecx
  float v8; // [esp+0h] [ebp-2Ch]
  float v9; // [esp+Ch] [ebp-20h]
  float v10; // [esp+1Ch] [ebp-10h]
  float v11; // [esp+24h] [ebp-8h]
  float v12; // [esp+24h] [ebp-8h]
  int v13; // [esp+28h] [ebp-4h] BYREF

  v2 = (float *)LODWORD(a2);
  v3 = a1;
  v10 = sub_10270E80(*(float *)(a1 + 8), *(float *)(a1 + 12), *(float *)LODWORD(a2), &a1);
  v4 = v2[2];
  sub_10424CA0(v2[2]);
  v11 = v4;
  v2[2] = v4;
  a2 = 1.0;
  if ( fabs(*v2) > 60.0 )
  {
    v8 = fabs(v10);
    a2 = sub_10134630(v8, 60.0, 80.0, 1.0, 0.0);
    v4 = v11;
  }
  v9 = v4;
  v5 = sub_10270E80(*(float *)(v3 + 16), *(float *)(v3 + 20), v9, &v13);
  v12 = v11 + (v5 - v11) * a2;
  v6 = sub_10270F20(*v2, v10, v3 + 28, a1);
  v7 = v13;
  *v2 = v6;
  v2[2] = sub_10270F20(v2[2], v12, v3 + 44, v7);
}
