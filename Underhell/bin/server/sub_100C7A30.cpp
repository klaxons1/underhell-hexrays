int __thiscall sub_100C7A30(void *this, int a2, char *String1, int a4)
{
  int *v5; // eax
  int v6; // eax

  v5 = (int *)sub_102D9B20();
  v6 = sub_100B9D10(v5, String1);
  if ( v6 != -1 )
    return (*(int (__thiscall **)(void *, int, int, int, const char *))(*(_DWORD *)this + 928))(
             this,
             a2,
             v6,
             a4,
             "BaseCombatCharacter.AmmoPickup");
  Msg("ERROR: Attempting to give unknown ammo type (%s)\n", String1);
  return 0;
}
