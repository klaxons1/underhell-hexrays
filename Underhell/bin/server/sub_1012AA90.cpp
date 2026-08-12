_DWORD *__thiscall sub_1012AA90(_DWORD *this)
{
  const char *v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  int v8; // eax
  int *v9; // ecx
  int v10; // eax
  int *v11; // ecx
  int v12; // eax
  float *v13; // ebx
  int *v14; // ecx
  int v15; // eax
  float *v16; // edi
  int *v17; // ecx
  double v18; // st7
  int v19; // eax
  int *v20; // ecx
  int v21; // eax
  int *v22; // ecx
  float v23; // eax
  int *v24; // ecx
  int v25; // eax
  int *v26; // ecx
  float v27; // eax
  int *v28; // ecx
  int v29; // eax
  int *v30; // ecx
  int v31; // esi
  int *v32; // ecx
  int *v33; // ecx
  float v35; // [esp+4h] [ebp-18h]
  float v36; // [esp+4h] [ebp-18h]
  float v37; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v38; // [esp+18h] [ebp-4h]

  v38 = this;
  nullsub_4(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, float *))(*this + 28))(this, &v37);
  if ( !v2 )
    v2 = String;
  sub_10264670(this, v2);
  v3 = this[207];
  if ( v3 == 1 || v3 == 2 )
  {
    v4 = this[77];
    if ( v4 == -1 || off_1061BE18[4 * (this[77] & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (this[77] & 0xFFF) + 1];
    if ( __RTDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CRagdollProp `RTTI Type Descriptor',
           0) )
    {
      v35 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
      sub_100EC3F0(this, (int)sub_1012A0C0, v35, off_1061B868);
    }
  }
  v6 = this[201];
  v37 = 0.0;
  if ( v6 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)this[6];
      if ( v7 )
        sub_100194B0(v7, 804);
    }
    *((float *)this + 201) = 0.0;
  }
  v8 = this[202];
  v37 = 1.0;
  if ( v8 != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v9 = (int *)this[6];
      if ( v9 )
        sub_100194B0(v9, 808);
    }
    *((float *)this + 202) = 1.0;
  }
  v10 = this[203];
  v37 = 1.9;
  if ( v10 != COERCE_INT(1.9) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v11 = (int *)this[6];
      if ( v11 )
        sub_100194B0(v11, 812);
    }
    *((float *)this + 203) = 1.9;
  }
  v12 = this[204];
  v37 = 0.10000002;
  v13 = (float *)(this + 204);
  if ( v12 != COERCE_INT(0.10000002) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v14 = (int *)this[6];
      if ( v14 )
        sub_100194B0(v14, 816);
    }
    *v13 = 0.10000002;
  }
  v15 = this[205];
  v16 = (float *)(this + 205);
  v37 = 2.0;
  if ( v15 != COERCE_INT(2.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v17 = (int *)this[6];
      if ( v17 )
        sub_100194B0(v17, 820);
    }
    *v16 = 2.0;
  }
  v18 = 0.0;
  v19 = this[206];
  v37 = 0.0;
  if ( v19 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v20 = (int *)this[6];
      if ( v20 )
        sub_100194B0(v20, 824);
    }
    v18 = 0.0;
    *((float *)this + 206) = 0.0;
  }
  if ( this[207] == 3 )
  {
    v21 = this[201];
    v37 = v18;
    if ( v21 != LODWORD(v37) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v22 = (int *)this[6];
        if ( v22 )
          sub_100194B0(v22, 804);
      }
      *((float *)this + 201) = 0.0;
    }
    v23 = *v16;
    v37 = 0.2;
    if ( LODWORD(v23) != COERCE_INT(0.2) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v24 = (int *)this[6];
        if ( v24 )
          sub_100194B0(v24, 820);
      }
      *v16 = 0.2;
    }
    v25 = this[203];
    v37 = 0.1;
    if ( v25 != COERCE_INT(0.1) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v26 = (int *)this[6];
        if ( v26 )
          sub_100194B0(v26, 812);
      }
      *((float *)this + 203) = 0.1;
    }
    v27 = *v13;
    v37 = 0.050000001;
    if ( LODWORD(v27) != COERCE_INT(0.050000001) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v28 = (int *)this[6];
        if ( v28 )
          sub_100194B0(v28, 816);
      }
      *v13 = 0.050000001;
    }
    v29 = this[202];
    v37 = 0.1;
    if ( v29 != COERCE_INT(0.1) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((float *)this + 202) = 0.1;
      }
      else
      {
        v30 = (int *)this[6];
        if ( v30 )
          sub_100194B0(v30, 808);
        *((float *)this + 202) = 0.1;
      }
    }
  }
  v31 = (int)v38;
  if ( *((_BYTE *)v38 + 113) != 1 )
  {
    if ( *((_BYTE *)v38 + 84) )
    {
      *((_BYTE *)v38 + 88) |= 1u;
    }
    else
    {
      v32 = (int *)v38[6];
      if ( v32 )
        sub_100194B0(v32, 113);
    }
    *(_BYTE *)(v31 + 113) = 1;
  }
  sub_1005C620((_BYTE *)(v31 + 116), 255, 255, 255, 255);
  if ( *(_BYTE *)(v31 + 112) )
  {
    if ( *(_BYTE *)(v31 + 84) )
    {
      *(_BYTE *)(v31 + 88) |= 1u;
    }
    else
    {
      v33 = *(int **)(v31 + 24);
      if ( v33 )
        sub_100194B0(v33, 112);
    }
    *(_BYTE *)(v31 + 112) = 0;
  }
  sub_100EC3F0((_DWORD *)v31, (int)sub_1012A730, 0.0, 0);
  if ( *(float *)(v31 + 800) < (double)*(float *)(dword_106B31C8 + 12) )
    return sub_1012A730(v31);
  v36 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  return (_DWORD *)sub_100EC4A0((int *)v31, v36, 0);
}
