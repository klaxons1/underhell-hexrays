void __thiscall sub_1015F620(void *this)
{
  const char *v2; // eax
  const char *v3; // [esp-4h] [ebp-8h]

  v3 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 376))(dword_106B31D0);
  v2 = (const char *)sub_10430F10(&dword_106B4A9C);
  sub_1015EFA0((int)this, "CBaseGameStats::Event_LoadGame [%s] from %s\n", v2, v3);
}
