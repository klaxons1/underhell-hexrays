void __thiscall sub_10067810(void *this)
{
  const char *v2; // eax
  const char *v3; // ecx

  if ( *((_DWORD *)this + 33) )
  {
    DevMsg("Search criteria:\n");
    sub_10067770(*((_DWORD **)this + 33));
  }
  if ( *((_BYTE *)this + 65) )
    DevMsg("Matched rule '%s', ", (const char *)this + 65);
  v2 = (const char *)*((_DWORD *)this + 40);
  if ( v2 )
  {
    v3 = "world";
    if ( !*((_BYTE *)this + 164) )
      v3 = "speaker";
    DevMsg("Contexts to set '%s' on %s, ", v2, v3);
  }
  switch ( *(_BYTE *)this )
  {
    case 0:
      DevMsg("response %s = '%s'\n", "RESPONSE_NONE", (const char *)this + 1);
      break;
    case 1:
      DevMsg("response %s = '%s'\n", "RESPONSE_SPEAK", (const char *)this + 1);
      break;
    case 2:
      DevMsg("response %s = '%s'\n", "RESPONSE_SENTENCE", (const char *)this + 1);
      break;
    case 3:
      DevMsg("response %s = '%s'\n", "RESPONSE_SCENE", (const char *)this + 1);
      break;
    case 4:
      DevMsg("response %s = '%s'\n", "RESPONSE_RESPONSE", (const char *)this + 1);
      break;
    case 5:
      DevMsg("response %s = '%s'\n", "RESPONSE_PRINT", (const char *)this + 1);
      break;
    default:
      DevMsg("response %s = '%s'\n", "???AI_Response bogus index", (const char *)this + 1);
      break;
  }
}
