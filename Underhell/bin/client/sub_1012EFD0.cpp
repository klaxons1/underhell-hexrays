int __thiscall sub_1012EFD0(void *this)
{
  int v2; // eax
  int (__thiscall *v3)(void *, _DWORD, _DWORD, int, int, int, _DWORD); // edx
  int v5; // [esp+14h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-8h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF

  sub_102361D0(&v7, &v6);
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 224))(this, &v5);
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C, 455);
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 40))(dword_1047CA7C, 227);
  v3 = *(int (__thiscall **)(void *, _DWORD, _DWORD, int, int, int, _DWORD))(*(_DWORD *)this + 536);
  v6 = v2;
  return v3(this, 0, 0, v7, v2, v5, 1.0);
}
