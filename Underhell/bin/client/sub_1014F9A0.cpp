char sub_1014F9A0()
{
  int *v0; // esi
  char result; // al

  v0 = (int *)sub_100B4090(&dword_1042FB78, "CHudWeaponSelection");
  result = sub_100B68D0(v0);
  if ( result )
    return (*(int (__thiscall **)(int *))(*v0 + 80))(v0);
  return result;
}
