int __thiscall sub_101B3C40(float *this)
{
  float *v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // edx
  double v6; // st7
  double v8; // st7
  float v9; // [esp+Ch] [ebp-20h] BYREF
  float v10; // [esp+10h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+28h] [ebp-4h]

  this[238] = this[179];
  v2 = this + 241;
  this[239] = this[180];
  this[240] = this[181];
  this[241] = this[241] - this[179];
  this[242] = this[242] - this[180];
  this[243] = this[243] - this[181];
  off_10689714();
  sub_1025F3D0((int)v2, 0.0020000001);
  this[244] = 0.0;
  this[245] = 0.0;
  this[246] = 0.0;
  this[247] = 0.0;
  if ( ((_DWORD)this[62] & 8) != 0 )
  {
    v4 = *((_DWORD *)this + 201);
    if ( !v4 )
    {
      v5 = *((_DWORD *)this + 202);
      v9 = this[238];
      v10 = this[239];
      v16 = v5;
      v6 = this[240];
      v15 = 1;
      v11 = v6;
      v12 = *v2;
      v13 = v2[1];
      v14 = v2[2];
      sub_101B9CA0(&v9);
      return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
    }
    if ( !*((_DWORD *)this + 202) )
    {
      v8 = this[238];
      v15 = 1;
      v9 = v8;
      v10 = this[239];
      v16 = v4;
      v11 = this[240];
      v12 = *v2;
      v13 = v2[1];
      v14 = v2[2];
      sub_101B9CA0(&v9);
      return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
    }
    sub_100352C0((int)this, v3, 8);
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
}
