int *sub_10241360()
{
  char *v0; // eax

  if ( (dword_106C5360 & 1) == 0 )
  {
    dword_106C5360 |= 1u;
    dword_106C5344 = (int)"CTriggerSoundscape";
    dword_106C534C = 0;
    dword_106C5350 = 0;
    dword_106C5354 = 0;
    dword_106C5358 = 0;
    dword_106C535C = 0;
    dword_106C5348 = 18;
    atexit(sub_10474130);
  }
  dword_1064D334 = (int)&dword_1065151C;
  if ( (dword_106C5360 & 2) == 0 )
  {
    dword_106C5360 |= 2u;
    v0 = sub_100390B0((char **)&dword_106C5344, "PlayerUpdateThink");
    flt_106C52D8 = 0.0;
    dword_106C5278 = (int)v0;
    flt_106C530C = 0.0;
    dword_106C527C = 0;
    dword_106C5280 = 0;
    dword_106C5284 = 2097153;
    dword_106C5288 = 0;
    dword_106C528C = 0;
    dword_106C5290 = (int)sub_10241160;
    dword_106C5294 = 0;
    dword_106C5298 = 0;
    dword_106C529C = 0;
    dword_106C52A0 = 0;
    dword_106C52A4 = 0;
    dword_106C52A8 = 2;
    dword_106C52AC = (int)"m_SoundscapeName";
    dword_106C52B0 = 1096;
    dword_106C52B4 = 0;
    dword_106C52B8 = 393217;
    dword_106C52BC = (int)"soundscape";
    dword_106C52C0 = 0;
    dword_106C52C4 = 0;
    dword_106C52C8 = 0;
    dword_106C52CC = 4;
    dword_106C52D0 = 0;
    dword_106C52D4 = 0;
    dword_106C52DC = 13;
    dword_106C52E0 = (int)"m_hSoundscape";
    dword_106C52E4 = 1092;
    dword_106C52E8 = 0;
    word_106C52EC = 1;
    word_106C52EE = 2;
    dword_106C52F0 = 0;
    dword_106C52F4 = 0;
    dword_106C52F8 = 0;
    dword_106C52FC = 0;
    dword_106C5300 = 4;
    dword_106C5304 = 0;
    dword_106C5308 = 0;
    dword_106C5310 = 11;
    dword_106C5314 = (int)"m_spectators";
    dword_106C5318 = 1100;
    dword_106C531C = 0;
    dword_106C5320 = 131073;
    dword_106C5324 = 0;
    if ( (dword_106C51A8 & 1) == 0 )
    {
      dword_106C51A8 |= 1u;
      dword_106C51A4 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::`vftable';
    }
    dword_106C5328 = (int)&dword_106C51A4;
    dword_106C532C = 0;
    dword_106C5330 = 0;
    dword_106C5334 = 0;
    dword_106C5338 = 0;
    dword_106C533C = 0;
    dword_106C5340 = 0;
  }
  dword_1064D32C = 4;
  dword_1064D328 = (int)&unk_106C5274;
  return &dword_1064D328;
}
