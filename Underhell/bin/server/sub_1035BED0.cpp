int *__thiscall sub_1035BED0(int this, int a2)
{
  int *result; // eax
  char **v4; // ecx
  char *v5; // ebx
  float *v6; // esi

  result = (int *)a2;
  v4 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v4 = (char **)&a2;
  }
  v5 = *v4;
  if ( *v4 )
  {
    v6 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v5, 0, *result, result[1], 0);
    if ( v6 )
    {
      *(_WORD *)(this + 3788) = 256;
      if ( ((_DWORD)v6[63] & 0x800) != 0 )
        sub_100DAE60((int)v6);
      *(float *)(this + 3664) = v6[145];
      *(float *)(this + 3668) = v6[146];
      *(float *)(this + 3672) = v6[147];
      *(float *)(this + 3764) = 999.0;
      sub_10023CB0((char *)this, 25);
      a2 = -65537;
      return sub_100332F0((int *)(this + 248), &a2);
    }
    else
    {
      return (int *)Warning("Crane couldn't find entity named %s\n", v5);
    }
  }
  return result;
}
