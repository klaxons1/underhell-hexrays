void __thiscall sub_1015F590(void *this, float a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  const char *v6; // eax

  v3 = sub_10430F10(&dword_106B4A9C);
  v4 = sub_10162950(v3);
  v5 = (int)a2;
  *(_DWORD *)(v4 + 4) += v5;
  *(_DWORD *)(off_10627F88 + 12) += v5;
  v6 = (const char *)sub_10430F10(&dword_106B4A9C);
  sub_1015EFA0(
    (int)this,
    "CBaseGameStats::Event_LevelShutdown [%s] %.2f elapsed %d total\n",
    v6,
    a2,
    *(_DWORD *)(off_10627F88 + 12));
}
