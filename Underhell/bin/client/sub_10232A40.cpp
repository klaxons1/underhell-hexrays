_DWORD *__cdecl sub_10232A40(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  char *v3; // edx
  int v4; // ecx
  _DWORD *result; // eax

  v2 = (a2[4] >> 3) & 0x3F;
  *((_BYTE *)a2 + v2 + 24) = 0x80;
  v3 = (char *)a2 + v2 + 25;
  if ( (unsigned int)(63 - v2) >= 8 )
  {
    memset(v3, 0, 63 - v2 - 8);
  }
  else
  {
    memset(v3, 0, 63 - v2);
    sub_10232300(a2 + 6, a2);
    memset(a2 + 6, 0, 0x38u);
  }
  v4 = a2[5];
  a2[20] = a2[4];
  a2[21] = v4;
  sub_10232300(a2 + 6, a2);
  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  *a2 = 0;
  return result;
}
