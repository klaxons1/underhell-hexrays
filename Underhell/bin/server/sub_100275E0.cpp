void __thiscall sub_100275E0(float *this, float *a2)
{
  int v3; // eax
  char v4; // cl
  float *v5; // eax
  int v6; // eax
  char v7; // cl
  float *v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // eax
  float v14; // [esp+8h] [ebp-4h]

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
  v3 = sub_1007DB30(16);
  if ( v3 != -1 )
  {
    v4 = v3;
    if ( v3 != 999999999 )
    {
      v5 = &this[((v3 - 1000000000) >> 5) + 548];
      *(_DWORD *)v5 &= ~(1 << (v4 & 0x1F));
    }
  }
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
  v6 = sub_1007DB30(14);
  if ( v6 != -1 )
  {
    v7 = v6;
    if ( v6 != 999999999 )
    {
      v8 = &this[((v6 - 1000000000) >> 5) + 548];
      *(_DWORD *)v8 &= ~(1 << (v7 & 0x1F));
    }
  }
  v9 = *(float *)(*((_DWORD *)this + 601) + 8);
  v14 = *(float *)(*((_DWORD *)this + 601) + 8);
  sub_100271C0(this, a2);
  if ( v9 < v14
    && (*(unsigned __int8 (__thiscall **)(float *, float *, int, _DWORD))(*(_DWORD *)this + 548))(this, a2, 16449, 0) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
    v10 = sub_1007DB30(16);
    if ( v10 != -1 )
    {
      v11 = v10 - 1000000000;
      if ( v10 != 999999999 )
      {
        v12 = &this[(v11 >> 5) + 548];
LABEL_15:
        *(_DWORD *)v12 |= 1 << (v11 & 0x1F);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
    v13 = sub_1007DB30(14);
    if ( v13 != -1 )
    {
      v11 = v13 - 1000000000;
      if ( v13 != 999999999 )
      {
        v12 = &this[(v11 >> 5) + 548];
        goto LABEL_15;
      }
    }
  }
  sub_10027450(this, (int)a2);
}
