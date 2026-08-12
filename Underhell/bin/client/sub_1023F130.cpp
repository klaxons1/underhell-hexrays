int __thiscall sub_1023F130(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int result; // eax

  this[18] = 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA74 + 40))(dword_1047CA74);
  this[17] = v6;
  (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_1047CA70 + 4))(dword_1047CA70, v6, this);
  v7 = dword_1047CA70;
  v8 = *(_DWORD *)dword_1047CA70;
  v9 = (*(int (__thiscall **)(_DWORD *, int, int))*this)(this, a2, a3);
  (*(void (__thiscall **)(int, int))(v8 + 8))(v7, v9);
  v10 = dword_1047CA70;
  v11 = *(_DWORD *)dword_1047CA70;
  v12 = (*(int (__thiscall **)(_DWORD *, int, int))*this)(this, a4, a5);
  (*(void (__thiscall **)(int, int))(v11 + 16))(v10, v12);
  *((_WORD *)this + 40) |= 0x7DCu;
  *((_WORD *)this + 69) = 0;
  *((_WORD *)this + 68) = 0;
  *((_WORD *)this + 71) = 0;
  *((_WORD *)this + 70) = 0;
  *((_BYTE *)this + 150) = 0;
  this[36] = 2;
  this[19] = 0;
  this[33] = -1;
  *((float *)this + 40) = 255.0;
  *((_BYTE *)this + 151) = 0;
  this[38] = 0;
  *((_BYTE *)this + 156) = 0;
  *((_WORD *)this + 74) = 0;
  this[12] = 0;
  this[42] = 0;
  this[44] = -1;
  this[46] = -1;
  this[48] = -1;
  this[50] = -1;
  v13 = (_BYTE *)sub_100DDA40(92);
  if ( v13 )
    v14 = sub_1023E8F0(v13);
  else
    v14 = 0;
  this[16] = -1;
  v15 = this + 26;
  this[9] = v14;
  this[14] = 0;
  v16 = 16 * sub_1023CE50(this + 26, this[29]);
  *(_DWORD *)(v16 + *v15) = "fgcolor_override";
  *(_DWORD *)(*v15 + v16 + 4) = this + 31;
  *(_BYTE *)(*v15 + v16 + 12) = 0;
  result = 16 * sub_1023CE50(this + 26, this[29]);
  *(_DWORD *)(result + *v15) = "bgcolor_override";
  *(_DWORD *)(*v15 + result + 4) = this + 32;
  *(_BYTE *)(*v15 + result + 12) = 0;
  return result;
}
