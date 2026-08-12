const char *__stdcall sub_102D9570(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 0:
      result = "CLASS_NONE";
      break;
    case 1:
      result = "CLASS_PLAYER";
      break;
    case 4:
      result = "CLASS_ANTLION";
      break;
    case 5:
      result = "CLASS_BARNACLE";
      break;
    case 6:
      result = "CLASS_BULLSEYE";
      break;
    case 7:
      result = "CLASS_CITIZEN_PASSIVE";
      break;
    case 8:
      result = "CLASS_CITIZEN_REBEL";
      break;
    case 9:
      result = "CLASS_COMBINE";
      break;
    case 10:
      result = "CLASS_COMBINE_GUNSHIP";
      break;
    case 11:
      result = "CLASS_CONSCRIPT";
      break;
    case 12:
      result = "CLASS_HEADCRAB";
      break;
    case 13:
      result = "CLASS_MANHACK";
      break;
    case 14:
      result = "CLASS_METROPOLICE";
      break;
    case 15:
      result = "CLASS_MILITARY";
      break;
    case 16:
      result = "CLASS_SCANNER";
      break;
    case 17:
      result = "CLASS_STALKER";
      break;
    case 18:
      result = "CLASS_VORTIGAUNT";
      break;
    case 19:
      result = "CLASS_ZOMBIE";
      break;
    case 20:
      result = "CLASS_PROTOSNIPER";
      break;
    case 21:
      result = "CLASS_MISSILE";
      break;
    case 22:
      result = "CLASS_FLARE";
      break;
    case 23:
      result = "CLASS_EARTH_FAUNA";
      break;
    case 25:
      result = "CLASS_COMBINE_HUNTER";
      break;
    default:
      result = "MISSING CLASS in ClassifyText()";
      break;
  }
  return result;
}
