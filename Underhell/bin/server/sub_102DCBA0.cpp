char __thiscall sub_102DCBA0(int *this, int a2)
{
  if ( *(char **)(a2 + 92) != "weapon_stunstick" && !sub_100D6240((_DWORD *)a2, "weapon_stunstick") )
    return sub_1015E240(a2);
  if ( sub_102DC450(this, 0.5, (int)"ItemBattery.Touch", 100) )
    sub_1025FAC0(a2);
  return 0;
}
