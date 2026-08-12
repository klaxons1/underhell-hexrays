_BYTE *__cdecl sub_101C09C0(_BYTE *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax

  for ( result = a1; result < &a1[a3]; a2 += 4 )
  {
    *a2 = *result;
    a2[1] = *result;
    a2[2] = *result;
    a2[3] = -1;
    ++result;
  }
  return result;
}
