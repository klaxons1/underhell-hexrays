int __stdcall sub_10295D50(int a1, const char *a2)
{
  void *v2; // eax

  v2 = (void *)__RTDynamicCast(
                 a1,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CAI_BaseNPC `RTTI Type Descriptor',
                 0);
  if ( v2 )
  {
    if ( sub_10295660(v2, &a1) )
    {
      return a1;
    }
    else
    {
      Msg("ai_goal_actbusy input %s fired on an NPC that doesn't support ActBusy behavior.\n", a2);
      return 0;
    }
  }
  else
  {
    Msg("ai_goal_actbusy input %s fired targeting an entity that isn't an NPC.\n", a2);
    return 0;
  }
}
