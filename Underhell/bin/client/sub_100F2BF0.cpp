_DWORD *__userpurge sub_100F2BF0@<eax>(int a1@<ecx>, int a2@<esi>, int a3, float *a4, float a5, char a6)
{
  _DWORD *result; // eax

  result = sub_100F06D0(a1 + 8, a2, 60, a3);
  if ( !result )
    return 0;
  *((float *)result + 3) = *a4;
  *((float *)result + 4) = a4[1];
  *((float *)result + 5) = a4[2];
  *((float *)result + 3) = *a4;
  *((float *)result + 4) = a4[1];
  *((float *)result + 5) = a4[2];
  *((float *)result + 6) = 0.0;
  *((float *)result + 7) = 0.0;
  *((float *)result + 8) = 0.0;
  *((float *)result + 9) = 0.0;
  *((_BYTE *)result + 48) = 0;
  *((float *)result + 14) = 0.0;
  *(_DWORD *)((char *)result + 49) = -65536;
  *((float *)result + 11) = 0.0;
  *((_BYTE *)result + 54) = a6;
  *((_BYTE *)result + 53) = a6;
  *((float *)result + 10) = a5;
  *((_BYTE *)result + 55) = 0;
  return result;
}
