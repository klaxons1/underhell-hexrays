void __thiscall sub_1002FF10(_BYTE *this)
{
  _DWORD *v2; // eax

  if ( this[1938] )
    sub_1002FC40((int)this);
  if ( 0.0 != *((float *)off_103DC81C + 4) )
  {
    if ( !*((_DWORD *)this + 485) && (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this + 1) + 36))(this + 4) )
      sub_10026520((int)this);
    v2 = (_DWORD *)*((_DWORD *)this + 485);
    if ( !v2 || !*v2 )
      v2 = 0;
    (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)this + 636))(this, v2);
  }
  sub_100347C0(this);
  if ( *((_DWORD *)this + 452) != -1 && *((_DWORD *)this + 298) && this[84] != 23 )
    sub_10027340((int)this);
}
