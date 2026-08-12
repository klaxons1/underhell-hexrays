void __thiscall sub_10099300(int this)
{
  bool v2; // zf
  const char *v3; // eax
  const char *v4; // eax

  v2 = *(_DWORD *)(this + 804) == 0;
  *(_BYTE *)(this + 817) = 0;
  if ( v2 )
  {
    v3 = (const char *)sub_100D6390(this);
    DevWarning("ai_relationship '%s' with no subject specified, removing.\n", v3);
    sub_1025FAC0(this);
  }
  else if ( !*(_DWORD *)(this + 212) )
  {
    v4 = (const char *)sub_100D6390(this);
    DevWarning("ai_relationship '%s' with no target specified, removing.\n", v4);
    sub_1025FAC0(this);
  }
}
