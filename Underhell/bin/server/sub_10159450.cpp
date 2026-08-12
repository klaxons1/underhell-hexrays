void __thiscall sub_10159450(int *this)
{
  int v2; // ebx
  int v3; // edi
  float v4; // eax
  int v5; // eax
  float v6; // edx
  double v7; // st7
  int (__thiscall *v8)(int *, _DWORD, int, _BYTE *); // edx
  int v9; // eax
  int v10; // edi
  int (__thiscall *v11)(int *, _DWORD, int, _BYTE *); // edx
  int v12; // eax
  float *v13; // esi
  _BYTE v14[12]; // [esp+Ch] [ebp-6Ch] BYREF
  float v15; // [esp+18h] [ebp-60h]
  float v16; // [esp+1Ch] [ebp-5Ch]
  float v17; // [esp+20h] [ebp-58h]
  float v18; // [esp+2Ch] [ebp-4Ch]
  float v19; // [esp+38h] [ebp-40h]
  char v20; // [esp+43h] [ebp-35h]
  _DWORD v21[2]; // [esp+60h] [ebp-18h] BYREF
  float v22; // [esp+68h] [ebp-10h]
  float v23; // [esp+6Ch] [ebp-Ch] BYREF
  float v24; // [esp+70h] [ebp-8h]
  float v25; // [esp+74h] [ebp-4h]

  v2 = *this;
  v3 = this[2];
  v4 = *(float *)(v3 + 152);
  v3 += 152;
  v23 = v4;
  v24 = *(float *)(v3 + 4);
  v25 = *(float *)(v3 + 8);
  v21[0] = *(_DWORD *)v3;
  v5 = this[1];
  v21[1] = *(_DWORD *)(v3 + 4);
  v6 = *(float *)(v3 + 8);
  v25 = v25 + 2.0;
  v22 = v6;
  v7 = v6 - *(float *)(v5 + 2332);
  v8 = *(int (__thiscall **)(int *, _DWORD, int, _BYTE *))(v2 + 44);
  v22 = v7;
  v9 = v8(this, 0, 8, v14);
  (*(void (__thiscall **)(int *, int, float *, int))(v2 + 40))(this, v3, &v23, v9);
  v10 = *this;
  v23 = v15;
  v11 = *(int (__thiscall **)(int *, _DWORD, int, _BYTE *))(v10 + 44);
  v24 = v16;
  v25 = v17;
  v12 = v11(this, 0, 8, v14);
  (*(void (__thiscall **)(int *, float *, _DWORD *, int))(v10 + 40))(this, &v23, v21, v12);
  if ( v19 > 0.0 && v19 < 1.0 && !v20 && v18 >= 0.7 )
  {
    v13 = (float *)this[2];
    if ( fabs(v13[40] - v17) > 0.015625 )
    {
      v13[38] = v15;
      v13[39] = v16;
      v13[40] = v17;
    }
  }
}
