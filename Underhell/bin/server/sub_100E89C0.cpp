int __stdcall sub_100E89C0(int a1, int a2, int a3)
{
  __int16 v3; // cx
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  float v8[13]; // [esp+0h] [ebp-60h] BYREF
  int v9; // [esp+34h] [ebp-2Ch]
  float v10; // [esp+38h] [ebp-28h]
  float v11; // [esp+3Ch] [ebp-24h]
  float v12; // [esp+40h] [ebp-20h]
  int v13; // [esp+44h] [ebp-1Ch]
  __int16 v14; // [esp+48h] [ebp-18h]
  int v15; // [esp+4Ch] [ebp-14h]
  int v16; // [esp+50h] [ebp-10h]
  int v17; // [esp+54h] [ebp-Ch]
  char v18; // [esp+58h] [ebp-8h]

  v8[6] = 0.0;
  v3 = *(_WORD *)(a1 + 64);
  v8[7] = 0.0;
  v8[8] = 0.0;
  v14 = v3;
  v8[9] = 0.0;
  v4 = *(_DWORD *)(a1 + 80);
  v8[10] = 0.0;
  v8[11] = 0.0;
  v16 = a2;
  v10 = 1.0;
  v5 = *(_DWORD *)(a1 + 76);
  v17 = v4;
  v8[12] = 0.0;
  v11 = 0.0;
  v9 = 0;
  v12 = 0.0;
  v13 = 0;
  v6 = *(float *)(a1 + 12);
  v15 = 0;
  v8[0] = v6;
  v18 = 0;
  v8[1] = *(float *)(a1 + 16);
  v8[2] = *(float *)(a1 + 20);
  v8[3] = *(float *)a1;
  v8[4] = *(float *)(a1 + 4);
  v8[5] = *(float *)(a1 + 8);
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v5 + 24));
  if ( a3 )
    return sub_1028E890(a3, v8);
  else
    return sub_1028E890("Impact", v8);
}
