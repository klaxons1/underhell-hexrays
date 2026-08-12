int *sub_10259B30()
{
  if ( (dword_106C799C & 1) == 0 )
  {
    dword_106C799C |= 1u;
    dword_106C7980 = (int)"CTriggerGravity";
    dword_106C7988 = 0;
    dword_106C798C = 0;
    dword_106C7990 = 0;
    dword_106C7994 = 0;
    dword_106C7998 = 0;
    dword_106C7984 = 15;
    atexit(sub_104747E0);
  }
  dword_10651618 = (int)&dword_1065151C;
  if ( (dword_106C799C & 2) == 0 )
  {
    dword_106C799C |= 2u;
    dword_106C7950 = (int)sub_100390B0((char **)&dword_106C7980, "GravityTouch");
    dword_106C7954 = 0;
    dword_106C7958 = 0;
    dword_106C795C = 2097153;
    dword_106C7960 = 0;
    dword_106C7964 = 0;
    dword_106C7968 = (int)sub_10255240;
    dword_106C796C = 0;
    dword_106C7970 = 0;
    dword_106C7974 = 0;
    dword_106C7978 = 0;
    dword_106C797C = 0;
  }
  dword_10651610 = 1;
  dword_1065160C = (int)&unk_106C794C;
  return &dword_1065160C;
}
