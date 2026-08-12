void __thiscall sub_102B0D10(_DWORD *this)
{
  if ( this[351] == 1 )
  {
    this[351] = 2;
  }
  else if ( this[351] == 2 )
  {
    this[351] = 1;
    sub_1023C380(this, (int)"Weapon_Pistol.Empty", 0.0, 0);
    return;
  }
  sub_1023C380(this, (int)"Weapon_Pistol.Empty", 0.0, 0);
}
