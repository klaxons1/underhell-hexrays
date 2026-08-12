char *__cdecl sub_1025F2C0(void *a1)
{
  char *result; // eax
  int v2; // ecx

  memset(a1, 0, 0x54u);
  result = off_10653B84;
  *((float *)a1 + 11) = 1.0;
  v2 = dword_10653B88;
  *((float *)a1 + 14) = 0.0;
  *((_DWORD *)a1 + 15) = result;
  *((_DWORD *)a1 + 16) = v2;
  return result;
}
