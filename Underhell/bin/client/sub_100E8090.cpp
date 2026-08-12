_DWORD *__thiscall sub_100E8090(_DWORD *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // edx

  *this = &CPanelMetaClassMgrImp::`vftable';
  this[1] = 0;
  this[2] = 0;
  this[3] = 32;
  this[4] = 0;
  this[2] = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 512);
  v2 = this[2];
  this[5] = 0xFFFF;
  this[6] = -1;
  this[7] = v2;
  if ( !this[1] )
    this[1] = sub_10002020;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  v3 = this[9];
  this[12] = 0xFFFF;
  this[13] = -1;
  this[14] = v3;
  if ( !this[8] )
    this[8] = sub_10002020;
  this[15] = 0;
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  v4 = this[16];
  this[19] = 0xFFFF;
  this[20] = -1;
  this[21] = v4;
  if ( !this[15] )
    this[15] = sub_10002020;
  return this;
}
