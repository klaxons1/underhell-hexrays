bool __cdecl sub_101133F0(float *a1, float *a2, float *a3, float *a4)
{
  return *a4 >= (double)*a1
      && *a3 <= (double)*a2
      && a4[1] >= (double)a1[1]
      && a3[1] <= (double)a2[1]
      && a4[2] >= (double)a1[2]
      && a3[2] <= (double)a2[2];
}
