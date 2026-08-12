int __cdecl sub_102159E0(float a1, float a2, float a3, float a4)
{
  int result; // eax

  if ( a2 * a1 * a3 < *(float *)(dword_106C290C + 44)
                    * (*(float *)(dword_106C290C + 44)
                     * *(float *)(dword_106C290C + 44)) )
    return 3;
  result = 2;
  if ( a4 >= 8.0 )
    return 1;
  return result;
}
