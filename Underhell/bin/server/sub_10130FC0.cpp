float *__thiscall sub_10130FC0(void *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  float *result; // eax
  float *v6; // esi

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  result = (float *)sub_1012BF20(&dword_1069E3E0, 0, v4, (int)this, *a2, a2[1], 0);
  v6 = result;
  if ( result )
  {
    if ( ((_DWORD)result[63] & 0x800) != 0 )
      sub_100DAE60((int)result);
    if ( ((_DWORD)v6[63] & 0x800) != 0 )
      sub_100DAE60((int)v6);
    return (float *)sub_10130A30((int)this, v6[145], v6[146], v6[147], v6[176], v6[177], v6[178]);
  }
  return result;
}
