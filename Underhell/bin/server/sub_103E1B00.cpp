void __thiscall sub_103E1B00(int this, float *a2, int a3)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  float v6; // [esp+10h] [ebp-80h]
  float v7; // [esp+14h] [ebp-7Ch]
  float v8; // [esp+18h] [ebp-78h]
  float v9; // [esp+1Ch] [ebp-74h]
  char v11; // [esp+36h] [ebp-5Ah] BYREF
  char v12; // [esp+37h] [ebp-59h] BYREF
  _BYTE v13[12]; // [esp+38h] [ebp-58h] BYREF
  float v14; // [esp+44h] [ebp-4Ch]
  float v15; // [esp+48h] [ebp-48h]
  _BYTE v16[48]; // [esp+4Ch] [ebp-44h] BYREF
  float v17; // [esp+7Ch] [ebp-14h]
  float v18; // [esp+80h] [ebp-10h] BYREF
  float v19; // [esp+84h] [ebp-Ch]
  float v20; // [esp+8Ch] [ebp-4h]

  sub_10018D60(v16);
  (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)this + 796))(this, *(_DWORD *)(this + 1764), v16);
  sub_10018D60(v13);
  sub_100D5C40((int)a2, (int)v16, (int)v13);
  off_10689714();
  v12 = 0;
  sub_103E1870((_BYTE *)(this + 1688), &v12);
  sub_103E1810((float *)(this + 1676), a2);
  sub_10018D60(&v18);
  sub_10422540(v13, &v18);
  v3 = v18;
  sub_10019610(v18, 0.0);
  v18 = v3;
  v4 = v19;
  sub_10019610(v19, 0.0);
  v19 = v4;
  v14 = *(float *)(this + 1772) + v19;
  v15 = *(float *)(this + 1776) + v18;
  if ( v14 <= 75.0 )
  {
    if ( v14 >= -165.0 )
      v8 = v14;
    else
      v8 = -165.0;
    v9 = v8;
  }
  else
  {
    v9 = 75.0;
  }
  v17 = v9;
  if ( v15 <= 30.0 )
  {
    if ( v15 >= -60.0 )
      v6 = v15;
    else
      v6 = -60.0;
    v7 = v6;
  }
  else
  {
    v7 = 30.0;
  }
  v20 = v7;
  if ( v14 != v17 || v15 != v20 )
  {
    v11 = 1;
    sub_103E1870((_BYTE *)(this + 1688), &v11);
  }
  v14 = v17;
  v15 = v20;
  *(float *)(this + 1772) = v17;
  *(float *)(this + 1776) = v15;
  sub_10078870((_DWORD *)this, "vehicle_weapon_yaw", *(float *)(this + 1772));
  v5 = *(float *)(this + 1776);
  sub_10078870((_DWORD *)this, "vehicle_weapon_pitch", *(float *)(this + 1776));
  sub_100BCCF0((_DWORD *)this);
  sub_100C14D0(this, "vehicle_weapon_pitch");
  *(float *)(this + 1776) = v5;
  sub_100C14D0(this, "vehicle_weapon_yaw");
  *(float *)(this + 1772) = v5;
}
