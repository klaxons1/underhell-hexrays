char __thiscall sub_102A6490(_DWORD *this)
{
  int v2; // eax
  int v4; // edi
  double v5; // st3
  double v6; // st1
  double v7; // st5
  double v8; // st1
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // ebx
  float v13; // [esp+8h] [ebp-7Ch]
  _DWORD v14[12]; // [esp+24h] [ebp-60h] BYREF
  float v15[3]; // [esp+54h] [ebp-30h] BYREF
  int v16[3]; // [esp+60h] [ebp-24h] BYREF
  int v17; // [esp+6Ch] [ebp-18h] BYREF
  float v18; // [esp+70h] [ebp-14h]
  int v19; // [esp+74h] [ebp-10h]
  float v20; // [esp+78h] [ebp-Ch]
  int v21; // [esp+7Ch] [ebp-8h] BYREF
  float v22; // [esp+80h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 336))(this, 1);
  if ( v2 == -1 )
    return 0;
  sub_102A11F0(this, v2);
  if ( !sub_1029F780(this, this[28], (float *)&v17, v15) )
  {
    sub_102A5850(this, (int)&v17);
    return 0;
  }
  v4 = this[1];
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  v5 = *(float *)(v4 + 588) - *(float *)&v19;
  v6 = *(float *)(v4 + 584) - v18;
  v7 = v6 * v6;
  v8 = *(float *)(v4 + 580) - *(float *)&v17;
  if ( v8 * v8 + v7 + v5 * v5 < 1296.0 )
    return 1;
  *(float *)&v14[8] = -1.0;
  *(float *)&v14[9] = -1.0;
  v14[1] = v17;
  *(float *)&v14[2] = v18;
  v14[3] = v19;
  v14[0] = 4;
  memset(&v14[4], 255, 16);
  v14[10] = 0;
  v14[11] = dword_1065F02C;
  if ( sub_102A2F70(this, (float *)&v17) )
  {
    v9 = sub_1026A890(this + 17);
    v10 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
    v16[0] = *v10;
    v16[1] = v10[1];
    v16[2] = v19;
    v22 = sub_102A3090(this, (float *)v16, (float *)&v17, &v21);
    v11 = sub_1026A890(this + 17);
    v20 = sub_10111020((float *)(v11 + 320));
    v12 = v21;
    if ( sub_1007ED50(*(_DWORD *)(this[1] + 2588), v21, v4, (int)&v17, (int)v16, v20, v22, 64.0, v21, 0) )
      goto LABEL_13;
    v13 = 360.0 - v22;
    if ( sub_1007ED50(*(_DWORD *)(this[1] + 2588), v12, v4, (int)&v17, (int)v16, v20, v13, 64.0, (_BYTE)v12 == 0, 0)
      || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(this[1] + 2588) + 20))(
           *(_DWORD *)(this[1] + 2588),
           v14,
           0) )
    {
      goto LABEL_13;
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(this[1] + 2588) + 20))(
           *(_DWORD *)(this[1] + 2588),
           v14,
           0) )
    {
LABEL_13:
      sub_1007DF50((int)v15);
      sub_1007DF90(64.0);
      return 1;
    }
    sub_102A5850(this, (int)&v17);
  }
  return 0;
}
