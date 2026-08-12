int __cdecl sub_1011B9E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  int result; // eax

  if ( dword_106B3200 )
    return (*(int (__thiscall **)(int, int, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 4))(
             dword_106B3200,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             LODWORD(a9));
  return result;
}
