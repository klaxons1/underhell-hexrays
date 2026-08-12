int __thiscall sub_10121570(float *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  float *v4; // edi
  const char *v5; // eax
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  long double v10; // st7
  long double v11; // rt0
  long double v12; // st6
  long double v13; // st7
  int v14; // edx
  bool v15; // zf
  const char *v16; // eax
  const char *v17; // eax
  int v19; // [esp-4h] [ebp-2Ch]
  float v20[6]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v21[4]; // [esp+24h] [ebp-4h] BYREF

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
  v2 = *((_DWORD *)this + 77);
  if ( v2 != -1
    && off_1061BE18[4 * ((_DWORD)this[77] & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * ((_DWORD)this[77] & 0xFFF) + 1]
    && (v3 = sub_100E99F0(this), (*(int (__thiscall **)(_DWORD *))(v3[80] + 44))(v3 + 80) == 1) )
  {
    v19 = 1;
  }
  else
  {
    v19 = 6;
  }
  sub_10112C00((int)(this + 80), v19);
  v4 = this + 229;
  v20[0] = this[229];
  v20[1] = this[230];
  v20[2] = this[231];
  sub_10422220(v20, this + 229);
  v5 = *(const char **)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 28))(this, v21);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, v5);
  this[204] = this[179];
  this[205] = this[180];
  this[206] = this[181];
  v6 = (float *)sub_10022D70();
  *v6 = this[85] - this[82];
  v6[1] = this[86] - this[83];
  v6[2] = this[87] - this[84];
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v20[3] = v7;
  v20[4] = v8;
  v20[5] = v9;
  v10 = fabs((v7 - 2.0) * *v4) + fabs((v8 - 2.0) * this[230]) + fabs((v9 - 2.0) * this[231]) - this[203];
  v11 = v10 * *v4 + this[204];
  v12 = v10 * this[230] + this[205];
  v13 = v10 * this[231] + this[206];
  this[207] = v11;
  this[208] = v12;
  this[209] = v13;
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 728))(this) )
  {
    if ( *((_DWORD *)this + 244) == 1 || ((_BYTE)this[62] & 1) != 0 )
    {
      sub_1025F370(this, this + 207, 0);
      this[200] = 0.0;
    }
    else
    {
      *((_DWORD *)this + 200) = 1;
    }
  }
  if ( ((_DWORD)this[62] & 0x800) != 0 )
    *((_BYTE *)this + 972) = 1;
  sub_100E0970((int)this, v14, 7, 0);
  if ( 0.0 == this[27] )
    this[27] = 100.0;
  v15 = *((_DWORD *)this + 23) == (_DWORD)"func_water";
  *((_DWORD *)this + 49) = sub_10120C40;
  if ( !v15 && !sub_100D6240(this, "func_water") )
  {
    if ( ((_DWORD)this[62] & 8) != 0 )
    {
      *((_DWORD *)this + 63) |= 0x40000u;
      sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 4);
    }
    if ( ((_DWORD)this[62] & 4) != 0 )
    {
      sub_100EBE30((int)this, 15);
      sub_100EA940((int *)this, 0x40000000);
    }
    if ( *((_BYTE *)this + 973) )
    {
      if ( ((_DWORD)this[62] & 4) != 0 )
      {
        v16 = sub_100D6390(this);
        Warning("Door %s with conflicting collision settings, removing ignoredebris\n", v16);
      }
      else
      {
        sub_100EBE30((int)this, 4);
      }
    }
  }
  if ( *((_DWORD *)this + 244) == 1 && ((_BYTE)this[62] & 1) != 0 )
  {
    v17 = sub_100D6390(this);
    Warning(
      "Door %s using obsolete 'Start Open' spawnflag with 'Spawn Position' set to 'Open'. Reverting to old behavior.\n",
      v17);
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 584))(this);
}
