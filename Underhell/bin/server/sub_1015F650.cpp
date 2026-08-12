void __thiscall sub_1015F650(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  const char *v6; // eax

  ++this[11];
  if ( byte_106B4AC3 )
  {
    v4 = sub_10430F10(&dword_106B4A9C);
    v5 = sub_10162950(v4);
    ++*(_DWORD *)(v5 + 36);
    v6 = (const char *)sub_10430F10(&dword_106B4A9C);
    sub_1015EFA0((int)this, "  Player died %dth time in level [%s]!!!\n", *(_DWORD *)(v5 + 36), v6);
  }
  else
  {
    sub_1015EFA0((int)this, "  Player died, but not in a level!!!\n");
  }
  sub_1015EFA0((int)this, "CBaseGameStats::Event_PlayerKilled [%s] [%dth death]\n", (const char *)(a2 + 4296), this[11]);
}
