int *sub_1022AAE0()
{
  if ( (dword_106C4334 & 1) == 0 )
  {
    dword_106C4334 |= 1u;
    dword_106C4318 = (int)"CSceneManager";
    dword_106C4320 = 0;
    dword_106C4324 = 0;
    dword_106C4328 = 0;
    dword_106C432C = 0;
    dword_106C4330 = 0;
    dword_106C431C = 13;
    atexit(sub_10473D80);
  }
  dword_10646BF4 = (int)&dword_1060F348;
  if ( (dword_106C4334 & 2) == 0 )
  {
    dword_106C4334 |= 2u;
    if ( (dword_106C4304 & 1) == 0 )
    {
      dword_106C4304 |= 1u;
      dword_106C4300 = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>,13>::`vftable';
    }
    dword_10647084 = (int)&dword_106C4300;
    dword_10647088 = 0;
    dword_1064708C = 0;
    dword_10647090 = 0;
    dword_10647094 = 0;
    dword_10647098 = 0;
    dword_1064709C = 0;
  }
  dword_10646BEC = 1;
  dword_10646BE8 = (int)asc_1064706C;
  return &dword_10646BE8;
}
