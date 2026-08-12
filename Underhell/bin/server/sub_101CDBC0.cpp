_DWORD *__cdecl sub_101CDBC0(int a1, _BYTE *a2, float *a3, float *a4, int a5)
{
  _DWORD *v5; // esi
  const char *v6; // eax
  int v8[1536]; // [esp+38h] [ebp-3004h] BYREF
  _BYTE Src[6144]; // [esp+1838h] [ebp-1804h] BYREF
  int v10; // [esp+3038h] [ebp-4h] BYREF

  v5 = (_DWORD *)sub_100E2680((int)"prop_ragdoll", a3, a4, a1);
  v5[115] = *sub_10162BE0(&v10, a2);
  sub_100D8500(v5);
  v6 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*v5 + 28))(v5, &v10);
  if ( !v6 )
    v6 = String;
  (*(void (__thiscall **)(_DWORD *, const char *))(*v5 + 104))(v5, v6);
  sub_100C3330((int)v5, 0);
  (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 140))(v5, a1, -1);
  (*(void (__thiscall **)(_DWORD *, _BYTE *, int))(*v5 + 776))(v5, Src, 524032);
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 140))(v5, 0, -1);
  memcpy_0(v8, Src, sizeof(v8));
  sub_101CD150((int)v5, &flt_106F1CA8, -1, &flt_106F1CA8, (int)Src, (int)v8, 0.1, a5, (_DWORD *)1, 1);
  return v5;
}
