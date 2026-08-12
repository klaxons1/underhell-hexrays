double __cdecl sub_10223E40(int a1)
{
  unsigned int v1; // esi
  unsigned int v3[3]; // [esp+4h] [ebp-10h] BYREF

  v1 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)dword_106B3210 + 28))(
         dword_106B3210,
         a1,
         v3) )
  {
    v1 = v3[0];
  }
  return (double)v1 * 0.001;
}
