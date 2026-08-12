char __thiscall sub_1030B7B0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  int (__thiscall *v12)(_DWORD *); // edx
  float *v13; // eax
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  int v17; // ecx
  int (__thiscall *v18)(_DWORD *); // eax
  float v20; // [esp+1Ch] [ebp-18h] BYREF
  float v21; // [esp+20h] [ebp-14h]
  float v22; // [esp+24h] [ebp-10h]
  float v23; // [esp+28h] [ebp-Ch] BYREF
  float v24; // [esp+2Ch] [ebp-8h]
  float v25; // [esp+30h] [ebp-4h]

  v24 = flt_106F1CAC;
  v4 = this[926];
  v23 = flt_106F1CA8;
  v25 = flt_106F1CB0;
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
          sub_100DAE60(v7);
        v8 = this[926];
        v23 = *(float *)(v7 + 580);
        v24 = *(float *)(v7 + 584);
        v25 = *(float *)(v7 + 588);
        if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (v8 & 0xFFF) + 1];
        goto LABEL_23;
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) && sub_100697A0(this, 102, 1) )
  {
    v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v11 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v10 + 504))(v10, &v20);
    v23 = *v11;
    v24 = v11[1];
    v12 = *(int (__thiscall **)(_DWORD *))(*this + 368);
    v25 = v11[2];
    v9 = v12(this);
LABEL_23:
    (*(void (__thiscall **)(_DWORD *, int, float *, _DWORD, _DWORD, _DWORD))(*this + 1704))(
      this,
      v9,
      &v23,
      1.0,
      0.2,
      0.0);
    return sub_101782E0(a2, a3);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) && sub_1007DE30((_DWORD *)this[647]) == 11 )
  {
    v13 = (float *)sub_100217F0(this);
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v20 = v14;
    v17 = this[63] >> 11;
    v21 = v15;
    v22 = v16;
    if ( (v17 & 1) != 0 )
      sub_100DAE60((int)this);
    if ( fabs(v21 - *((float *)this + 146)) + fabs(v20 - *((float *)this + 145)) + fabs(v22 - *((float *)this + 147)) < 512.0
      || sub_100697A0(this, 98, 1) )
    {
      v18 = *(int (__thiscall **)(_DWORD *))(*this + 368);
      v23 = v20;
      v24 = v21;
      v25 = v22;
      v9 = v18(this);
      goto LABEL_23;
    }
  }
  return sub_101782E0(a2, a3);
}
