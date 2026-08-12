int __thiscall sub_100943F0(int this, int *a2, int *a3)
{
  int v4; // edi
  int v5; // eax
  _DWORD *v6; // eax
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int v9[5]; // [esp+10h] [ebp-14h] BYREF

  v8 = *a2;
  memset(v9, 0, sizeof(v9));
  sub_10093F70(v9, a3);
  sub_10093150((unsigned __int8 (__cdecl **)(int, int))this, (int)&v8, (unsigned __int8 (__cdecl **)(int, int))&a3, &a2);
  v4 = sub_10094000((_DWORD *)this);
  sub_10093E60((_DWORD *)this, v4, (int)a3, (char)a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  v6 = (_DWORD *)(v5 + 40 * v4 + 16);
  if ( v6 )
  {
    *v6 = v8;
    sub_10093ED0(v6 + 1, v9);
  }
  sub_1011A810(v9);
  return v4;
}
