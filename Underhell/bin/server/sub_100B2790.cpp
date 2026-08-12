const char *__stdcall sub_100B2790(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case -1:
      result = "None";
      break;
    case 0:
      result = "SQUAD_SLOT_ATTACK1";
      break;
    case 1:
      result = "SQUAD_SLOT_ATTACK2";
      break;
    case 2:
      result = "SQUAD_SLOT_INVESTIGATE_SOUND";
      break;
    case 3:
      result = "SQUAD_SLOT_EXCLUSIVE_HANDSIGN";
      break;
    case 4:
      result = "SQUAD_SLOT_EXCLUSIVE_RELOAD";
      break;
    case 5:
      result = "SQUAD_SLOT_PICKUP_WEAPON1";
      break;
    case 6:
      result = "SQUAD_SLOT_PICKUP_WEAPON2";
      break;
    case 7:
      result = "SQUAD_SLOT_SPECIAL_ATTACK";
      break;
    default:
      result = "Failed to specify!";
      break;
  }
  return result;
}
