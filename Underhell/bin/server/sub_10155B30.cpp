int __thiscall sub_10155B30(_DWORD **this, _DWORD **a2, int a3)
{
  const char *v3; // edi
  int v4; // esi

  v3 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this[1] + 36))(this[1], **a2);
  v4 = a3;
  a2 = (_DWORD **)(strlen(v3) + 1);
  (*(void (__thiscall **)(int, _DWORD ***, int))(*(_DWORD *)a3 + 52))(a3, &a2, 1);
  return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 92))(v4, v3);
}
