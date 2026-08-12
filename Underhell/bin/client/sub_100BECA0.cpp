int __cdecl sub_100BECA0(int a1)
{
  int result; // eax

  result = sub_100B4090(&dword_1042FB78, "CHudChat");
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 80))(result, a1);
  return result;
}
