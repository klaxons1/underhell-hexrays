int __stdcall sub_1026BC50(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // ebx
  int v4; // esi
  int (__thiscall *v5)(int, _DWORD **, int); // edx
  _DWORD *v6; // ecx
  int result; // eax
  int v8; // edi
  _DWORD v9[9]; // [esp+8h] [ebp-50h] BYREF
  int v10; // [esp+2Ch] [ebp-2Ch]
  int v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+34h] [ebp-24h]
  int v13; // [esp+38h] [ebp-20h]
  _DWORD v14[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v15; // [esp+4Ch] [ebp-Ch]
  int v16; // [esp+50h] [ebp-8h]
  _DWORD *v17; // [esp+54h] [ebp-4h]

  v2 = (_DWORD *)*a1;
  v3 = 0;
  v4 = a2;
  v14[0] = v9;
  v5 = *(int (__thiscall **)(int, _DWORD **, int))(*(_DWORD *)a2 + 52);
  v9[0] = 10;
  v9[1] = "elems";
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 131073;
  memset(&v9[5], 0, 12);
  v9[8] = &dword_10654938;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14[1] = 1;
  v14[2] = &unk_10487748;
  v14[3] = 0;
  v15 = 0;
  v16 = 0;
  v6 = (_DWORD *)v2[3];
  v17 = v2;
  a1 = v6;
  result = v5(a2, &a1, 1);
  v10 = 0;
  if ( (int)a1 > 0 )
  {
    v8 = 0;
    do
    {
      result = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v4 + 20))(v4, v8 + *v17, v14);
      ++v3;
      v8 += 16;
    }
    while ( v3 < (int)a1 );
  }
  return result;
}
