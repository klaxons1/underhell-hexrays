char *__cdecl sub_100BA7A0(_DWORD *a1)
{
  if ( (a1[3] & 0x2000) == 0 )
    sub_100BA720(a1);
  return (char *)a1 + a1[7];
}
