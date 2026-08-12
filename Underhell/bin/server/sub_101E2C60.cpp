int __usercall sub_101E2C60@<eax>(int a1@<edi>)
{
  int v1; // eax
  int result; // eax
  char *v3; // esi
  int v4; // ecx
  int v5; // edx
  double v6; // st6
  double v7; // st7
  float v8[3]; // [esp+4h] [ebp-30h] BYREF
  float v9[3]; // [esp+10h] [ebp-24h] BYREF
  float v10[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v11; // [esp+28h] [ebp-Ch]
  float v12; // [esp+2Ch] [ebp-8h]
  float v13; // [esp+30h] [ebp-4h]

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 508))(a1);
  sub_10422220(v1, v8);
  result = sub_101811E0("prop_vehicle_hl2buggy", -1);
  v3 = (char *)result;
  if ( result )
  {
    v4 = *(_DWORD *)(a1 + 252) >> 11;
    v11 = v8[0] * 256.0;
    v12 = v8[1] * 256.0;
    v13 = 256.0 * v8[2];
    if ( (v4 & 1) != 0 )
      sub_100DAE60(a1);
    v5 = *(_DWORD *)(a1 + 252) >> 11;
    v6 = *(float *)(a1 + 584) + v12;
    v7 = *(float *)(a1 + 588) + v13;
    v9[0] = *(float *)(a1 + 580) + v11;
    v9[1] = v6;
    v9[2] = v7 + 64.0;
    if ( (v5 & 1) != 0 )
      sub_100DAE60(a1);
    v10[0] = 0.0;
    v10[1] = *(float *)(a1 + 708) - 90.0;
    v10[2] = 0.0;
    sub_100E0D20((int)v3, v9);
    sub_100E0EA0((int)v3, v10);
    (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v3 + 128))(v3, "model", "models/buggy.mdl");
    (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v3 + 128))(v3, "solid", "6");
    (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v3 + 128))(v3, "targetname", "hl2buggy");
    (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v3 + 128))(
      v3,
      "vehiclescript",
      "scripts/vehicles/jeep_test.txt");
    sub_10260750(v3);
    (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 136))(v3);
    return (*(int (__thiscall **)(char *, float *, float *, _DWORD))(*(_DWORD *)v3 + 416))(v3, v9, v10, 0);
  }
  return result;
}
