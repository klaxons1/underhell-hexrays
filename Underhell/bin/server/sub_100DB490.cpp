char __cdecl sub_100DB490(int *a1)
{
  char result; // al
  float v2[3]; // [esp+0h] [ebp-Ch] BYREF

  if ( *a1 < 2 )
    return Msg("Format: ent_teleport <entity name>\n");
  result = sub_100DB2C0(a1, (int *)&a1, v2, 0);
  if ( result )
    return (*(int (__thiscall **)(int *, float *, _DWORD, _DWORD))(*a1 + 416))(a1, v2, 0, 0);
  return result;
}
