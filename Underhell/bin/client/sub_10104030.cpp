float *__cdecl sub_10104030(char a1)
{
  int v1; // eax
  float *v3; // eax

  v1 = *(_DWORD *)(dword_1043627C + 48);
  if ( dword_104363D4 >= v1 && !a1 )
  {
    DevMsg("Warning! Client physic props overflow *max %i).\n", v1);
    return 0;
  }
  v3 = (float *)sub_10034900(0x808u);
  if ( !v3 )
    return 0;
  return sub_10103D30(v3);
}
