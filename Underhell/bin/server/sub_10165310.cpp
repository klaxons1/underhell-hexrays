int __thiscall sub_10165310(_DWORD *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)this[1042];
  *this = &CAI_BaseActor::`vftable';
  this[526] = &CAI_BaseActor::`vftable';
  this[905] = &CAI_BaseActor::`vftable';
  this[913] = &CAI_BaseActor::`vftable';
  if ( v2 )
  {
    sub_100AFD30(v2);
    sub_10184660(v2);
  }
  sub_102375F0(this + 947);
  sub_102375F0(this + 942);
  sub_102375F0(this + 937);
  sub_102375F0(this + 907);
  return sub_10037B80(this);
}
