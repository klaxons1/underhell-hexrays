const char *__stdcall sub_1033D6B0(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 8:
      result = "SQUAD_SLOT_GRENADE1";
      break;
    case 9:
      result = "SQUAD_SLOT_GRENADE2";
      break;
    case 10:
      result = "SQUAD_SLOT_ATTACK_OCCLUDER";
      break;
    case 11:
      result = "SQUAD_SLOT_OVERWATCH";
      break;
    default:
      result = sub_100B2790(a1);
      break;
  }
  return result;
}
