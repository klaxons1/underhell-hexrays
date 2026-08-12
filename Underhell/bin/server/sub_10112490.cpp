int *__thiscall sub_10112490(int *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx

  sub_10170440(a2);
  this[3] = (int)&IPartitionQueryCallback::`vftable';
  *this = (int)&CDirtySpatialPartitionEntityList::`vftable';
  this[3] = (int)&CDirtySpatialPartitionEntityList::`vftable';
  if ( (((_BYTE)this + 16) & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  v3 = this + 6;
  this[4] = 0;
  this[5] = 0;
  if ( (((_BYTE)this + 24) & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
    v3 = this + 6;
  }
  *v3 = 0;
  v3[1] = 0;
  CThreadSpinRWLock::CThreadSpinRWLock((CThreadSpinRWLock *)(this + 8));
  CThreadLocalBase::CThreadLocalBase((CThreadLocalBase *)(this + 13));
  v4 = (_DWORD *)sub_100FE140(this + 4);
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_10184660(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  v6 = (_DWORD *)sub_100FE140(this + 6);
  if ( v6 )
  {
    do
    {
      v7 = (_DWORD *)*v6;
      sub_10184660(v6);
      v6 = v7;
    }
    while ( v7 );
  }
  CThreadLocalBase::Set((CThreadLocalBase *)(this + 13), 0);
  return this;
}
