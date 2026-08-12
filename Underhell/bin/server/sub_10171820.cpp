int __thiscall sub_10171820(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int result; // eax

  v5 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    v5 = 0;
  result = sub_102EC5A0(v5, 50.0, "SMG1", 0, (int)"HL2Player.PickupSMGAmmoBox");
  if ( result )
  {
    result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_106B3CDC + 348))(dword_106B3CDC, this);
    if ( result == 6 )
      return sub_1025FAC0(this);
  }
  return result;
}
