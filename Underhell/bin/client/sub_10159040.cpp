int __usercall sub_10159040@<eax>(unsigned __int8 *a1@<edx>, unsigned __int8 *a2@<ecx>, _BYTE *a3@<esi>, float a4)
{
  double v4; // st7
  int result; // eax
  int v6; // [esp+14h] [ebp+8h]

  v4 = a4;
  *a3 = (int)((double)(*a2 - *a1) * a4 + (double)*a1);
  a3[1] = (int)((double)(a2[1] - a1[1]) * a4 + (double)a1[1]);
  v6 = a2[2] - a1[2];
  result = HIWORD(v6) | 0xC00;
  a3[2] = (int)(v4 * (double)v6 + (double)a1[2]);
  return result;
}
