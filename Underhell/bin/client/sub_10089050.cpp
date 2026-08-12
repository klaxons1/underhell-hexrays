int __cdecl sub_10089050(int *a1)
{
  int result; // eax

  result = *a1;
  if ( *a1 == 1 )
    return Msg("Shadow distance %.2f\n", flt_1042C59C);
  if ( result == 2 )
  {
    flt_1042C59C = atof((const char *)a1[259]);
    return sub_10086FF0(&dword_1042C4C8);
  }
  return result;
}
