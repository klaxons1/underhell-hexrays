int __cdecl sub_10101720(int *a1, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  _DWORD v8[3]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *a1;
  v3 = a1[1];
  v8[2] = a1[2];
  v8[0] = v2;
  v4 = *a2;
  v8[1] = v3;
  v5 = a2[1];
  v9[2] = a2[2];
  v9[0] = v4;
  v9[1] = v5;
  v6 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)dword_10436250 + 116))(dword_10436250, v8, v9);
  (**(void (__thiscall ***)(void *, _DWORD *, _DWORD *, int))off_103E1DD0)(off_103E1DD0, v8, v9, v6);
  return v6;
}
