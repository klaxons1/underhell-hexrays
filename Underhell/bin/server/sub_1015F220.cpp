void __thiscall sub_1015F220(void *this, const char *ArgList, char a3)
{
  const char *v3; // eax

  v3 = "in-game";
  if ( !a3 )
    v3 = "at console";
  sub_1015EFA0((int)this, "CBaseGameStats::Event_PreSaveGameLoaded [%s] %s\n", ArgList, v3);
}
