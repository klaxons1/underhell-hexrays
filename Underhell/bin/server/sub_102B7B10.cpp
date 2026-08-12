char __thiscall sub_102B7B10(float *this, char a2, char a3, char a4, char a5, int a6)
{
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  _DWORD *v15; // eax
  unsigned int v16; // eax
  int v17; // edi
  int v18; // eax
  int *v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  float v24[3]; // [esp+28h] [ebp-24h] BYREF
  float v25[3]; // [esp+34h] [ebp-18h] BYREF
  float v26; // [esp+40h] [ebp-Ch]
  float v27; // [esp+44h] [ebp-8h]
  float v28; // [esp+48h] [ebp-4h]

  v7 = *((_DWORD *)this + 284);
  if ( a2 )
  {
    if ( v7 != -1 )
    {
      v8 = &off_1061BE18[4 * (v7 & 0xFFF) + 1];
      v9 = v7 >> 12;
      if ( v8[1] == v9 )
      {
        if ( *v8 )
        {
          if ( v8[1] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          sub_1025FAC0(v10);
          this[284] = NAN;
        }
      }
    }
    v11 = *((_DWORD *)this + 284);
    if ( v11 != -1
      && (v12 = &off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 1],
          v13 = v11 >> 12,
          off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 2] == v13)
      && *v12 )
    {
      if ( off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 2] == v13 )
        v18 = *v12;
      else
        v18 = 0;
      sub_10128950(v18, 5, a3, a4, a5, a6, 0);
    }
    else
    {
      (*(void (__thiscall **)(float *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, v25);
      v14 = *((_DWORD *)this + 63) >> 11;
      v26 = v25[0] * 10.0;
      v27 = v25[1] * 10.0;
      v28 = 10.0 * v25[2];
      if ( (v14 & 1) != 0 )
        sub_100DAE60((int)this);
      v24[0] = this[145] + v26;
      v24[1] = this[146] + v27;
      v24[2] = this[147] + v28;
      v15 = sub_10243040("sprites/glow01.vmt", v24, 0);
      if ( v15 )
        this[284] = *(float *)(*(int (__thiscall **)(_DWORD *))(*v15 + 8))(v15);
      else
        this[284] = NAN;
      v16 = *((_DWORD *)this + 284);
      if ( v16 == -1 || off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 2] != *((_DWORD *)this + 284) >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 1];
      if ( v16 != -1
        && off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 2] == v16 >> 12
        && off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 1] )
      {
        (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v17 + 140))(v17, this, -1);
        sub_10128950(v17, 5, a3, a4, a5, a6, 0);
        sub_102428B0(v17, 0.34999999, 0.0);
      }
    }
  }
  else if ( v7 != -1 )
  {
    v19 = &off_1061BE18[4 * (v7 & 0xFFF) + 1];
    v20 = v7 >> 12;
    if ( v19[1] == v20 )
    {
      if ( *v19 )
      {
        if ( v19[1] == v20 )
          v21 = *v19;
        else
          v21 = 0;
        sub_1025FAC0(v21);
        this[284] = NAN;
      }
    }
  }
  v22 = *((_DWORD *)this + 284);
  if ( v22 != -1
    && (v22 >>= 12, off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 2] == v22)
    && off_1061BE18[4 * ((_DWORD)this[284] & 0xFFF) + 1] )
  {
    LOBYTE(v22) = a3;
    *((_BYTE *)this + 1143) = a6;
    *((_BYTE *)this + 1140) = a3;
    *((_BYTE *)this + 1141) = a4;
    *((_BYTE *)this + 1142) = a5;
  }
  else
  {
    this[285] = 0.0;
  }
  return v22;
}
