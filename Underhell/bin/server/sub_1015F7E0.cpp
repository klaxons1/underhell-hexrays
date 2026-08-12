void __thiscall sub_1015F7E0(void *this, int a2, char a3, const char *a4)
{
  const char *v4; // eax

  v4 = "primary";
  if ( !a3 )
    v4 = "secondary";
  sub_1015EFA0((int)this, "CBaseGameStats::Event_WeaponFired [%s] %s weapon [%s]\n", (const char *)(a2 + 4296), v4, a4);
}
