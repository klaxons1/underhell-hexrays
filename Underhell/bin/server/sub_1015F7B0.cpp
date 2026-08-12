void __thiscall sub_1015F7B0(void *this, int a2, int a3, int a4)
{
  const char *v4; // eax

  v4 = *(const char **)(a3 + 92);
  if ( !v4 )
    v4 = String;
  sub_1015EFA0((int)this, "CBaseGameStats::Event_PlayerKilledOther [%s] killed [%s]\n", (const char *)(a2 + 4296), v4);
}
