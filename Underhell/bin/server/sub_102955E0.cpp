void __thiscall sub_102955E0(_DWORD *this, int a2)
{
  const char *v3; // esi
  const char *v4; // eax

  if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
  {
    v3 = (const char *)this[23];
    if ( !v3 )
      v3 = String;
    v4 = sub_100D6390(this);
    Msg("ACTBUSY: Actbusy goal %s (%s) activated.\n", v3, v4);
  }
  sub_1006FA60(this, a2);
}
