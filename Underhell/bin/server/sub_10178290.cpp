int __stdcall sub_10178290(float a1, float *a2)
{
  int result; // eax

  result = off_1062BC3C + 28;
  *a2 = (*(float *)(off_1062BC3C + 28) - *(float *)off_1062BC3C) * a1 + *(float *)off_1062BC3C;
  a2[1] = (*(float *)(result + 4) - *(float *)(off_1062BC3C + 4)) * a1 + *(float *)(off_1062BC3C + 4);
  a2[2] = a1 * (*(float *)(result + 8) - *(float *)(off_1062BC3C + 8)) + *(float *)(off_1062BC3C + 8);
  return result;
}
