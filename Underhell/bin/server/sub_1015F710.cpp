void __thiscall sub_1015F710(void *this, int a2)
{
  const char *v2; // eax

  v2 = *(const char **)(a2 + 92);
  if ( !v2 )
    v2 = String;
  sub_1015EFA0((int)this, "CBaseGameStats::Event_Punted [%s]\n", v2);
}
