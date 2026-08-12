int __thiscall sub_1017B6C0(int this)
{
  const char *v2; // eax
  int result; // eax
  const char *v4; // eax
  const char *v5; // esi
  int v6; // eax
  int v7; // [esp-4h] [ebp-8h]

  v2 = *(const char **)(this + 824);
  if ( !v2 )
    return sub_1025FAC0(this);
  result = _stricmp(v2, "super_phys_gun");
  if ( !result )
    result = sub_1023B8B0("RagdollBoogie.Zap");
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v4 = *(const char **)(this + 824);
    if ( !v4 )
      v4 = String;
    if ( sub_101679A0((int)v4) < 0 )
      sub_1017B330(*(char **)(this + 824), *(char **)(dword_106B31C8 + 60), *(_DWORD *)(this + 832));
    result = *(_DWORD *)(this + 836);
    if ( result )
    {
      v5 = *(const char **)(this + 824);
      if ( !v5 )
        v5 = String;
      v7 = result;
      v6 = sub_101679A0((int)v5);
      return sub_101678E0(v6, v7);
    }
  }
  return result;
}
