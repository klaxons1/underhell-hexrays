unsigned int __cdecl sub_1044E940(int a1)
{
  int v1; // edi
  float *v2; // esi
  unsigned int result; // eax

  v1 = 0;
  v2 = (float *)&unk_10701AC0;
  do
  {
    result = sub_1044E850(v2, v1 + a1);
    v2 += 224;
    ++v1;
  }
  while ( (int)v2 < (int)flt_10708AC0 );
  return result;
}
