int __stdcall sub_1022A110(int a1, _DWORD *a2)
{
  int result; // eax
  unsigned __int16 i; // si
  char *v4; // eax

  result = sub_10228D20((int)a2);
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v4 = (char *)sub_1042EE50(*(_WORD *)(a2[1] + 16 * i + 8));
    sub_1023AFF0(v4);
    result = sub_10228DF0(a2, i);
  }
  return result;
}
