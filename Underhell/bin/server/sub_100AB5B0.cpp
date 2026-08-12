int *sub_100AB5B0()
{
  int v0; // ecx

  if ( (dword_106950D0 & 1) == 0 )
  {
    dword_106950D0 |= 1u;
    dword_106950B4 = (int)"CAI_Senses";
    dword_106950BC = 0;
    dword_106950C0 = 0;
    dword_106950C4 = 0;
    dword_106950C8 = 0;
    dword_106950CC = 0;
    dword_106950B8 = 10;
    atexit(sub_1046F5A0);
  }
  dword_1060AFA4 = 0;
  if ( (dword_106950D0 & 2) == 0 )
  {
    v0 = dword_106950B0;
    dword_106950D0 |= 2u;
    if ( (dword_106950B0 & 1) == 0 )
    {
      v0 = dword_106950B0 | 1;
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_1060B19C = 0;
    dword_1060B1A0 = 0;
    dword_1060B1A4 = 0;
    dword_1060B1A8 = 0;
    dword_1060B1AC = 0;
    word_1060B1C0 = 1;
    dword_1060B194 = (int)&dword_106950AC;
    dword_1060B198 = 0;
    dword_1060B1B0 = 11;
    dword_1060B1B4 = (int)"m_SeenNPCs";
    dword_1060B1B8 = 44;
    dword_1060B1BC = 0;
    word_1060B1C2 = 2;
    dword_1060B1C4 = 0;
    if ( (v0 & 1) == 0 )
    {
      v0 |= 1u;
      dword_106950B0 = v0;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_1060B1D0 = 0;
    dword_1060B1D4 = 0;
    dword_1060B1D8 = 0;
    dword_1060B1DC = 0;
    dword_1060B1E0 = 0;
    word_1060B1F4 = 1;
    dword_1060B1C8 = (int)&dword_106950AC;
    dword_1060B1CC = 0;
    dword_1060B1E4 = 11;
    dword_1060B1E8 = (int)"m_SeenMisc";
    dword_1060B1EC = 64;
    dword_1060B1F0 = 0;
    word_1060B1F6 = 2;
    dword_1060B1F8 = 0;
    if ( (v0 & 1) == 0 )
    {
      dword_106950B0 = v0 | 1;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_1060B1FC = (int)&dword_106950AC;
    flt_1060B248 = 0.0;
    flt_1060B27C = 0.0;
    flt_1060B2B0 = 0.0;
    dword_1060B204 = 0;
    dword_1060B208 = 0;
    dword_1060B20C = 0;
    dword_1060B210 = 0;
    dword_1060B214 = 0;
    word_1060B25C = 1;
    dword_1060B200 = 0;
    dword_1060B218 = 16;
    dword_1060B21C = (int)"m_TimeLastLookHighPriority";
    dword_1060B220 = 96;
    dword_1060B224 = 0;
    dword_1060B228 = 131073;
    dword_1060B22C = 0;
    dword_1060B230 = 0;
    dword_1060B234 = 0;
    dword_1060B238 = 0;
    dword_1060B23C = 4;
    dword_1060B240 = 0;
    dword_1060B244 = 0;
    dword_1060B24C = 16;
    dword_1060B250 = (int)"m_TimeLastLookNPCs";
    dword_1060B254 = 100;
    dword_1060B258 = 0;
    word_1060B25E = 2;
    dword_1060B260 = 0;
    dword_1060B264 = 0;
    dword_1060B268 = 0;
    dword_1060B26C = 0;
    dword_1060B270 = 4;
    dword_1060B274 = 0;
    dword_1060B278 = 0;
    dword_1060B280 = 16;
    dword_1060B284 = (int)"m_TimeLastLookMisc";
    dword_1060B288 = 104;
    dword_1060B28C = 0;
    dword_1060B290 = 131073;
    dword_1060B294 = 0;
    dword_1060B298 = 0;
    dword_1060B29C = 0;
    dword_1060B2A0 = 0;
    dword_1060B2A4 = 4;
    dword_1060B2A8 = 0;
    dword_1060B2AC = 0;
  }
  dword_1060AF9C = 10;
  dword_1060AF98 = (int)&unk_1060B0AC;
  return &dword_1060AF98;
}
