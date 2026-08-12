_BYTE *__thiscall sub_1009A900(_BYTE *this, char a2)
{
  bool v3; // zf
  _BYTE *v5; // [esp+4h] [ebp-4h] BYREF

  v3 = (this[36] & 0x10) == 0;
  *(_DWORD *)this = &CDetailModel::`vftable';
  *((_DWORD *)this + 1) = &CDetailModel::`vftable';
  if ( !v3 )
  {
    v5 = this;
    sub_1009A130((int)&off_103DDC60, (int *)&v5);
  }
  *(_DWORD *)this = &IHandleEntity::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
