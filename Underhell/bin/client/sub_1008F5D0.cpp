int __thiscall sub_1008F5D0(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  *this = (int)&CDirtySpatialPartitionEntityList::`vftable';
  this[3] = (int)&CDirtySpatialPartitionEntityList::`vftable';
  v2 = (_DWORD *)sub_1001ACF0(this + 4);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_10034930((int)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (_DWORD *)sub_1001ACF0(this + 6);
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_10034930((int)v4);
      v4 = v5;
    }
    while ( v5 );
  }
  CThreadLocalBase::~CThreadLocalBase((CThreadLocalBase *)(this + 13));
  sub_1008F4A0(this + 4);
  return sub_100D3300((int)this);
}
