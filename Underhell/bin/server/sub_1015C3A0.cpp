bool __thiscall sub_1015C3A0(_DWORD *this)
{
  float *v2; // eax
  int v3; // ecx
  int i; // esi
  int v5; // eax
  double v6; // st7
  float *v7; // esi
  float *v8; // eax
  int (__thiscall *v9)(int); // edx
  float *v10; // esi
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  int v14; // esi
  char v15; // al
  _BYTE *v16; // esi
  int v17; // ebx
  int v18; // esi
  int v19; // eax
  char v20; // bl
  _BYTE *v21; // esi
  _BYTE v23[44]; // [esp+Ch] [ebp-74h] BYREF
  float v24; // [esp+38h] [ebp-48h]
  char v25; // [esp+43h] [ebp-3Dh]
  float v26; // [esp+60h] [ebp-20h]
  float v27; // [esp+64h] [ebp-1Ch]
  float v28; // [esp+68h] [ebp-18h]
  float v29; // [esp+6Ch] [ebp-14h] BYREF
  float v30; // [esp+70h] [ebp-10h]
  float v31; // [esp+74h] [ebp-Ch]
  float v32; // [esp+78h] [ebp-8h]
  char v33; // [esp+7Fh] [ebp-1h]

  v2 = (float *)this[2];
  v3 = this[1];
  v29 = v2[38];
  v30 = v2[39];
  v31 = v2[40];
  if ( sub_101C5260(v3) )
  {
    for ( i = 0; i < 12; *(float *)((char *)&v28 + i) = v6 + *(float *)((char *)&v28 + i) )
    {
      v32 = *(float *)(i + (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 36);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
      v6 = v32 - *(float *)(i + v5 + 12);
      i += 4;
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v26 = v8[6] - v7[3];
    v27 = v8[7] - v7[4];
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
    v28 = v8[8] - v7[5];
    v10 = (float *)v9(dword_106B3CDC);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v12 = -(v27 - (v11[13] - v10[10]));
    v13 = -(v28 - (v11[14] - v10[11]));
    v29 = v29 - (v26 - (v11[12] - v10[9]));
    v30 = v12 + v30;
    v31 = v13 + v31;
  }
  v14 = this[1];
  v15 = *(_BYTE *)(v14 + 2272);
  v16 = (_BYTE *)(v14 + 2272);
  v33 = v15;
  if ( v15 )
  {
    (**((void (__thiscall ***)(int, _BYTE *))v16 - 20))((int)(v16 - 80), v16);
    *v16 = 0;
  }
  v17 = *this;
  v18 = this[2] + 152;
  v19 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44))(this, 0, 8, v23);
  (*(void (__thiscall **)(_DWORD *, int, float *, int))(v17 + 40))(this, v18, &v29, v19);
  v20 = v33;
  v21 = (_BYTE *)(this[1] + 2272);
  if ( v33 != *v21 )
  {
    (**(void (__thiscall ***)(int, int))(this[1] + 2192))(this[1] + 2192, this[1] + 2272);
    *v21 = v20;
  }
  return !v25 && 1.0 == v24;
}
