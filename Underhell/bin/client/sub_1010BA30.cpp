int __cdecl sub_1010BA30(float a1, float a2, float a3, float a4)
{
  int result; // eax

  if ( a2 * a1 * a3 < *(float *)(dword_10436DEC + 44)
                    * (*(float *)(dword_10436DEC + 44)
                     * *(float *)(dword_10436DEC + 44)) )
    return 3;
  result = 2;
  if ( a4 >= 8.0 )
    return 1;
  return result;
}
