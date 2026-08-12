void __thiscall sub_10114150(_DWORD *this, int a2, char *String1, char *String)
{
  if ( !_stricmp(String1, "animfrictionmin") )
  {
    *(_DWORD *)(this[1] + 696) = atoi(String);
  }
  else if ( !_stricmp(String1, "animfrictionmax") )
  {
    *(_DWORD *)(this[1] + 700) = atoi(String);
  }
  else if ( !_stricmp(String1, "animfrictiontimein") )
  {
    *(float *)(this[1] + 684) = atof(String);
  }
  else if ( !_stricmp(String1, "animfrictiontimeout") )
  {
    *(float *)(this[1] + 688) = atof(String);
  }
  else if ( !_stricmp(String1, "animfrictiontimehold") )
  {
    *(float *)(this[1] + 692) = atof(String);
  }
}
