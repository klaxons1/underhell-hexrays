_DWORD *__cdecl sub_101AE270(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100B4090(&dword_1042FB78, "CHudBattery");
  if ( result )
    return sub_101AE0D0(result - 95, a1);
  return result;
}
