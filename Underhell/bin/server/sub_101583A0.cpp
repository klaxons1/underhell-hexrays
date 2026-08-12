void __thiscall sub_101583A0(_DWORD *this, float *a2, int a3)
{
  float *v4; // ebx
  double v5; // st7
  double v6; // st7
  int (__thiscall *v7)(_DWORD *, _DWORD, int, int); // eax
  int v8; // eax
  float *v9; // esi
  float v10[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+20h] [ebp+8h]

  v4 = (float *)this[2];
  v5 = v4[38];
  v4 += 38;
  v10[0] = v5 + *a2;
  v10[1] = v4[1] + a2[1];
  v6 = v4[2] + a2[2];
  v11 = *this;
  v7 = *(int (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 44);
  v10[2] = v6;
  v8 = v7(this, 0, 8, a3);
  (*(void (__thiscall **)(_DWORD *, float *, float *, int))(v11 + 40))(this, v4, v10, v8);
  v9 = (float *)this[2];
  v9[38] = *(float *)(a3 + 12);
  v9[39] = *(float *)(a3 + 16);
  v9[40] = *(float *)(a3 + 20);
  if ( *(float *)(a3 + 44) < 1.0 && !*(_BYTE *)(a3 + 54) )
    (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_106B6E60 + 8))(dword_106B6E60, a3, v9 + 16);
}
