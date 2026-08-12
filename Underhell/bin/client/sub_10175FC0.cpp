int __cdecl sub_10175FC0(int a1)
{
  int v1; // eax
  float v2; // edx
  float v3; // ecx
  float v4; // eax
  float v5; // edx
  int result; // eax
  int v7; // esi
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  float v11; // [esp+8h] [ebp-18h] BYREF
  float v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch] BYREF
  float v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+1Ch] [ebp-4h]

  v1 = *(int *)a1;
  v2 = *(float *)(a1 + 8);
  v12 = *(float *)(a1 + 4);
  v3 = *(float *)(a1 + 40);
  v11 = *(float *)&v1;
  v4 = *(float *)(a1 + 36);
  v13 = v2;
  v5 = *(float *)(a1 + 44);
  v15 = v3;
  v14 = v4;
  v16 = v5;
  if ( sub_1009B7F0((int *)a1) > 0 )
  {
    result = sub_1009B7B0((int *)a1);
    v7 = result;
    if ( !result )
      return result;
    v8 = *(_DWORD *)(a1 + 68);
    if ( v8 )
    {
      (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v7 + 148))(v7, v8, &v11, &v14);
    }
    else
    {
      v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
      v11 = *v9;
      v12 = v9[1];
      v13 = v9[2];
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      v14 = *v10;
      v15 = v10[1];
      v16 = v10[2];
    }
  }
  return ((int (__stdcall *)(float *, float *, unsigned int, _DWORD, int))(*off_103E9C2C)[9])(
           &v11,
           &v14,
           *(_DWORD *)(a1 + 48) & 0xFFFFFEFF,
           *(_DWORD *)(a1 + 52),
           BYTE1(*(_DWORD *)(a1 + 48)) & 1);
}
