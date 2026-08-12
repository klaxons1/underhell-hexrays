int __stdcall sub_102B5210(int **a1, int a2)
{
  int *v2; // edi
  int (__thiscall *v3)(int); // eax
  int result; // eax
  int v5; // ebx
  int v6; // edi
  _DWORD v7[9]; // [esp+Ch] [ebp-50h] BYREF
  int v8; // [esp+30h] [ebp-2Ch]
  int v9; // [esp+34h] [ebp-28h]
  int v10; // [esp+38h] [ebp-24h]
  int v11; // [esp+3Ch] [ebp-20h]
  _DWORD v12[4]; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v13; // [esp+50h] [ebp-Ch]
  int v14; // [esp+54h] [ebp-8h]
  int *v15; // [esp+58h] [ebp-4h]
  int v16; // [esp+64h] [ebp+8h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12[0] = v7;
  v2 = *a1;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v7[0] = 10;
  v7[1] = "elems";
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 131073;
  memset(&v7[5], 0, 12);
  v7[8] = &dword_10660BC4;
  v8 = -1;
  v12[1] = 1;
  v12[2] = &unk_10487748;
  v12[3] = 0;
  v13 = 0;
  v14 = 0;
  v15 = v2;
  v16 = v3(a2);
  v2[3] = 0;
  result = sub_102B4030(v2, 0, v16, 0);
  v8 = 0;
  if ( v16 > 0 )
  {
    v5 = v16;
    v6 = 0;
    do
    {
      result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, v6 + *v15, v12);
      v6 += 12;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
