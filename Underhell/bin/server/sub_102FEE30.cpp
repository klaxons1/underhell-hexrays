char __thiscall sub_102FEE30(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  _DWORD v9[7]; // [esp+4h] [ebp-5Ch] BYREF
  _BYTE v10[12]; // [esp+20h] [ebp-40h] BYREF
  float v11[3]; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD v12[3]; // [esp+38h] [ebp-28h] BYREF
  float v13[6]; // [esp+44h] [ebp-1Ch] BYREF
  int v14; // [esp+5Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 248) & 0x40000) != 0 )
  {
    sub_102FCBD0((float *)this);
  }
  else
  {
    v3 = dword_1066AAE0;
    if ( dword_1066AAE0 == -1 )
    {
      v3 = sub_100BEAD0(this, "Antlion.Body_Bone");
      dword_1066AAE0 = v3;
    }
    sub_100BEB30(this, v3, (int)v13, (int)v10);
    v13[3] = 0.0;
    v13[4] = 0.0;
    v13[5] = 0.0;
    sub_101AB000("AntlionGib", v13[0], v13[1], v13[2], 0.0, 0.0, 0.0, 0);
  }
  *(float *)v12 = flt_106F1CA8;
  *(float *)&v12[1] = flt_106F1CAC;
  *(float *)&v12[2] = flt_106F1CB0;
  v14 = sub_10219A30();
  v11[0] = (double)v14 * 0.000030518509 * 300.0 - 150.0;
  v14 = sub_10219A30();
  v11[1] = (double)v14 * 0.000030518509 * 300.0 - 150.0;
  v14 = sub_10219A30();
  v4 = *(_DWORD *)(this + 252) >> 11;
  v11[2] = (double)v14 * 0.000030518509 * 300.0 - 150.0;
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v10);
  *(float *)&v9[4] = 1.0;
  v9[0] = v5;
  *(float *)&v9[5] = 150.0;
  v9[1] = this + 704;
  v9[3] = v11;
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)this + 24);
  v9[2] = v12;
  v9[6] = 1;
  v7 = v6(this);
  sub_10216B90(v7, 0, (int)v9, (_DWORD *)this, -1, 1, 1);
  return 1;
}
