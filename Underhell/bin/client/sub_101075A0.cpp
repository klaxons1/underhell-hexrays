_DWORD *__thiscall sub_101075A0(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax

  *this = &CPoseDebuggerImpl::`vftable';
  this[1] = sub_100FACE0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v2 = this[2];
  this[5] = 0xFFFF;
  this[6] = -1;
  this[7] = v2;
  this[8] = sub_100FACE0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  v3 = this[9];
  this[12] = 0xFFFF;
  this[13] = -1;
  this[14] = v3;
  this[15] = 0;
  if ( this != (_DWORD *)-64 )
    memset(this + 16, 0, 0x100u);
  this[80] = 0;
  if ( this != (_DWORD *)-64 )
    memset(this + 16, 255, 0x100u);
  return this;
}
