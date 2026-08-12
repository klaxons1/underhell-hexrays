float *__cdecl sub_100FBCD0(int a1, int a2, int a3, float *a4)
{
  float *result; // eax

  result = (float *)a2;
  if ( (*(_DWORD *)(a2 + 248) & 0x400) == 0 )
    return sub_100D9930(a1, (float *)a2, a3, a4);
  *a4 = *(float *)(a2 + 860);
  a4[1] = *(float *)(a2 + 864);
  a4[2] = *(float *)(a2 + 868);
  return result;
}
