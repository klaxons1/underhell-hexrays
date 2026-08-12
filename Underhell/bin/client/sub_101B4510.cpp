int sub_101B4510()
{
  int result; // eax

  result = sub_100B4090(&dword_1042FB78, "CHudSquadStatus");
  if ( result )
    *(_BYTE *)(result + 330) = 1;
  return result;
}
