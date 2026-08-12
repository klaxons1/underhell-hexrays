void __thiscall sub_1015F820(void *this, int a2, char a3, const char *a4, int a5)
{
  const char *v5; // eax

  v5 = "primary";
  if ( !a3 )
    v5 = "secondary";
  sub_1015EFA0(
    (int)this,
    "CBaseGameStats::Event_WeaponHit [%s] %s weapon [%s] damage [%f]\n",
    (const char *)(a2 + 4296),
    v5,
    a4,
    *(float *)(a5 + 52));
}
