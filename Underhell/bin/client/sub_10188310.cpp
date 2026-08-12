int __thiscall sub_10188310(int this, const char *a2)
{
  const char *v2; // ebx
  int v4; // esi
  int v6; // esi
  void (__thiscall *v7)(int, int, const char *, int, _DWORD); // eax
  const char *v8; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2;
  if ( a2 )
  {
    v8 = a2;
    v4 = sub_10009730((unsigned __int8 (__cdecl **)(int, int))(this + 5728), (int)&v8);
  }
  else
  {
    v4 = -1;
  }
  if ( v4 >= 0
    && v4 < *(_DWORD *)(this + 5736)
    && v4 <= *(_DWORD *)(this + 5756)
    && sub_10009060((_DWORD *)(this + 5728), v4) != v4 )
  {
    return *(_DWORD *)(*(_DWORD *)(this + 5732) + 24 * v4 + 20);
  }
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  v7 = *(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120);
  a2 = (const char *)v6;
  v7(dword_1047CA6C, v6, v2, 1, 0);
  sub_10009FD0(this + 5728, v2, (char **)&a2);
  return v6;
}
