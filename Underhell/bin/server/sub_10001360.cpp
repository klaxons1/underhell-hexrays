CWorkerThread *__thiscall sub_10001360(CWorkerThread *this, char a2)
{
  *(_DWORD *)this = &CAchievementSaveThread::`vftable';
  CWorkerThread::~CWorkerThread(this);
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
