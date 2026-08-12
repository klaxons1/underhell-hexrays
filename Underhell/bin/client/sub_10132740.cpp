int __thiscall sub_10132740(void *this, int a2, _DWORD *a3, int *a4, int a5)
{
  int v5; // esi
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int result; // eax

  v5 = a2;
  if ( !a2 )
  {
    v6 = dword_1047CA7C;
    v7 = *(_DWORD *)dword_1047CA7C;
    v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 80))(this);
    v9 = (*(int (__thiscall **)(int, int))(v7 + 32))(v6, v8);
    v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 12))(v9, "Default", 0);
  }
  *a3 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)dword_1047CA64 + 548))(dword_1047CA64, v5, a5);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v5);
  *a4 = result;
  return result;
}
