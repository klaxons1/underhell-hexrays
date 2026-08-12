char __thiscall sub_10124960(int this, char *String1, char *String)
{
  char *v4; // edi
  char result; // al
  char *v6; // [esp-4h] [ebp-Ch]

  if ( String1 == "shootmodel" || !_stricmp(String1, "shootmodel") )
  {
    v4 = String;
    v6 = String;
    *(_BYTE *)(this + 857) = 0;
    *(_DWORD *)(this + 460) = *(_DWORD *)sub_10162BE0(&String, v6);
    sub_100D8500((_DWORD *)this);
    if ( sub_10429530(v4, ".vmt") )
    {
      *(_BYTE *)(this + 857) = 1;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else if ( String1 == "shootsounds" || !_stricmp(String1, "shootsounds") )
  {
    switch ( atoi(String) )
    {
      case 0:
        *(_DWORD *)(this + 808) = 0;
        result = 1;
        break;
      case 1:
        *(_DWORD *)(this + 808) = 1;
        result = 1;
        break;
      case 2:
        *(_DWORD *)(this + 808) = 2;
        result = 1;
        break;
      case 3:
        *(_DWORD *)(this + 808) = 3;
        result = 1;
        break;
      case 4:
        *(_DWORD *)(this + 808) = 8;
        result = 1;
        break;
      default:
        *(_DWORD *)(this + 808) = 10;
        return 1;
    }
  }
  else
  {
    return sub_100EBE90(this, String1, String);
  }
  return result;
}
