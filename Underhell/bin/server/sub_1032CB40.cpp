void __thiscall sub_1032CB40(_DWORD *this, int a2, float *a3)
{
  int v4; // esi
  int (__thiscall *v5)(int); // eax
  float *v6; // eax
  double v7; // rt0
  double v8; // st6
  float v9[3]; // [esp+8h] [ebp-30h] BYREF
  float v10[3]; // [esp+14h] [ebp-24h] BYREF
  float v11; // [esp+20h] [ebp-18h]
  float v12; // [esp+24h] [ebp-14h]
  float v13; // [esp+28h] [ebp-10h]
  float v14; // [esp+2Ch] [ebp-Ch]
  float v15; // [esp+30h] [ebp-8h]
  float v16; // [esp+34h] [ebp-4h]

  if ( a2 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
    if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1088))(v4) )
    {
      (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)v4 + 528))(v4, v9, v10, 0);
      v5 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 576);
      v11 = v10[0] * 48.0;
      v12 = v10[1] * 48.0;
      v13 = 48.0 * v10[2];
      v14 = v9[0] * 24.0;
      v15 = v9[1] * 24.0;
      v16 = 24.0 * v9[2];
      v6 = (float *)v5(v4);
      v7 = v6[1] + v15 + v12;
      v8 = v6[2] + v16 + v13;
      *a3 = *v6 + v14 + v11;
      a3[1] = v7;
      a3[2] = v8;
    }
    else
    {
      sub_100443F0(this, a2, a3);
    }
  }
}
