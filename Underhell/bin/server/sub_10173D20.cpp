int *sub_10173D20()
{
  if ( (dword_106B5BD4 & 1) == 0 )
  {
    dword_106B5BD4 |= 1u;
    dword_106B5BB8 = (int)"CItemFMRadio";
    dword_106B5BC0 = 0;
    dword_106B5BC4 = 0;
    dword_106B5BC8 = 0;
    dword_106B5BCC = 0;
    dword_106B5BD0 = 0;
    dword_106B5BBC = 12;
    atexit(sub_10471E20);
  }
  dword_1062A194 = (int)&dword_1062B92C;
  dword_1062A18C = 5;
  dword_1062A188 = (int)&unk_1062A27C;
  return &dword_1062A188;
}
