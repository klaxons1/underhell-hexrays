void __thiscall sub_1015F740(void *this, int a2, int a3)
{
  const char *v3; // eax

  v3 = *(const char **)(a3 + 92);
  if ( !v3 )
    v3 = String;
  sub_1015EFA0((int)this, "CBaseGameStats::Event_FlippedVehicle [%s] flipped [%s]\n", (const char *)(a2 + 4296), v3);
}
