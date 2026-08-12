int sub_10305F70()
{
  int *v0; // eax
  int result; // eax
  double v2; // st7
  double v3; // st7
  float v4; // [esp+8h] [ebp-14h]
  float v5; // [esp+Ch] [ebp-10h]
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+10h] [ebp-Ch]
  float v8; // [esp+18h] [ebp-4h]

  v8 = sub_102EF360();
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return -1;
  v0 = (int *)sub_10261B20();
  if ( !v0 )
    return -1;
  v6 = (float)v0[55];
  v2 = v6 / (double)(*(int (__thiscall **)(int *))(*v0 + 448))(v0);
  v7 = v2;
  if ( v2 >= v8 )
    return 1;
  v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.0);
  v5 = 1.0 - v7 / v8;
  v4 = v3;
  sub_10422B90(v4, v5);
  if ( v3 < 0.25 )
    return 1;
  result = 2;
  if ( v3 >= 0.625 )
    return 3;
  return result;
}
