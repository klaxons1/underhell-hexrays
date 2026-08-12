int sub_102B0CB0()
{
  CWorkerThread::CWorkerThread((CWorkerThread *)&Str[352]);
  *(_DWORD *)&Str[352] = &CAchievementSaveThread::`vftable';
  *(_DWORD *)&Str[456] = 0;
  CThread::SetName((CThread *)&Str[352], "AchievementSaveThread");
  return atexit(sub_102C7F70);
}
