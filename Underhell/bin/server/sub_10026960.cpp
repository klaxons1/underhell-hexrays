int __thiscall sub_10026960(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // eax
  float *v21; // eax
  double v22; // st6
  float v23; // [esp+4h] [ebp-2Ch]
  float v24; // [esp+8h] [ebp-28h]
  int v25; // [esp+Ch] [ebp-24h]
  float v26; // [esp+18h] [ebp-18h]
  float v27; // [esp+1Ch] [ebp-14h]
  float v28; // [esp+20h] [ebp-10h]
  int v29; // [esp+24h] [ebp-Ch] BYREF
  float v30; // [esp+28h] [ebp-8h]
  float v31; // [esp+2Ch] [ebp-4h]

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
  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v6 = sub_1007DB30(17);
  if ( (v6 == -1 || (v7 = v6 - 1000000000, v7 == -1) || ((1 << (v7 & 0x1F)) & this[(v7 >> 5) + 548]) == 0)
    && (((*(void (__thiscall **)(_DWORD *))(*this + 2160))(this), v8 = sub_1007DB30(18), v8 == -1)
     || (v9 = v8 - 1000000000, v9 == -1)
     || ((1 << (v9 & 0x1F)) & this[(v9 >> 5) + 548]) == 0)
    && ((*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
     || (v10 = dword_106B31C8,
         (*(void (__thiscall **)(_DWORD *))(*this + 1868))(this),
         *(float *)(v10 + 12) - sub_10077680(800, 1) >= 3.0)) )
  {
    if ( !sub_10023D10(this, 50)
      && !sub_10023D10(this, 53)
      && !sub_10023D10(this, 54)
      && !sub_10023D10(this, 55)
      && !sub_10023D10(this, 51)
      && !sub_10023D10(this, 56) )
    {
      return sub_10023FE0(this, 37) ? 2 : -1;
    }
    v11 = (*(int (__thiscall **)(_DWORD *, int))(*this + 1460))(this, 1048351);
    v12 = v11;
    if ( !v11 )
      return sub_10023FE0(this, 37) ? 2 : -1;
    v13 = sub_1023CC80(v11, 0.0, 0.0);
    sub_10078690(v13, v23, v24);
    if ( (*(_BYTE *)(v12 + 16) & 0x19) == 0 )
      return sub_10023FE0(this, 37) ? 2 : -1;
  }
  else
  {
    v15 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) == 0;
    v16 = *this;
    if ( v15 )
    {
      (*(void (__thiscall **)(_DWORD *))(v16 + 1868))(this);
      v15 = sub_100773C0(800, 0) == 0;
      v19 = *this;
      if ( v15 )
      {
        v26 = flt_106B4F40 * 128.0;
        v27 = flt_106B4F44 * 128.0;
        v28 = 128.0 * flt_106B4F48;
        v21 = (float *)(*(int (__thiscall **)(_DWORD *))(v19 + 576))(this);
        v22 = v21[1] + v27;
        v18 = v21[2] + v28;
        *(float *)&v29 = *v21 + v26;
        v30 = v22;
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *))(v19 + 1868))(this);
        v20 = sub_10077560(800);
        v29 = *(int *)v20;
        v30 = *(float *)(v20 + 4);
        v18 = *(float *)(v20 + 8);
      }
    }
    else
    {
      v25 = (*(int (__thiscall **)(_DWORD *))(v16 + 364))(this);
      (*(void (__thiscall **)(_DWORD *))(*this + 1868))(this);
      v17 = sub_10077560(v25);
      v29 = *(int *)v17;
      v30 = *(float *)(v17 + 4);
      v18 = *(float *)(v17 + 8);
    }
    v31 = v18;
    sub_10078690((int)&v29, 0.0, 0.0);
  }
  return 2;
}
