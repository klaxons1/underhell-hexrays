void __thiscall sub_10413A50(int this, float *a2)
{
  long double v3; // st7
  long double v4; // st5
  long double v5; // st6
  long double v6; // st4
  double v7; // st3
  double v8; // st7
  float v9[16]; // [esp+8h] [ebp-4Ch] BYREF
  float v10; // [esp+48h] [ebp-Ch] BYREF
  float v11; // [esp+4Ch] [ebp-8h]
  float v12; // [esp+50h] [ebp-4h]
  float v13; // [esp+5Ch] [ebp+8h]

  sub_102608F0(v9, (_DWORD *)this, *(_DWORD *)(this + 1744));
  sub_100D5C50(v9, &v10, a2);
  v3 = v11;
  v4 = v10;
  v5 = v3 * v3 + v4 * v4;
  v6 = v12;
  v7 = v6 * v6 + v5;
  if ( *(float *)(this + 1760) * *(float *)(this + 1760)
     + *(float *)(this + 1756) * *(float *)(this + 1756)
     + *(float *)(this + 1764) * *(float *)(this + 1764) >= v7 )
  {
    *(_BYTE *)(this + 1768) = 0;
  }
  else
  {
    v10 = -((atan2(-*(float *)(this + 1764), sqrt(v7 - *(float *)(this + 1764) * *(float *)(this + 1764)))
           + atan2(v6, sqrt(v5)))
          * 57.29578);
    v11 = (atan2(*(float *)(this + 1760), sqrt(v7 - *(float *)(this + 1760) * *(float *)(this + 1760))) + atan2(v3, v4))
        * 57.29578;
    sub_10078870((_DWORD *)this, "vehicle_weapon_yaw", v11);
    v8 = v10;
    sub_10078870((_DWORD *)this, "vehicle_weapon_pitch", v10);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    sub_100C14D0(this, "vehicle_weapon_pitch");
    v13 = v8;
    sub_100C14D0(this, "vehicle_weapon_yaw");
    *(_BYTE *)(this + 1768) = fabs(v13 - v10) < 0.001 && fabs(v8 - v11) < 0.001;
  }
}
