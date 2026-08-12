unsigned int __cdecl sub_102AF340(int a1)
{
  int v1; // edi
  float *v2; // esi
  unsigned int result; // eax

  v1 = 0;
  v2 = (float *)&unk_10482AF0;
  do
  {
    result = sub_102AF1D0(v2, v1 + a1);
    v2 += 224;
    ++v1;
  }
  while ( (int)v2 < (int)&dword_10489AF0 );
  return result;
}
