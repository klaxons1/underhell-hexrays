_DWORD *__thiscall sub_1022DE80(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // edx
  unsigned __int16 v5; // ax
  int v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // ax
  int v9; // ebx
  int v10; // eax
  unsigned __int16 v11; // ax
  int v12; // ebx
  int v13; // eax

  *this = &CDataManagerBase::`vftable';
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  *((_WORD *)this + 22) = -1;
  v3 = this[6];
  this[10] = 0xFFFF;
  this[9] = -1;
  this[12] = v3;
  v4 = this[3];
  this[14] = 0xFFFF;
  *((_WORD *)this + 30) = 0;
  this[13] = 0;
  this[16] = v4;
  this[1] = a2;
  this[2] = 0;
  v5 = sub_100849E0(this + 6, 0);
  v6 = v5;
  sub_1022D780((int)(this + 6), 0xFFFFu, v5);
  v7 = 10 * v6;
  *(_WORD *)(this[6] + v7 + 2) = -1;
  *(_WORD *)(v7 + this[6]) = -1;
  *(_WORD *)(this[6] + v7 + 4) = 0;
  *((_WORD *)this + 34) = v6;
  v8 = sub_100849E0(this + 6, 0);
  v9 = v8;
  sub_1022D780((int)(this + 6), 0xFFFFu, v8);
  v10 = 10 * v9;
  *(_WORD *)(this[6] + v10 + 2) = -1;
  *(_WORD *)(v10 + this[6]) = -1;
  *(_WORD *)(this[6] + v10 + 4) = 0;
  *((_WORD *)this + 35) = v9;
  v11 = sub_100849E0(this + 6, 0);
  v12 = v11;
  sub_1022D780((int)(this + 6), 0xFFFFu, v11);
  v13 = 10 * v12;
  *(_WORD *)(this[6] + v13 + 2) = -1;
  *(_WORD *)(v13 + this[6]) = -1;
  *(_WORD *)(this[6] + v13 + 4) = 0;
  *((_WORD *)this + 37) &= ~1u;
  *((_WORD *)this + 36) = v12;
  return this;
}
