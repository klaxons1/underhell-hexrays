int __stdcall sub_101A4E30(char a1)
{
  float v2; // [esp+0h] [ebp-8h]

  v2 = 0.0;
  if ( a1 )
    return sub_1023C380((int)"NPC_Butcher.FootstepRight", v2, 0);
  else
    return sub_1023C380((int)"NPC_Butcher.FootstepLeft", v2, 0);
}
