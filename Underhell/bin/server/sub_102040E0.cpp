int *sub_102040E0()
{
  if ( (dword_106C1A60 & 1) == 0 )
  {
    dword_106C1A60 |= 1u;
    dword_106C1A44 = (int)"CPointProximitySensor";
    dword_106C1A4C = 0;
    dword_106C1A50 = 0;
    dword_106C1A54 = 0;
    dword_106C1A58 = 0;
    dword_106C1A5C = 0;
    dword_106C1A48 = 21;
    atexit(sub_10473850);
  }
  dword_106416F0 = (int)&dword_1060F348;
  if ( (dword_106C1A60 & 2) == 0 )
  {
    dword_106C1A60 |= 2u;
    dword_10641C14 = (int)off_10614A2C;
    dword_10641C18 = 0;
    dword_10641C1C = 0;
    dword_10641C20 = 0;
    dword_10641C24 = 0;
    dword_10641C28 = 0;
    dword_10641C2C = 0;
    word_10641C42 = 8;
    dword_10641C50 = 0;
    dword_10641C54 = 0;
    dword_10641C58 = 0;
    dword_10641C5C = 0;
    dword_10641C60 = 0;
    word_10641C76 = 8;
    dword_10641C84 = 0;
    dword_10641C88 = 0;
    dword_10641C8C = 0;
    dword_10641C90 = 0;
    dword_10641C94 = 0;
    word_10641CAA = 8;
    dword_10641C30 = 0;
    dword_10641C34 = (int)"InputEnable";
    dword_10641C38 = 0;
    dword_10641C3C = 0;
    word_10641C40 = 1;
    dword_10641C44 = (int)"Enable";
    dword_10641C48 = 0;
    dword_10641C4C = (int)sub_102037C0;
    dword_10641C64 = 0;
    dword_10641C68 = (int)"InputDisable";
    dword_10641C6C = 0;
    dword_10641C70 = 0;
    word_10641C74 = 1;
    dword_10641C78 = (int)"Disable";
    dword_10641C7C = 0;
    dword_10641C80 = (int)sub_10203110;
    dword_10641C98 = 0;
    dword_10641C9C = (int)"InputToggle";
    dword_10641CA0 = 0;
    dword_10641CA4 = 0;
    word_10641CA8 = 1;
    dword_10641CAC = (int)"Toggle";
    dword_10641CB0 = 0;
    dword_10641CB4 = (int)sub_10203810;
    dword_10641CB8 = 0;
    dword_10641CBC = 0;
    dword_10641CC0 = 0;
    dword_10641CC4 = 0;
    dword_10641CC8 = 0;
    dword_10641CCC = 2;
    dword_10641CD0 = (int)"InputSetTargetEntity";
    dword_10641CD4 = 0;
    dword_10641CD8 = 0;
    dword_10641CDC = 524289;
    dword_10641CE0 = (int)"SetTargetEntity";
    dword_10641CE4 = 0;
    dword_10641CE8 = (int)sub_10202FD0;
    dword_10641CEC = 0;
    dword_10641CF0 = 0;
    dword_10641CF4 = 0;
    dword_10641CF8 = 0;
    dword_10641CFC = 0;
  }
  dword_106416E8 = 7;
  dword_106416E4 = (int)&unk_10641B94;
  return &dword_106416E4;
}
