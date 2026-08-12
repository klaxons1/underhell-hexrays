int __thiscall sub_10239840(int *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  _DWORD *v22; // edi
  int v23; // eax
  _DWORD *v24; // eax
  float v25; // [esp+4h] [ebp-34h]
  int v26; // [esp+8h] [ebp-30h]
  float v27; // [esp+14h] [ebp-24h]
  char *Source; // [esp+28h] [ebp-10h]
  char *Sourcea; // [esp+28h] [ebp-10h]
  char *Sourceb; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  int v32; // [esp+30h] [ebp-8h]
  int v33; // [esp+30h] [ebp-8h]
  int v34; // [esp+34h] [ebp-4h]

  result = this[206];
  v3 = this[218];
  v4 = this[222];
  v31 = v4;
  v34 = 0;
  v32 = 0;
  if ( result )
    goto LABEL_7;
  if ( !this[207] && !this[210] && !this[211] && !this[212] )
    return result;
  if ( this[207] )
  {
LABEL_7:
    v5 = this[221];
    v6 = this[221] >> 8;
    if ( result <= 0 )
    {
      v8 = this[207];
      if ( v8 <= 0 )
      {
LABEL_12:
        v3 = this[221] >> 8;
        if ( v3 > this[204] )
        {
          v3 = this[204];
          this[206] = 0;
        }
        if ( v3 < this[205] )
        {
          this[207] = 0;
          return sub_102386F0((int)this, 4);
        }
        if ( v3 <= 255 )
        {
          if ( v3 < 1 )
            v3 = 1;
        }
        else
        {
          v3 = 255;
        }
        this[218] = v3;
        v34 = 2;
        v32 = v6 != v3;
        goto LABEL_21;
      }
      v7 = v5 - v8;
    }
    else
    {
      v7 = result + v5;
    }
    this[221] = v7;
    goto LABEL_12;
  }
LABEL_21:
  v9 = this[210];
  if ( v9 || this[211] )
  {
    v10 = this[225];
    v11 = v10 >> 8;
    if ( v9 <= 0 )
    {
      v13 = this[211];
      if ( v13 <= 0 )
        goto LABEL_28;
      v12 = v10 - v13;
    }
    else
    {
      v12 = v9 + v10;
    }
    this[225] = v12;
LABEL_28:
    v14 = this[208];
    v4 = this[225] >> 8;
    v31 = v4;
    if ( v4 > v14 )
    {
      v4 = this[208];
      v31 = v4;
      this[225] = v14 << 8;
      this[210] = 0;
    }
    v15 = this[209];
    if ( v4 < v15 )
    {
      this[222] = v15;
      this[225] = v15 << 8;
      this[211] = 0;
      return sub_102386F0((int)this, 4);
    }
    if ( v4 <= 100 )
    {
      if ( v4 >= 1 )
      {
LABEL_37:
        this[222] = v4;
        v32 |= v11 != v4;
        v34 |= 1u;
        goto LABEL_38;
      }
      v4 = 1;
      this[225] = 256;
    }
    else
    {
      v4 = 100;
      this[225] = 25600;
    }
    v31 = v4;
    goto LABEL_37;
  }
LABEL_38:
  if ( !this[212] )
    goto LABEL_65;
  if ( this[226] > 1879048191 )
    this[226] = 0;
  v16 = this[213];
  this[226] += v16;
  v17 = this[226] >> 8;
  if ( this[226] >= 0 )
  {
    if ( v17 <= 255 )
      goto LABEL_46;
    v17 = 255;
    this[226] = 65280;
    v18 = -abs32(v16);
  }
  else
  {
    v18 = abs32(v16);
    this[226] = 0;
    v17 = 0;
  }
  this[213] = v18;
LABEL_46:
  if ( this[212] == 1 )
  {
    this[227] = (unsigned __int8)((v17 >= 128) - 1);
  }
  else if ( this[212] == 3 )
  {
    if ( v17 == 255 )
      this[227] = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 255);
  }
  else
  {
    this[227] = v17;
  }
  v19 = this[214];
  if ( v19 )
  {
    Source = (char *)v3;
    v3 += v19 * (this[227] - 128) / 100;
    if ( v3 <= 255 )
    {
      if ( v3 < 1 )
        v3 = 1;
    }
    else
    {
      v3 = 255;
    }
    v32 |= Source != (char *)v3;
    v34 |= 2u;
  }
  v20 = this[215];
  if ( !v20 )
    goto LABEL_65;
  Sourcea = (char *)v4;
  v21 = v20 * (this[227] - 128) / 100 + v4;
  v31 = v21;
  if ( v21 > 100 )
  {
    v21 = 100;
LABEL_63:
    v31 = v21;
    goto LABEL_64;
  }
  if ( v21 < 0 )
  {
    v21 = 0;
    goto LABEL_63;
  }
LABEL_64:
  v32 |= Sourcea != (char *)v21;
  v34 |= 1u;
LABEL_65:
  if ( v34 && v32 )
  {
    if ( v3 == 100 )
      v3 = 101;
    v22 = (_DWORD *)sub_1026A890(this + 232);
    if ( v22 )
    {
      Sourceb = (char *)this[230];
      if ( !Sourceb )
        Sourceb = (char *)String;
      v23 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v22[6]);
      v26 = this[202];
      v33 = v23;
      v25 = (double)v31 * 0.01;
      v24 = sub_10019640(v22);
      sub_1023C2A0(v33, (int)v24, Sourceb, v25, v26, v34, v3, 0.0, 0);
    }
  }
  v27 = *(float *)(dword_106B31C8 + 12) + 0.2;
  return sub_100EC4A0(this, v27, 0);
}
