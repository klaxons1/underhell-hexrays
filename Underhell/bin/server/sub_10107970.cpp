int __thiscall sub_10107970(float *this, float *a2, float *a3, int a4)
{
  int v5; // edx
  double v6; // st7
  double v7; // st7
  int v8; // edx
  float v10[3]; // [esp+14h] [ebp-18h] BYREF
  float v11[3]; // [esp+20h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
  sub_10112C00(0);
  sub_101129A0(*((unsigned __int16 *)this + 178) | 8);
  switch ( *((_DWORD *)this + 291) )
  {
    case 3:
    case 4:
      (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/bt_9mm.mdl");
      break;
    case 5:
      (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/bt_357.mdl");
      break;
    case 7:
      (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/w_pellet.mdl");
      *((_DWORD *)this + 296) ^= 1u;
      *((_DWORD *)this + 280) = 1;
      break;
    default:
      (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/bt_762.mdl");
      break;
  }
  sub_1025F360(this, &flt_106F1CA8, &flt_106F1CA8);
  sub_100E0970((int)this, v5, 4, 0);
  this[138] = 0.0;
  sub_100E0D20((int)this, a2);
  if ( *((_BYTE *)this + 1212) )
    v6 = *(float *)(dword_10698584 + 44);
  else
    v6 = *(float *)(dword_1069853C + 44);
  this[304] = v6;
  v7 = this[304];
  v11[0] = *a3 * v7;
  v11[1] = a3[1] * v7;
  v11[2] = v7 * a3[2];
  sub_100DD660((int)this, v11);
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  sub_10422540(this + 119, v10);
  sub_100E0EA0((int)this, v10);
  sub_100EBE30((int)this, 0);
  *((_DWORD *)this + 49) = sub_10272970;
  sub_100EC3F0(this, (int)sub_101078D0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  sub_10112D90(1, 36.0);
  v8 = *((_DWORD *)this + 63) >> 11;
  *((_DWORD *)this + 302) = a4;
  if ( (v8 & 1) != 0 )
    sub_100DAE60((int)this);
  return sub_10422220(this + 176, this + 305);
}
