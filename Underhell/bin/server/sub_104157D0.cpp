char *__usercall sub_104157D0@<eax>(int a1@<edi>, float *a2, int a3, int a4, float a5)
{
  char *result; // eax
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  sub_10422540(a3, v6);
  result = sub_100E3960((int)"concussiveblast", a2, v6, a4);
  if ( result )
    return (char *)sub_104155D0((int)result, a1, a5);
  return result;
}
