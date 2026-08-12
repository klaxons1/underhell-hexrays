bool __cdecl sub_100904A0(float *a1, float *a2, float *a3)
{
  return *a3 >= (double)*a1
      && *a2 <= (double)*a1
      && a3[1] >= (double)a1[1]
      && a2[1] <= (double)a1[1]
      && a3[2] >= (double)a1[2]
      && a2[2] <= (double)a1[2];
}
