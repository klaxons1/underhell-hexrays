int __cdecl _freebuf(_DWORD *a1)
{
  int result; // eax

  result = a1[3];
  if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    sub_10184660(a1[2]);
    a1[3] &= 0xFFFFFBF7;
    result = 0;
    *a1 = 0;
    a1[2] = 0;
    a1[1] = 0;
  }
  return result;
}
