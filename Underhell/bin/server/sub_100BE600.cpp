double __thiscall sub_100BE600(_DWORD *this, int a2, int a3)
{
  const char *v4; // eax

  if ( a2 )
  {
    if ( (unsigned __int8)sub_10245FE0(a2) )
    {
      if ( a3 < sub_10245270(a2) && a3 >= 0 )
        return sub_10100710(a2, a3, this + 228);
      DevWarning(2, "CBaseAnimating::SequenceDuration( %d ) out of range\n", a3);
    }
    return 0.1;
  }
  else
  {
    v4 = (const char *)this[23];
    if ( !v4 )
      v4 = String;
    DevWarning(2, "CBaseAnimating::SequenceDuration( %d ) NULL pstudiohdr on %s!\n", a3, v4);
    return 0.1;
  }
}
