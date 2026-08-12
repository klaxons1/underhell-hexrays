int __thiscall sub_1013ED80(int this)
{
  if ( !*(_DWORD *)(this + 808) )
  {
    sub_10260680("_firesmoke", 0);
    if ( (*(_BYTE *)(this + 248) & 2) != 0 )
    {
      sub_101543E0("env_fire_tiny");
      sub_101543E0("env_fire_small");
      sub_101543E0("env_fire_medium");
      sub_101543E0("env_fire_large");
    }
    else
    {
      sub_101543E0("env_fire_tiny_smoke");
      sub_101543E0("env_fire_small_smoke");
      sub_101543E0("env_fire_medium_smoke");
      sub_101543E0("env_fire_large_smoke");
    }
  }
  if ( *(_DWORD *)(this + 808) == 1 )
    sub_10260680("_plasma", 0);
  return sub_1023B8B0("Fire.Plasma");
}
