int __stdcall sub_103FB780(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edi
  int (__thiscall *v4)(int, _DWORD **, int); // edx
  _DWORD *v5; // ecx
  int result; // eax
  int v7; // esi
  _DWORD v8[9]; // [esp+Ch] [ebp-50h] BYREF
  int i; // [esp+30h] [ebp-2Ch]
  int v10; // [esp+34h] [ebp-28h]
  int v11; // [esp+38h] [ebp-24h]
  int v12; // [esp+3Ch] [ebp-20h]
  _DWORD v13[4]; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v14; // [esp+50h] [ebp-Ch]
  int v15; // [esp+54h] [ebp-8h]
  _DWORD *v16; // [esp+58h] [ebp-4h]

  v2 = (_DWORD *)*a1;
  v3 = a2;
  v13[0] = v8;
  v4 = *(int (__thiscall **)(int, _DWORD **, int))(*(_DWORD *)a2 + 52);
  v8[0] = 10;
  v8[1] = "elems";
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 131073;
  memset(&v8[5], 0, 12);
  v8[8] = &dword_1068564C;
  i = -1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13[1] = 1;
  v13[2] = &unk_10487748;
  v13[3] = 0;
  v14 = 0;
  v15 = 0;
  v5 = (_DWORD *)v2[3];
  v16 = v2;
  a1 = v5;
  result = v4(a2, &a1, 1);
  v7 = 0;
  for ( i = 0; v7 < (int)a1; ++v7 )
    result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v3 + 20))(v3, *v16 + 8 * v7, v13);
  return result;
}
