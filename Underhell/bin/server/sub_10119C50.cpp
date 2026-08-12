int *sub_10119C50()
{
  if ( (dword_1069C420 & 1) == 0 )
  {
    dword_1069C420 |= 1u;
    dword_1069C404 = (int)"CCommentarySystem";
    dword_1069C40C = 0;
    dword_1069C410 = 0;
    dword_1069C414 = 0;
    dword_1069C418 = 0;
    dword_1069C41C = 0;
    dword_1069C408 = 17;
    atexit(sub_10470740);
  }
  dword_10615830 = 0;
  if ( (dword_1069C420 & 2) == 0 )
  {
    dword_1069C420 |= 2u;
    if ( (dword_1069C400 & 1) == 0 )
    {
      dword_1069C400 |= 1u;
      dword_1069C3FC = (int)&CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>,10>::`vftable';
    }
    dword_10615B70 = 0;
    dword_10615B74 = 0;
    dword_10615B78 = 0;
    dword_10615B7C = 0;
    dword_10615B80 = 0;
    dword_10615B68 = (int)&dword_1069C3FC;
    dword_10615B6C = 0;
    dword_10615B84 = 11;
    dword_10615B88 = (int)"m_hSpawnedEntities";
    dword_10615B8C = 60;
    dword_10615B90 = 0;
    word_10615B94 = 1;
    word_10615B96 = 2;
    dword_10615B98 = 0;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_10615BA4 = 0;
    flt_10615BE8 = 0.0;
    dword_10615BA8 = 0;
    flt_10615C1C = 0.0;
    dword_10615BAC = 0;
    flt_10615C50 = 0.0;
    dword_10615BB0 = 0;
    flt_10615C84 = 0.0;
    dword_10615BB4 = 0;
    dword_10615BB8 = 13;
    word_10615BC8 = 1;
    dword_10615BEC = 13;
    dword_10615C20 = 13;
    word_10615BFC = 1;
    word_10615BCA = 2;
    word_10615C30 = 1;
    word_10615BFE = 2;
    dword_10615B9C = (int)&dword_106950AC;
    dword_10615BA0 = 0;
    dword_10615BBC = (int)"m_hCurrentNode";
    dword_10615BC0 = 80;
    dword_10615BC4 = 0;
    dword_10615BCC = 0;
    dword_10615BD0 = 0;
    dword_10615BD4 = 0;
    dword_10615BD8 = 0;
    dword_10615BDC = 4;
    dword_10615BE0 = 0;
    dword_10615BE4 = 0;
    dword_10615BF0 = (int)"m_hActiveCommentaryNode";
    dword_10615BF4 = 84;
    dword_10615BF8 = 0;
    dword_10615C00 = 0;
    dword_10615C04 = 0;
    dword_10615C08 = 0;
    dword_10615C0C = 0;
    dword_10615C10 = 4;
    dword_10615C14 = 0;
    dword_10615C18 = 0;
    dword_10615C24 = (int)"m_hLastCommentaryNode";
    dword_10615C28 = 88;
    dword_10615C2C = 0;
    word_10615C32 = 2;
    dword_10615C34 = 0;
    dword_10615C38 = 0;
    dword_10615C3C = 0;
    dword_10615C40 = 0;
    dword_10615C44 = 4;
    dword_10615C48 = 0;
    dword_10615C4C = 0;
    dword_10615C54 = 5;
    dword_10615C58 = (int)"m_iCommentaryNodeCount";
    dword_10615C5C = 16;
    dword_10615C60 = 0;
    dword_10615C64 = 131073;
    dword_10615C68 = 0;
    dword_10615C6C = 0;
    dword_10615C70 = 0;
    dword_10615C74 = 0;
    dword_10615C78 = 4;
    dword_10615C7C = 0;
    dword_10615C80 = 0;
  }
  dword_10615828 = 9;
  dword_10615824 = (int)&unk_10615AB4;
  return &dword_10615824;
}
