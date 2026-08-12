int __stdcall sub_102C9950(float *a1, float *a2, int a3)
{
  int v3; // eax
  double v4; // st7
  float v6; // [esp+18h] [ebp-24h]
  int v7; // [esp+24h] [ebp-18h] BYREF
  float v8; // [esp+28h] [ebp-14h]
  float v9; // [esp+2Ch] [ebp-10h]
  float v10; // [esp+30h] [ebp-Ch] BYREF
  float v11; // [esp+34h] [ebp-8h]
  float v12; // [esp+38h] [ebp-4h]

  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v3 = sub_10261B20();
    else
      v3 = 0;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 504))(v3, &v10);
    sub_10086040((float *)&v7, a1, a2 + 3, &v10);
    v6 = (v12 - v9) * (v12 - v9) + (v11 - v8) * (v11 - v8) + (v10 - *(float *)&v7) * (v10 - *(float *)&v7);
    v4 = off_10689708(v6);
    if ( v4 >= 10.0 && v4 <= 120.0 )
      sub_10261B70((float *)&v7, 10.0, 60.0, 0.30000001, 120.0, 0, 0);
  }
  return sub_101AB060(
           "Weapon_Combine_Ion_Cannon",
           *a1,
           a1[1],
           a1[2],
           a2[3],
           a2[4],
           a2[5],
           flt_106F1CB4,
           flt_106F1CB8,
           flt_106F1CBC,
           0);
}
