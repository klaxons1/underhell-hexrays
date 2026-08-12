void __thiscall sub_1032F120(int this, int a2)
{
  int v3; // eax
  const char *v4; // eax

  sub_10027A60((_BYTE *)this, a2);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( !*(_BYTE *)(this + 3688) || (unsigned __int8)sub_10295530((void *)(this + 3652)) )
      return;
  }
  else
  {
    v3 = *(_DWORD *)(this + 908);
    if ( v3 == -1 )
      return;
    v4 = sub_100BE1F0(this, v3);
    if ( strncmp(v4, "slump", 5u) )
      return;
  }
  if ( *(_DWORD *)(dword_10698344 + 48)
    && (*(char **)(a2 + 92) == "prop_physics" || sub_100D6240((_DWORD *)a2, "prop_physics")) )
  {
    sub_10295E70(this + 3652);
  }
}
