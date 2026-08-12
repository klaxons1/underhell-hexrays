char *sub_1014D240()
{
  char *result; // eax
  char *v1; // eax

  result = (char *)dword_1043C8E0;
  if ( !dword_1043C8E0 )
  {
    v1 = (char *)sub_100DDA40(10296);
    if ( v1 )
    {
      result = sub_1014D190(v1);
      dword_1043C8E0 = (int)result;
    }
    else
    {
      result = 0;
      dword_1043C8E0 = 0;
    }
  }
  return result;
}
