void __thiscall sub_1003B440(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  sub_100F7CF0(this);
  sub_100F88C0(this);
  sub_100F7510(this);
  if ( *((_BYTE *)this + 323) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 428))(this) )
  {
    v3 = this[41];
    sub_1012D820(&v3);
  }
  if ( *((_BYTE *)this + 1108) && sub_100422D0() )
  {
    v2 = (_DWORD *)sub_100422D0();
    sub_10013A10(v2, (int)this);
  }
  if ( this[41] != -1 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(this[3] + 8))(this + 3) != 0xFFFF )
      sub_10079F20(this[41]);
    sub_1009C130(this[41]);
    this[41] = -1;
  }
  sub_1008E480(this + 88);
  if ( this[20] != -1 )
    (*((void (__thiscall **)(void ***, _DWORD *))*off_103E773C[0] + 6))(off_103E773C[0], this);
  if ( *((_WORD *)this + 150) != 0xFFFF )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 16))(
      dword_10413160,
      *((unsigned __int16 *)this + 150));
    *((_WORD *)this + 150) = -1;
  }
  if ( *((_WORD *)this + 59) != 0xFFFF )
  {
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DCDDC + 4))(
      off_103DCDDC,
      *((unsigned __int16 *)this + 59));
    *((_WORD *)this + 59) = -1;
  }
  if ( *((_WORD *)this + 151) != 0xFFFF )
  {
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DD080 + 68))(
      off_103DD080,
      *((unsigned __int16 *)this + 151));
    *((_WORD *)this + 151) = -1;
  }
  sub_100396A0(this);
}
