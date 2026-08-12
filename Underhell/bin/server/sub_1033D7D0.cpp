void __thiscall sub_1033D7D0(int this)
{
  int v2; // eax

  if ( *(_BYTE *)(this + 4960) )
  {
    if ( !sub_100CF460((_DWORD *)this)
      || (v2 = sub_100CF460((_DWORD *)this), *(char **)(v2 + 92) != "weapon_ar2")
      && !sub_100D6240((_DWORD *)v2, "weapon_ar2") )
    {
      DevWarning("**Combine Elite Soldier MUST be equipped with AR2\n");
    }
  }
}
