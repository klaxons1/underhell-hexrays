int __thiscall sub_100D0F70(float *this)
{
  int v2; // edi
  int v3; // ebx
  _DWORD *v4; // eax
  char v6[4]; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *((_DWORD *)this + 82));
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (_DWORD *)(*(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 228))(this, v6);
  (*(void (__thiscall **)(int, _DWORD))(v3 + 72))(v2, *v4);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, (int)this[84], (int)this[86]);
  return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
           dword_1047CA6C,
           (_DWORD *)this + 54,
           0);
}
