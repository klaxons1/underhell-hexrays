int __stdcall sub_10123030(_DWORD **a1, int a2)
{
  _DWORD *v2; // esi
  int (__thiscall *v3)(int); // eax
  int result; // eax
  int v5; // edi
  int v6; // eax
  char *v7; // ecx
  int v8; // eax
  int (__thiscall *v9)(int, const char *, _DWORD, _DWORD *, _DWORD *, int); // edx
  _DWORD v10[4]; // [esp+Ch] [ebp-4Ch] BYREF
  int v11; // [esp+1Ch] [ebp-3Ch]
  int v12; // [esp+20h] [ebp-38h]
  int v13; // [esp+24h] [ebp-34h]
  int v14; // [esp+28h] [ebp-30h]
  int v15; // [esp+2Ch] [ebp-2Ch]
  int v16; // [esp+30h] [ebp-28h]
  int v17; // [esp+34h] [ebp-24h]
  int v18; // [esp+38h] [ebp-20h]
  int v19; // [esp+3Ch] [ebp-1Ch]
  _DWORD v20[4]; // [esp+40h] [ebp-18h] BYREF
  __int16 v21; // [esp+50h] [ebp-8h]
  int v22; // [esp+54h] [ebp-4h]

  v2 = *a1;
  v20[0] = v10;
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 56);
  v10[0] = 5;
  v10[1] = "elems";
  v10[2] = 0;
  v10[3] = 0;
  v11 = 131073;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20[1] = 1;
  v20[2] = &unk_10313114;
  v20[3] = 0;
  v21 = 0;
  v22 = 0;
  result = v3(a2);
  v5 = result;
  v2[3] = 0;
  if ( result )
  {
    v6 = v2[1];
    if ( v5 > v6 )
      sub_1010AFF0(v2, v5 - v6);
    v2[3] += v5;
    v7 = (char *)*v2;
    v8 = v2[3] - v5;
    v2[4] = *v2;
    if ( v8 > 0 && v5 > 0 )
      memcpy(&v7[4 * v5], v7, 4 * v8);
    v16 = 4 * v5;
    v9 = *(int (__thiscall **)(int, const char *, _DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)a2 + 12);
    LOWORD(v11) = v5;
    return v9(a2, "elems", *v2, v20, v10, 1);
  }
  return result;
}
