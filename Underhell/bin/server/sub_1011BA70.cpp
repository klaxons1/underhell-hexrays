int __cdecl sub_1011BA70(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8)
{
  int result; // eax

  result = dword_106B3200;
  if ( dword_106B3200 )
    return (*(int (__cdecl **)(int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)dword_106B3200 + 60))(
             dword_106B3200,
             a1,
             a2,
             LODWORD(a4),
             a5,
             a6,
             a7,
             a8,
             a3);
  return result;
}
