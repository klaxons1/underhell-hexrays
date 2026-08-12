int __cdecl sub_1013B560(int a1, int a2, int a3, int a4, char a5, int a6)
{
  int result; // eax

  result = ((int (__thiscall *)(int (__stdcall ***)(char), int, int, int, int))(*off_1061B7A0)[3])(
             off_1061B7A0,
             a2,
             a3,
             a4,
             a6);
  if ( a5 )
    return sub_1023C380((int)"DoSpark", 0.0, 0);
  return result;
}
