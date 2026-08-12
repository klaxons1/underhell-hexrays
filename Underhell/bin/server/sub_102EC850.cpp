char __thiscall sub_102EC850(void *this, int a2)
{
  if ( !sub_102EC5A0(a2, 20.0, "Pistol", 0, (int)"BaseCombatCharacter.AmmoPickup") )
    return 0;
  if ( (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_106B3CDC + 348))(dword_106B3CDC, this) == 6 )
    sub_1025FAC0((int)this);
  return 1;
}
