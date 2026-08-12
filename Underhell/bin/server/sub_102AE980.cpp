int __stdcall sub_102AE980(int **a1, int a2)
{
  int *v2; // edi
  int (__thiscall *v3)(int); // eax
  int v4; // esi
  int result; // eax
  int (__thiscall *v6)(int, const char *, int, _DWORD *, _DWORD *, int); // edx
  _DWORD v7[4]; // [esp+Ch] [ebp-4Ch] BYREF
  int v8; // [esp+1Ch] [ebp-3Ch]
  int v9; // [esp+20h] [ebp-38h]
  int v10; // [esp+24h] [ebp-34h]
  int v11; // [esp+28h] [ebp-30h]
  int v12; // [esp+2Ch] [ebp-2Ch]
  int v13; // [esp+30h] [ebp-28h]
  int v14; // [esp+34h] [ebp-24h]
  int v15; // [esp+38h] [ebp-20h]
  int v16; // [esp+3Ch] [ebp-1Ch]
  _DWORD v17[4]; // [esp+40h] [ebp-18h] BYREF
  __int16 v18; // [esp+50h] [ebp-8h]
  int v19; // [esp+54h] [ebp-4h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17[0] = v7;
  v2 = *a1;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v7[0] = 13;
  v7[1] = "elems";
  v7[2] = 0;
  v7[3] = 0;
  v8 = 131073;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = -1;
  v17[1] = 1;
  v17[2] = &unk_10487748;
  v17[3] = 0;
  v18 = 0;
  v19 = 0;
  v4 = v3(a2);
  v2[3] = 0;
  result = sub_100F89E0(v2, 0, v4, 0);
  if ( v4 )
  {
    v13 = 4 * v4;
    v6 = *(int (__thiscall **)(int, const char *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)a2 + 12);
    LOWORD(v8) = v4;
    return v6(a2, "elems", *v2, v17, v7, 1);
  }
  return result;
}
