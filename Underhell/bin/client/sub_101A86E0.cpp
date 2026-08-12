char __thiscall sub_101A86E0(float *this, int a2)
{
  float v3; // eax
  float v4; // ecx
  float v5; // edx
  float v6; // eax
  unsigned int i; // esi
  char result; // al
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v13; // ecx
  float v14; // [esp+8h] [ebp-2Ch] BYREF
  float v15; // [esp+Ch] [ebp-28h]
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+14h] [ebp-20h]
  float v18; // [esp+18h] [ebp-1Ch] BYREF
  float v19; // [esp+1Ch] [ebp-18h]
  float v20; // [esp+20h] [ebp-14h]
  float v21; // [esp+24h] [ebp-10h]
  float v22; // [esp+28h] [ebp-Ch]
  float v23; // [esp+2Ch] [ebp-8h]
  float v24; // [esp+30h] [ebp-4h]

  v3 = this[1];
  v4 = this[2];
  v5 = this[3];
  v14 = v3;
  v6 = this[4];
  v15 = v4;
  v16 = v5;
  v17 = v6;
  for ( i = 0; i < 4; ++i )
  {
    if ( (int)i >= dword_1044CAC8 )
    {
      v21 = 0.0;
      v20 = 0.0;
      v19 = 0.0;
      v18 = 0.0;
    }
    else
    {
      result = sub_10034120();
      if ( !result )
        continue;
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_1044CABC + 4 * i) + 36))(*(_DWORD *)(dword_1044CABC + 4 * i));
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v22 = v10;
      v18 = v10;
      v23 = v11;
      v19 = v11;
      v24 = v12;
      v20 = v12;
      v21 = sub_101A8610((float *)*(_DWORD *)(dword_1044CABC + 4 * i));
    }
    result = (*(int (__thiscall **)(_DWORD, float *, int))(**((_DWORD **)&v14 + i) + 48))(
               *((_DWORD *)&v14 + i),
               &v18,
               4);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v13 = *((_DWORD *)this + 6);
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    return (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v13 + 48))(v13, &v14, 4);
  }
  return result;
}
