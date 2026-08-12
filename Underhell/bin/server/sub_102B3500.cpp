void __thiscall sub_102B3500(float *this, float a2, float a3, float a4, float *a5, float a6)
{
  char v6; // bl
  unsigned int v8; // eax
  float *v9; // edi
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st7
  unsigned int v17; // eax
  double v18; // st5
  double v19; // st6
  double v20; // st3
  float v21; // [esp+0h] [ebp-24h]
  float v22; // [esp+8h] [ebp-1Ch]
  float v23[3]; // [esp+18h] [ebp-Ch] BYREF
  int v24; // [esp+38h] [ebp+14h]
  float v25; // [esp+3Ch] [ebp+18h]

  v6 = LOBYTE(a6);
  if ( LOBYTE(a6) && *(float *)(dword_106B31C8 + 12) >= (double)this[962] )
  {
    sub_1001EF40(this + 963, -25.0, 25.0);
    this[962] = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
  if ( *((_BYTE *)this + 3695) )
  {
    if ( !*((_BYTE *)this + 3692) )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
      {
        v8 = *((_DWORD *)this + 911);
        if ( v8 != -1
          && off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 2] == v8 >> 12
          && off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 1] )
        {
          v9 = a5;
          v21 = a2 * a3;
          sub_100B72A0((int)this, v21, a4, a5);
LABEL_23:
          *v9 = *v9 + this[963];
          v9[1] = this[964] + v9[1];
          v9[2] = this[965] + v9[2];
          return;
        }
      }
    }
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v9 = a5;
  v10 = this[906] - this[146];
  v11 = this[905] - this[145];
  v12 = this[907] - this[147];
  *a5 = v11;
  a5[1] = v10;
  a5[2] = v12;
  v22 = v10 * v10 + v11 * v11 + v12 * v12;
  v13 = off_10689708(v22);
  v14 = a2 * a3;
  *(float *)&v24 = v14;
  if ( v14 >= v13 )
  {
    v17 = *((_DWORD *)this + 911);
    if ( v17 == -1
      || off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 2] != v17 >> 12
      || !off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 1] )
    {
      goto LABEL_20;
    }
    sub_100B6A20((int)this, v23);
    v18 = v23[1] * a2;
    v19 = a2 * v23[2];
    v25 = v13;
    v20 = (1.0 - v25 / *(float *)&v24) * a3;
    *v9 = v23[0] * a2 * v20 + *v9;
    v9[1] = v18 * v20 + v9[1];
    v16 = v20 * v19 + v9[2];
  }
  else
  {
    v15 = v14 / v13;
    *v9 = *v9 * v15;
    v9[1] = v15 * v9[1];
    v16 = v15 * v9[2];
  }
  v9[2] = v16;
LABEL_20:
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  *v9 = this[145] + *v9;
  v9[1] = this[146] + v9[1];
  v9[2] = v9[2] + this[147];
  if ( v6 )
    goto LABEL_23;
}
