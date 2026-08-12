int __stdcall sub_10121C80(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  void (__thiscall *v4)(int, int *, int); // edx
  int result; // eax
  int (__thiscall *v6)(int, const char *, _DWORD, _DWORD *, _DWORD *, int); // edx
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

  v2 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v3 = *(_DWORD **)a1;
  v17[0] = v7;
  v4 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v7[0] = 5;
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
  v17[2] = &unk_10313114;
  v17[3] = 0;
  v18 = 0;
  v19 = 0;
  a1 = v3[3];
  v4(a2, &a1, 1);
  result = a1;
  if ( a1 )
  {
    v6 = *(int (__thiscall **)(int, const char *, _DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)v2 + 24);
    LOWORD(v8) = a1;
    v13 = 4 * a1;
    return v6(v2, "elems", *v3, v17, v7, 1);
  }
  return result;
}
