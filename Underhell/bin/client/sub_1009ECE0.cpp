int __cdecl sub_1009ECE0(_BYTE *a1, float a2, float a3, float a4, float a5)
{
  int result; // eax

  *a1 = (int)(a2 * 255.0);
  a1[1] = (int)(a3 * 255.0);
  a1[2] = (int)(a4 * 255.0);
  result = HIWORD(a2) | 0xC00;
  a1[3] = (int)(255.0 * a5);
  return result;
}
