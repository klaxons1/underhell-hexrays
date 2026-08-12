char __cdecl sub_1004BC70(void (*a1)(void), void (*a2)(void), _DWORD *a3)
{
  a1();
  if ( a3[1] != dword_10694898 )
  {
    a2();
    *(_BYTE *)a3 = 1;
    a3[1] = dword_10694898;
  }
  return *(_BYTE *)a3;
}
