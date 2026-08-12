int __thiscall sub_10112560(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  *this = (int)&CDirtySpatialPartitionEntityList::`vftable';
  this[3] = (int)&CDirtySpatialPartitionEntityList::`vftable';
  v2 = (_DWORD *)sub_100FE140(this + 4);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_10184660(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (_DWORD *)sub_100FE140(this + 6);
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
  CThreadLocalBase::~CThreadLocalBase((CThreadLocalBase *)(this + 13));
  sub_10112430(this + 4);
  return sub_10170140((int)this);
}
