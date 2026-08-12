void __thiscall sub_102CE460(unsigned int *this, unsigned int *a2, int a3, int a4, float a5)
{
  char *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  const char *v9; // esi

  if ( (this[62] & 0x20) != 0 && a2 && (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a2 + 320))(a2) )
  {
    if ( 2.0 == a5 && a4 == 2 )
    {
      (*(void (__thiscall **)(unsigned int *))(*this + 768))(this);
    }
    else if ( (unsigned __int8)sub_103E0CF0(a2) && a4 )
    {
      if ( !(unsigned __int8)sub_102DC130(this + 342) )
        goto LABEL_17;
      v6 = (char *)this[343];
      if ( v6 )
      {
        v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
        v8 = __RTDynamicCast(
               (int)v7,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseTrigger `RTTI Type Descriptor',
               0);
        sub_10019680(this + 342, v8);
      }
      if ( (unsigned __int8)sub_102DC130(this + 342) && (this[62] & 0x20) != 0 )
      {
        v9 = (const char *)this[65];
        if ( !v9 )
          v9 = String;
        Msg("ERROR: Couldn't find control volume for player-controllable func_tank %s.\n", v9);
      }
      else
      {
LABEL_17:
        sub_1026A890(this + 342);
        if ( sub_10257050((int)a2) )
        {
          if ( *((_BYTE *)this + 1381) )
            sub_102CAAA0((int)this);
          if ( (this[62] & 0x400) == 0 || !sub_102CA1F0(this) || sub_102CAB90(this) )
          {
            sub_101E6590(a2 + 851, (int)this);
            sub_102CD970((int)this, (int)a2);
          }
        }
      }
    }
    else
    {
      sub_102CDC40(this);
    }
  }
}
