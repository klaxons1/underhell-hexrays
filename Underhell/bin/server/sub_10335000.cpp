int __thiscall sub_10335000(_DWORD *this)
{
  int v2; // edi
  float *v3; // eax
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int v10; // eax
  float *v11; // eax
  int (__thiscall *v12)(_DWORD *); // edx
  int v13; // edi
  int (__thiscall *v14)(_DWORD *, _BYTE *); // edx
  float *v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  int v22; // eax
  _BYTE v23[12]; // [esp+8h] [ebp-34h] BYREF
  _BYTE v24[12]; // [esp+14h] [ebp-28h] BYREF
  float v25; // [esp+20h] [ebp-1Ch] BYREF
  float v26; // [esp+24h] [ebp-18h]
  float v27; // [esp+28h] [ebp-14h]
  float v28; // [esp+2Ch] [ebp-10h]
  float v29; // [esp+30h] [ebp-Ch]
  float v30; // [esp+34h] [ebp-8h]
  float v31; // [esp+38h] [ebp-4h]

  if ( this[581] != 3 || !sub_10333FE0(this) || sub_10023D10(this, 23) )
    return 0;
  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  v3 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*this + 504))(this, &v25);
  v4 = *(float *)(v2 + 584) - v3[1];
  v5 = v4 * v4;
  v6 = *(float *)(v2 + 580) - *v3;
  v7 = v5;
  v8 = *(float *)(v2 + 588) - v3[2];
  v9 = v6 * v6 + v7 + v8 * v8;
  v31 = v9;
  if ( v9 < 2304.0 )
  {
    v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 536))(v10, v24);
    v28 = *v11 * 0.1;
    v29 = v11[1] * 0.1;
    v12 = *(int (__thiscall **)(_DWORD *))(*this + 368);
    v30 = 0.1 * v11[2];
    v13 = v12(this);
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(v13);
    v14 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 504);
    v25 = *(float *)(v13 + 580) + v28;
    v26 = *(float *)(v13 + 584) + v29;
    v27 = *(float *)(v13 + 588) + v30;
    v15 = (float *)v14(this, v23);
    v16 = v26 - v15[1];
    v17 = v16 * v16;
    v18 = v25 - *v15;
    v19 = v17;
    v20 = v27 - v15[2];
    if ( v18 * v18 + v19 + v20 * v20 < v31 )
      return 40;
  }
  v22 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 4);
  if ( v22 == 1 )
    return 24;
  if ( v22 == 2 )
    return 17;
  else
    return 0;
}
