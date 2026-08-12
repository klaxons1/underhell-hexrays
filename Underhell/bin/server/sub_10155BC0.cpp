int __thiscall sub_10155BC0(_DWORD **this, int **a2, int *a3)
{
  int v3; // edx
  int v4; // edi
  void *v5; // esp
  int result; // eax
  _BYTE v7[12]; // [esp+0h] [ebp-10h] BYREF
  _DWORD **v8; // [esp+Ch] [ebp-4h]
  int *v9; // [esp+18h] [ebp+8h]

  v3 = *a3;
  v8 = this;
  v9 = *a2;
  v4 = (*(int (__thiscall **)(int *))(v3 + 56))(a3);
  v5 = alloca(v4);
  (*(void (__thiscall **)(int *, _BYTE *, int, int))(*a3 + 80))(a3, v7, v4, v4);
  result = (*(int (__thiscall **)(_DWORD *, int, _BYTE *, int, _DWORD))(*v8[1] + 32))(v8[1], 1, v7, -1, 0);
  *v9 = result;
  return result;
}
