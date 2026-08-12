int __thiscall sub_10026C70(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // edx
  int v16; // eax
  float *v17; // eax
  double v18; // st6
  float v19; // [esp+4h] [ebp-24h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+10h] [ebp-18h]
  float v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+1Ch] [ebp-Ch] BYREF
  float v25; // [esp+20h] [ebp-8h]
  float v26; // [esp+24h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v2 = sub_1007DB30(26);
  if ( v2 != -1 )
  {
    v3 = v2 - 1000000000;
    if ( v3 != -1 && ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0 )
      return 3;
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v4 = sub_1007DB30(10);
  if ( v4 != -1 )
  {
    v5 = v4 - 1000000000;
    if ( v5 != -1 && ((1 << (v5 & 0x1F)) & this[(v5 >> 5) + 548]) != 0 )
      return 3;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    return 3;
  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v6 = sub_1007DB30(17);
  if ( (v6 == -1 || (v7 = v6 - 1000000000, v7 == -1) || ((1 << (v7 & 0x1F)) & this[(v7 >> 5) + 548]) == 0)
    && !sub_10023D10(this, 18)
    && ((*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
     || (v8 = dword_106B31C8,
         (*(void (__thiscall **)(_DWORD *))(*this + 1868))(this),
         *(float *)(v8 + 12) - sub_10077680(800, 1) >= 3.0)) )
  {
    if ( sub_10023D10(this, 50) || sub_10023D10(this, 53) )
    {
      v10 = (*(int (__thiscall **)(_DWORD *, int))(*this + 1460))(this, 1048351);
      if ( v10 )
      {
        v11 = sub_1023CC80(v10, 0.0, 0.0);
        sub_10078690(v11, v19, v20);
      }
      return 2;
    }
    else
    {
      return 2 * ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1400))(this) != 0) - 1;
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    {
      v12 = sub_100217F0(this);
      v24 = *(int *)v12;
      v25 = *(float *)(v12 + 4);
      v13 = *(float *)(v12 + 8);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 1868))(this);
      v14 = sub_100773C0(800, 0);
      v15 = *this;
      if ( v14 )
      {
        (*(void (__thiscall **)(_DWORD *))(v15 + 1868))(this);
        v16 = sub_10077560(800);
        v24 = *(int *)v16;
        v25 = *(float *)(v16 + 4);
        v13 = *(float *)(v16 + 8);
      }
      else
      {
        v21 = flt_106B4F40 * 128.0;
        v22 = flt_106B4F44 * 128.0;
        v23 = 128.0 * flt_106B4F48;
        v17 = (float *)(*(int (__thiscall **)(_DWORD *))(v15 + 576))(this);
        v18 = v17[1] + v22;
        v13 = v17[2] + v23;
        *(float *)&v24 = *v17 + v21;
        v25 = v18;
      }
    }
    v26 = v13;
    sub_10078690((int)&v24, 0.0, 0.0);
    return 2;
  }
}
