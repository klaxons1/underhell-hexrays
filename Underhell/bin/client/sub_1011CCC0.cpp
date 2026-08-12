int *__stdcall sub_1011CCC0(int *a1)
{
  int *result; // eax

  result = (int *)*a1;
  if ( *a1 )
  {
    sub_10034930(*result);
    result = (int *)sub_10034930(*a1);
    *a1 = 0;
  }
  return result;
}
