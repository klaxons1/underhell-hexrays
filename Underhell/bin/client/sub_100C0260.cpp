int sub_100C0260()
{
  int result; // eax

  result = sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
  if ( result )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10430988 + 92))(dword_10430988, 1, 1);
  return result;
}
