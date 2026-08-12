const char *__cdecl sub_10065150(int a1)
{
  const char *result; // eax

  switch ( a1 )
  {
    case 0:
      result = "RESPONSE_NONE";
      break;
    case 1:
      result = "RESPONSE_SPEAK";
      break;
    case 2:
      result = "RESPONSE_SENTENCE";
      break;
    case 3:
      result = "RESPONSE_SCENE";
      break;
    case 4:
      result = "RESPONSE_RESPONSE";
      break;
    case 5:
      result = "RESPONSE_PRINT";
      break;
    default:
      result = "???AI_Response bogus index";
      break;
  }
  return result;
}
