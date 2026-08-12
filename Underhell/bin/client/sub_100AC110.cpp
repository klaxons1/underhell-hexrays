bool __thiscall sub_100AC110(_DWORD *this)
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
  int v14; // eax
  char v15; // cl
  int v16; // ebx
  int v17; // esi
  int (__thiscall *v18)(_DWORD *, _DWORD, int, _BYTE *); // eax
  int v19; // eax
  _BYTE v21[44]; // [esp+Ch] [ebp-74h] BYREF
  float v22; // [esp+38h] [ebp-48h]
  char v23; // [esp+43h] [ebp-3Dh]
  float v24; // [esp+60h] [ebp-20h]
  float v25; // [esp+64h] [ebp-1Ch]
  float v26; // [esp+68h] [ebp-18h]
  float v27; // [esp+6Ch] [ebp-14h] BYREF
  float v28; // [esp+70h] [ebp-10h]
  float v29; // [esp+74h] [ebp-Ch]
  float v30; // [esp+78h] [ebp-8h]
  char v31; // [esp+7Fh] [ebp-1h]

  v2 = (float *)this[2];
  v3 = this[1];
  v27 = v2[38];
  v28 = v2[39];
  v29 = v2[40];
  if ( sub_100F7AF0(v3) )
  {
    for ( i = 0; i < 12; *(float *)((char *)&v26 + i) = v6 + *(float *)((char *)&v26 + i) )
    {
      v30 = *(float *)(i + (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50) + 36);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v6 = v30 - *(float *)(i + v5 + 12);
      i += 4;
    }
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v24 = v8[6] - v7[3];
    v25 = v8[7] - v7[4];
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120);
    v26 = v8[8] - v7[5];
    v10 = (float *)v9(dword_10412D50);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v12 = -(v25 - (v11[13] - v10[10]));
    v13 = -(v26 - (v11[14] - v10[11]));
    v27 = v27 - (v24 - (v11[12] - v10[9]));
    v28 = v12 + v28;
    v29 = v13 + v29;
  }
  v14 = this[1];
  v15 = *(_BYTE *)(v14 + 3528);
  *(_BYTE *)(v14 + 3528) = 0;
  v16 = *this;
  v17 = this[2];
  v18 = *(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44);
  v31 = v15;
  v19 = v18(this, 0, 8, v21);
  (*(void (__thiscall **)(_DWORD *, int, float *, int))(v16 + 40))(this, v17 + 152, &v27, v19);
  *(_BYTE *)(this[1] + 3528) = v31;
  return !v23 && 1.0 == v22;
}
