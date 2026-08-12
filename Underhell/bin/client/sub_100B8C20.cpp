int __cdecl sub_100B8C20(const unsigned __int16 *a1)
{
  unsigned int v1; // kr00_4
  int result; // eax
  const unsigned __int16 *v3; // ecx
  unsigned __int16 v4; // dx

  v1 = wcslen(a1);
  result = sub_100DDA40((unsigned __int64)(v1 + 1) >> 31 != 0 ? -1 : 2 * (v1 + 1));
  v3 = a1;
  do
  {
    v4 = *v3;
    *(const unsigned __int16 *)((char *)v3 + result - (_DWORD)a1) = *v3;
    ++v3;
  }
  while ( v4 );
  return result;
}
