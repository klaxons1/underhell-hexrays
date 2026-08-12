int __cdecl sub_101CDCC0(int a1, _BYTE *a2, float *a3, float *a4)
{
  int v4; // esi
  const char *v5; // eax
  int v7[1536]; // [esp+2Ch] [ebp-3004h] BYREF
  _BYTE Src[6144]; // [esp+182Ch] [ebp-1804h] BYREF
  int v9; // [esp+302Ch] [ebp-4h] BYREF

  v4 = sub_100E2680((int)"prop_ragdoll", a3, a4, 0);
  *(_BYTE *)(v4 + 1866) = 1;
  sub_101CCB60(v4);
  *(_DWORD *)(v4 + 460) = *sub_10162BE0(&v9, a2);
  sub_100D8500((_DWORD *)v4);
  v5 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v4 + 28))(v4, &v9);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 104))(v4, v5);
  sub_100C3330(v4, 0);
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v4 + 776))(v4, Src, 524032);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 140))(v4, 0, -1);
  memcpy_0(v7, Src, sizeof(v7));
  sub_101CD150(
    v4,
    &flt_106F1CA8,
    -1,
    &flt_106F1CA8,
    (int)Src,
    (int)v7,
    0.1,
    *(_DWORD *)(dword_106960A4 + 48),
    (_DWORD *)1,
    1);
  return v4;
}
