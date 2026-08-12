void __thiscall sub_1039F290(int this, float a2)
{
  int v3; // esi
  double (__thiscall *v4)(int); // eax
  double v5; // st7
  void (__thiscall *v6)(int, float *); // edx
  float v7[3]; // [esp+14h] [ebp-24h] BYREF
  float v8[3]; // [esp+20h] [ebp-18h] BYREF
  float v9; // [esp+2Ch] [ebp-Ch]
  float v10; // [esp+30h] [ebp-8h]
  float v11; // [esp+34h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3820) && *(_BYTE *)(this + 306) == 6 )
  {
    v3 = *(_DWORD *)(this + 424);
    v4 = *(double (__thiscall **)(int))(*(_DWORD *)v3 + 116);
    v9 = 0.0 * a2;
    v10 = v9;
    v11 = a2;
    v5 = v4(v3);
    v6 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 236);
    v8[0] = v9 * v5;
    v8[1] = v8[0];
    v8[2] = v5 * a2;
    v6(v3, v8);
    sub_1001EF40(v7, -400.0, 400.0);
    (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v3 + 208))(v3, 0, v7);
    *(float *)(this + 3820) = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
}
