void __thiscall sub_10316190(float *this)
{
  int (__thiscall *v2)(float *); // edx
  char v3; // bl
  int v4; // eax
  int v5; // eax
  int v6; // edi
  bool v7; // zf
  float *v8; // eax
  double v9; // st7
  float v10; // [esp+4h] [ebp-38h]
  float v11; // [esp+4h] [ebp-38h]
  float v12; // [esp+Ch] [ebp-30h]
  float v13; // [esp+Ch] [ebp-30h]
  float v14; // [esp+14h] [ebp-28h]
  float v15; // [esp+14h] [ebp-28h]
  float v16; // [esp+14h] [ebp-28h]
  float v17; // [esp+14h] [ebp-28h]
  float v18; // [esp+14h] [ebp-28h]
  float v19; // [esp+14h] [ebp-28h]
  float v20; // [esp+14h] [ebp-28h]
  _BYTE v21[12]; // [esp+24h] [ebp-18h] BYREF
  float v22; // [esp+30h] [ebp-Ch]
  char v23[4]; // [esp+34h] [ebp-8h]
  float v24; // [esp+38h] [ebp-4h]

  v2 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  v3 = 1;
  v23[0] = 1;
  if ( !v2(this)
    || (v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4))
    || (v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        (v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1096))(v5)) == 0) )
  {
    v3 = 0;
    v7 = *((_DWORD *)this + 1030) == 0;
    v23[0] = 0;
    if ( v7 || !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    {
      sub_100B5B80((int)this, 0);
      return;
    }
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  }
  sub_100B5B80((int)this, 1);
  v22 = 0.0;
  v24 = sub_100B5230(this);
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 536))(v6, v21);
  v14 = v8[1] * v8[1] + *v8 * *v8 + v8[2] * v8[2];
  v9 = off_10689708(v14);
  if ( ((_DWORD)this[62] & 0x20000) != 0 )
  {
    if ( v24 >= 200.0 )
      v15 = sub_10312DD0(v24, 200.0, 600.0, -200.0, -500.0);
    else
      v15 = sub_10312DD0(v24, 0.0, 200.0, 100.0, -200.0);
LABEL_10:
    sub_100B5030(this, v15);
  }
  else
  {
    switch ( *((_DWORD *)this + 1030) )
    {
      case 0:
      case 2:
        if ( v9 <= 300.0 && v3 )
        {
          v11 = v9;
          v19 = sub_10313940(this, v11, 150.0, 300.0, 500.0, -1000.0);
          sub_100B5030(this, v19);
        }
        else
        {
          v20 = sub_10312DD0(v24, -600.0, -200.0, -2500.0, -1000.0);
          sub_100B5030(this, v20);
        }
        break;
      case 1:
        v13 = v9;
        sub_103139F0(this, v13, v24, v23[0]);
        v18 = v9;
        sub_100B5030(this, v18);
        break;
      case 3:
        if ( v9 > 300.0 || !v3 )
        {
          if ( v24 <= 0.0 )
            v15 = sub_10312DD0(v24, -600.0, -200.0, -2000.0, -1000.0);
          else
            v15 = sub_10312DD0(v24, 200.0, 600.0, 1000.0, 2000.0);
          goto LABEL_10;
        }
        v10 = v9;
        v17 = sub_10313940(this, v10, 0.0, 300.0, 0.0, 1000.0);
        sub_100B5030(this, v17);
        break;
      case 4:
        v12 = v9;
        v16 = sub_10313A80((int)this, v12, v24, v23[0]);
        sub_100B5030(this, v16);
        break;
      default:
        sub_100B5030(this, v22);
        break;
    }
  }
}
