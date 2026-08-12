char __thiscall sub_10207610(int this, char *String1, char *String)
{
  if ( String1 != "health" && _stricmp(String1, "health")
    || *(char **)(this + 92) == "prop_physics_override"
    || sub_100D6240((_DWORD *)this, "prop_physics_override")
    || *(char **)(this + 92) == "prop_dynamic_override"
    || sub_100D6240((_DWORD *)this, "prop_dynamic_override") )
  {
    return sub_100EBE90(this, String1, String);
  }
  else
  {
    return 1;
  }
}
