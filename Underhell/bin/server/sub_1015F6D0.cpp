void __thiscall sub_1015F6D0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  if ( byte_106B4AC3 )
  {
    v2 = sub_10430F10(&dword_106B4A9C);
    v3 = sub_10162950(v2);
    ++*(_DWORD *)(v3 + 8);
  }
  sub_1015EFA0((int)this, "CBaseGameStats::Event_Commentary [%d]\n", ++this[4]);
}
