void __cdecl sub_10083E60(_DWORD *a1)
{
  if ( *a1 == 1 )
  {
    Msg("Cutoff area %.2f\n", flt_1042C5A0);
  }
  else if ( *a1 == 2 )
  {
    flt_1042C5A0 = atof((const char *)a1[259]);
  }
}
