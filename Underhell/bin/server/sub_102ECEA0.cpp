void __thiscall sub_102ECEA0(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi

  v5 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    v5 = 0;
  if ( sub_102EC5A0(v5, 12.0, "Buckshot", 0, (int)"HL2Player.PickupBuckShotAmmoBox") )
  {
    if ( (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_106B3CDC + 348))(dword_106B3CDC, this) == 6 )
      sub_1025FAC0((int)this);
  }
}
