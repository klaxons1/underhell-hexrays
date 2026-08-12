const char *__thiscall sub_103FA790(__int16 *this, int a2)
{
  const char *result; // eax

  if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
    return (const char *)sub_100D1020(this, a2);
  switch ( a2 )
  {
    case 0:
      result = "Weapon_MegaPhysCannon.DryFire";
      break;
    case 1:
      result = "Weapon_MegaPhysCannon.Launch";
      break;
    case 9:
      result = "Weapon_MegaPhysCannon.Drop";
      break;
    case 12:
      result = "Weapon_MegaPhysCannon.Pickup";
      break;
    default:
      result = (const char *)sub_100D1020(this, a2);
      break;
  }
  return result;
}
