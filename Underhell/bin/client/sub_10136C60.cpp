float *__cdecl sub_10136C60(float *a1, int a2, float a3)
{
  int v3; // edi
  int v4; // esi
  float *v5; // ebx
  double v6; // st7
  float *result; // eax
  float v8; // [esp+24h] [ebp+Ch]

  v3 = a2;
  v4 = a2 >> 1;
  if ( a2 >= 2 )
  {
    while ( 1 )
    {
      v5 = &a1[v4];
      v6 = CUniformRandomStream::RandomFloat((CUniformRandomStream *)&unk_1043A030, -1.0, 1.0);
      result = a1;
      *v5 = (a1[v3] + *a1) * 0.5 + v6 * a3;
      if ( v4 <= 1 )
        break;
      v8 = 0.5 * a3;
      sub_10136C60((int)v5, v4, v8);
      v3 = v4;
      a3 = v8;
      v4 >>= 1;
    }
  }
  return result;
}
