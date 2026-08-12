int __cdecl sub_1011BAD0(float a1, float a2, int a3, int a4, int a5, int a6, int a7, float a8)
{
  int result; // eax

  if ( dword_106B3200 )
    return (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, int, int, int))(*(_DWORD *)dword_106B3200 + 24))(
             dword_106B3200,
             LODWORD(a1),
             LODWORD(a2),
             LODWORD(a8),
             a4,
             a5,
             a6,
             a7,
             a3);
  return result;
}
