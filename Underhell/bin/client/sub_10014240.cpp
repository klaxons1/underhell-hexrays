_DWORD *__thiscall sub_10014240(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // ecx
  _DWORD *v11; // eax

  if ( a8 && this )
    v10 = this + 10;
  else
    v10 = 0;
  if ( this )
    v11 = this + 9;
  else
    v11 = 0;
  sub_10228C20(a3, v11, a6, a7, v10);
  this[9] = &ICommandCallback::`vftable';
  this[10] = &ICommandCompletionCallback::`vftable';
  this[11] = a2;
  this[12] = a4;
  this[13] = a5;
  *this = &CConCommandMemberAccessor<CBasePresence>::`vftable';
  this[9] = &CConCommandMemberAccessor<CBasePresence>::`vftable';
  this[10] = &CConCommandMemberAccessor<CBasePresence>::`vftable';
  this[14] = a8;
  this[15] = a9;
  return this;
}
