__int16 __thiscall sub_1008C300(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  unsigned __int16 v7; // ax
  int v8; // ebx
  int v9; // ecx
  bool v10; // zf
  _DWORD *v11; // ecx
  int v12; // esi
  float *v13; // eax
  int v14; // eax
  int v15; // edx
  _DWORD *v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]

  if ( (a3 & 1) == 0 )
  {
    v4 = sub_1007A730(off_103DCD78, a2);
    v5 = *(_DWORD *)dword_10413178;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
    if ( (*(int (__thiscall **)(int, int))(v5 + 36))(dword_10413178, v6) == 1 )
      a3 |= 0x40u;
  }
  v7 = sub_10086550(this + 9, 0);
  v8 = v7;
  sub_10089CD0((int)(this + 9), 0xFFFFu, v7);
  v9 = this[9];
  v10 = 168 * v8 + v9 == 0;
  v11 = (_DWORD *)(168 * v8 + v9);
  v17 = v11;
  if ( !v10 )
  {
    *v11 = -1;
    unknown_libname_2(v11 + 38);
    v17[40] = -1;
  }
  v12 = 168 * v8 + this[9];
  *(_DWORD *)v12 = a2;
  *(_WORD *)(v12 + 6) = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)off_103DCDDC + 76))(off_103DCDDC, v8, a3);
  *(_WORD *)(v12 + 8) = a3;
  *(_DWORD *)(v12 + 156) = -1;
  v13 = (float *)(*(int (__thiscall **)(int *))(*this + 120))(this);
  *(float *)(v12 + 84) = *v13;
  v18 = 0xFFFF;
  *(float *)(v12 + 88) = v13[1];
  *(float *)(v12 + 92) = v13[2];
  *(float *)(v12 + 120) = 3.4028235e38;
  *(float *)(v12 + 124) = 3.4028235e38;
  *(float *)(v12 + 128) = 3.4028235e38;
  *(float *)(v12 + 132) = 3.4028235e38;
  *(float *)(v12 + 136) = 3.4028235e38;
  *(float *)(v12 + 140) = 3.4028235e38;
  *(float *)(v12 + 144) = 3.4028235e38;
  *(float *)(v12 + 96) = 3.4028235e38;
  *(float *)(v12 + 100) = 3.4028235e38;
  *(float *)(v12 + 104) = 3.4028235e38;
  *(float *)(v12 + 108) = 3.4028235e38;
  *(float *)(v12 + 112) = 3.4028235e38;
  *(float *)(v12 + 116) = 3.4028235e38;
  v14 = this[5];
  v15 = v14;
  if ( *((_BYTE *)this + 208) && (a3 & 4) != 0 )
  {
    sub_1008C210((int)this, v8);
    v14 = this[6];
    v15 = this[7];
    v18 = v8;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v14 = this[6];
    v15 = this[7];
    v18 = v8;
  }
  *(_WORD *)(v12 + 4) = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1041318C + 76))(
                          dword_1041318C,
                          v14,
                          v15,
                          v18,
                          ((a3 & 1) != 0) + 1);
  return v8;
}
