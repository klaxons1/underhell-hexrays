int __thiscall sub_104098A0(_DWORD *this, int a2, char a3)
{
  int v4; // edx
  int *v5; // ecx
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  int v10; // edx
  int (__thiscall *v11)(int, _DWORD *); // edx
  double v12; // st7
  double v13; // st7
  _DWORD v15[20]; // [esp+10h] [ebp-84h] BYREF
  __int16 v16; // [esp+60h] [ebp-34h]
  char v17; // [esp+63h] [ebp-31h]
  __int16 v18; // [esp+64h] [ebp-30h]
  _BYTE v19[12]; // [esp+68h] [ebp-2Ch] BYREF
  int v20; // [esp+74h] [ebp-20h]
  int v21; // [esp+78h] [ebp-1Ch]
  float v22; // [esp+7Ch] [ebp-18h] BYREF
  float v23; // [esp+80h] [ebp-14h]
  float v24; // [esp+84h] [ebp-10h]
  float v25; // [esp+88h] [ebp-Ch] BYREF
  float v26; // [esp+8Ch] [ebp-8h]
  float v27; // [esp+90h] [ebp-4h]
  int v28; // [esp+A0h] [ebp+Ch]

  v21 = sub_100D7680(a2);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 3, 0.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1116))(a2);
  v4 = this[300] - 1;
  v20 = v4;
  if ( this[300] != v4 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)this[6];
      if ( v5 )
      {
        sub_100194B0(v5, 1200);
        v4 = v20;
      }
    }
    this[300] = v4;
  }
  if ( a3 )
  {
    v6 = sub_100BEF30((int)this, "muzzle");
    sub_100BCCA0(this, v6, (int)&v25, (int)v19);
    sub_10422220(v19, &v22);
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 968))(a2, v19);
    v25 = *v7;
    v26 = v7[1];
    v27 = v7[2];
    v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v21 + 2104))(v21, v19, &v25);
    v22 = *v8;
    v23 = v8[1];
    v24 = v8[2];
  }
  v28 = this[298];
  v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 1100))(this);
  *(float *)&v15[17] = 1.0;
  v10 = *(_DWORD *)a2;
  *(float *)&v15[1] = v25;
  v11 = *(int (__thiscall **)(int, _DWORD *))(v10 + 432);
  v15[11] = v28;
  *(float *)&v15[2] = v26;
  *(float *)&v15[3] = v27;
  v15[19] = 0;
  *(float *)&v15[4] = v22;
  v18 = 0;
  v17 = 0;
  *(float *)&v15[5] = v23;
  v15[0] = 8;
  memset(&v15[12], 0, 20);
  *(float *)&v15[6] = v24;
  v12 = *v9;
  v15[18] = 0;
  *(float *)&v15[7] = v12;
  v13 = v9[1];
  v16 = 1;
  *(float *)&v15[8] = v13;
  *(float *)&v15[9] = v9[2];
  *(float *)&v15[10] = 56755.84;
  return v11(a2, v15);
}
