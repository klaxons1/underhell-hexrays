char sub_1014FBD0()
{
  int v0; // esi
  char result; // al

  v0 = sub_100B4090(&dword_1042FB78, "CHudWeaponSelection");
  result = sub_100B68D0((int *)v0);
  if ( result )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 72))(v0);
    result = dword_1043CA1C;
    if ( *(int *)(dword_1043CA1C + 48) > 0 )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 104))(v0);
    *(float *)(v0 + 44) = *((float *)off_103DC81C + 3);
  }
  return result;
}
