char *__thiscall sub_100D5D60(_DWORD *this, char *Source, int a3)
{
  char **v4; // esi
  unsigned int v5; // kr00_4
  char *v6; // eax
  char *result; // eax

  v4 = (char **)sub_10184390(16);
  v5 = strlen(Source);
  v6 = (char *)sub_10184390(v5 + 1);
  *v4 = v6;
  sub_104299C0(v6, Source, v5 + 1);
  v4[1] = (char *)(int)((double)a3 + *(float *)(dword_106B31C8 + 12));
  result = (char *)(int)*(float *)(dword_106B31C8 + 12);
  v4[2] = result;
  v4[3] = (char *)this[60];
  this[60] = v4;
  return result;
}
