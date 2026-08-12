// positive sp value has been detected, the output may be wrong!
double __fastcall rtforexpinf(char a1)
{
  if ( a1 )
    return 0.0;
  else
    return -0.0;
}
