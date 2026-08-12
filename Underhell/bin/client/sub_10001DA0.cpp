CWorkerThread *__thiscall sub_10001DA0(CWorkerThread *this, char a2)
{
  *(_DWORD *)this = &CAchievementSaveThread::`vftable';
  CWorkerThread::~CWorkerThread(this);
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
