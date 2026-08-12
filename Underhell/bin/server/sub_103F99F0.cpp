int __usercall sub_103F99F0@<eax>(int a1@<esi>, float a2, float a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // rt0
  double v7; // st5
  double v8; // st7
  int (__thiscall *v9)(int, float *, float *); // edx
  float v11; // [esp+0h] [ebp-18h] BYREF
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+Ch] [ebp-Ch] BYREF
  float v15; // [esp+10h] [ebp-8h]
  float v16; // [esp+14h] [ebp-4h]
  float v17; // [esp+20h] [ebp+8h]

  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 204))(a1, &v11, &v14);
  v17 = off_10689714() - a2;
  v3 = off_10689714() - a3;
  v4 = 0.0;
  if ( v17 >= 0.0 )
    v5 = -v17;
  else
    v5 = 0.0;
  v6 = v5;
  v7 = v3;
  v8 = v6;
  if ( v7 >= 0.0 )
    v4 = -v7;
  v9 = *(int (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 208);
  v11 = v11 * v8;
  v12 = v12 * v8;
  v13 = v8 * v13;
  v14 = v14 * v4;
  v15 = v15 * v4;
  v16 = v4 * v16;
  return v9(a1, &v11, &v14);
}
