char *__thiscall sub_10021C00(_DWORD *this)
{
  const char *v1; // ebx
  char *result; // eax
  char *v3; // esi
  int v4; // eax
  int v5; // [esp-4h] [ebp-78h]
  char String[100]; // [esp+Ch] [ebp-68h] BYREF
  const char *v7; // [esp+70h] [ebp-4h]

  v1 = (const char *)this[638];
  if ( v1 )
  {
    v7 = (const char *)this[638];
  }
  else
  {
    v7 = ::String;
    v1 = ::String;
  }
  strcpy(String, v1);
  result = strtok(String, "0123456789");
  v3 = result;
  if ( result )
  {
    while ( 1 )
    {
      v5 = strstr(v1, v3)[strlen(v3)] - 48;
      v4 = sub_100BF520(v3);
      sub_100C1600(v4, v5);
      result = strtok(0, "0123456789");
      v3 = result;
      if ( !result )
        break;
      v1 = v7;
    }
  }
  return result;
}
