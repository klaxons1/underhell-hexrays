int __thiscall sub_1005F830(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( this[452] == -1 )
    return 0;
  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v2 = (_DWORD *)this[485];
  if ( !v2 || !*v2 )
    v2 = 0;
  if ( 0.0 == ((double (__thiscall *)(_DWORD *, _DWORD *, _DWORD))*(_DWORD *)(*this + 684))(this, v2, this[452]) )
    return 0;
  else
    return sub_1021F310(this);
}
