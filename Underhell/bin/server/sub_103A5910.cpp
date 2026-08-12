_DWORD *__thiscall sub_103A5910(float *this, _DWORD *a2)
{
  bool v3; // zf
  int (__thiscall *v4)(float *); // edx
  int v5; // eax
  float *v6; // eax
  float *v7; // esi
  double v8; // st7
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // eax
  int v13; // eax
  double v14; // st7
  float *v15; // ecx
  double v16; // st6
  double v17; // st7
  double v18; // rt1
  double v19; // st6
  _DWORD *result; // eax
  int v21; // edx
  int v22; // ecx
  float v23; // [esp+8h] [ebp-Ch] BYREF
  float v24; // [esp+Ch] [ebp-8h]
  int v25; // [esp+10h] [ebp-4h]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    if ( !sub_103A5070((int)this) )
    {
      v7 = this + 973;
      this[973] = this[906];
      this[974] = this[907];
      this[975] = this[908];
      this[975] = 0.0;
      off_10689714();
      this[973] = this[973] * 5.0;
      this[974] = this[974] * 5.0;
      this[975] = 5.0 * this[975];
      this[973] = sin((*(float *)(dword_106B31C8 + 12) + 1.0) * this[912]) * 2.5 + this[973];
      this[974] = cos((*(float *)(dword_106B31C8 + 12) + 1.0) * this[913]) * 2.5 + this[974];
      this[975] = this[975] - fabs(2.5 * cos((*(float *)(dword_106B31C8 + 12) + 1.0) * this[914]));
      v16 = 2024.0 * this[975] + this[181];
      v17 = this[974] * 2024.0 + this[180];
      this[973] = this[973] * 2024.0 + this[179];
      v18 = v16;
      v19 = v17;
      v8 = v18;
      this[974] = v19;
      goto LABEL_11;
    }
    v6 = sub_103A50F0(v15, &v23);
LABEL_5:
    v7 = this + 973;
    this[973] = *v6;
    this[974] = v6[1];
    v8 = v6[2];
LABEL_11:
    v7[2] = v8;
    goto LABEL_12;
  }
  if ( sub_10023D10(this, 10) )
  {
    v3 = *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) + 256) >= 0;
    v4 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
    if ( !v3 )
    {
      v5 = v4(this);
      v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 504))(v5, &v23);
      goto LABEL_5;
    }
    v9 = (float *)v4(this);
    this[973] = v9[179];
    v7 = this + 973;
    this[974] = v9[180];
    v10 = v9[181];
    this[975] = v9[181];
    v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    sub_1008D510((int)(this + 973), v11 + 716);
    this[975] = v10;
  }
  else
  {
    v12 = sub_100217F0(this);
    v23 = *(float *)v12;
    v24 = *(float *)(v12 + 4);
    v13 = *(_DWORD *)(v12 + 8);
    this[973] = v23;
    v14 = v24;
    v7 = this + 973;
    this[974] = v24;
    v25 = v13;
    sub_1008D510((int)(this + 973), (int)&v23);
    this[975] = v14;
  }
LABEL_12:
  result = a2;
  v21 = *((_DWORD *)v7 + 1);
  *a2 = *(_DWORD *)v7;
  v22 = *((_DWORD *)v7 + 2);
  a2[1] = v21;
  a2[2] = v22;
  return result;
}
