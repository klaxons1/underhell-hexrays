int __cdecl sub_100FBD30(int a1, int a2, int a3, float *a4)
{
  int result; // eax

  if ( (*(_DWORD *)(a2 + 248) & 0x400) == 0 )
    return sub_100D99A0(a1, (float *)a2, a3, a4);
  *a4 = (double)(unsigned __int16)(int)(*(float *)(a2 + 872) * 182.04445) * 0.0054931641;
  a4[1] = (double)(unsigned __int16)(int)(*(float *)(a2 + 876) * 182.04445) * 0.0054931641;
  result = (unsigned __int16)(int)(182.04445 * *(float *)(a2 + 880));
  a4[2] = 0.0054931641 * (double)result;
  return result;
}
