int sub_1044F6D0()
{
  CWorkerThread::CWorkerThread((CWorkerThread *)dword_106900D8);
  dword_106900D8[0] = (int)&CAchievementSaveThread::`vftable';
  dword_10690140 = 0;
  CThread::SetName((CThread *)dword_106900D8, "AchievementSaveThread");
  return atexit(sub_1046E6D0);
}
