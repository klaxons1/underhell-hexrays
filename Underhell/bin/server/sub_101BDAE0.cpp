int __stdcall sub_101BDAE0(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int (__thiscall *v3)(int); // eax
  int result; // eax
  int v5; // esi
  _DWORD v6[9]; // [esp+Ch] [ebp-50h] BYREF
  int i; // [esp+30h] [ebp-2Ch]
  int v8; // [esp+34h] [ebp-28h]
  int v9; // [esp+38h] [ebp-24h]
  int v10; // [esp+3Ch] [ebp-20h]
  _DWORD v11[4]; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v12; // [esp+50h] [ebp-Ch]
  int v13; // [esp+54h] [ebp-8h]
  _DWORD *v14; // [esp+58h] [ebp-4h]
  int v15; // [esp+64h] [ebp+8h]

  v2 = (_DWORD *)*a1;
  v11[0] = v6;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v6[0] = 10;
  v6[1] = "elems";
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 131073;
  memset(&v6[5], 0, 12);
  v6[8] = &dword_10637A84;
  i = -1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11[1] = 1;
  v11[2] = &unk_10487748;
  v11[3] = 0;
  v12 = 0;
  v13 = 0;
  v14 = v2;
  v15 = v3(a2);
  v2[3] = 0;
  result = sub_103FB840(0, v15, 0);
  v5 = 0;
  for ( i = 0; v5 < v15; ++v5 )
    result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 8))(a2, *v14 + 8 * v5, v11);
  return result;
}
