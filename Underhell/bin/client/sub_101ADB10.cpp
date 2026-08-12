int sub_101ADB10()
{
  int result; // eax

  if ( (dword_1044EC50 & 1) != 0 )
    return dword_1044EC4C;
  dword_1044EC50 |= 1u;
  result = sub_10242580("CHudGrenadeAmmo");
  dword_1044EC4C = result;
  return result;
}
