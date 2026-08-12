int sub_102D9770()
{
  int v0; // eax
  _DWORD *v1; // edi
  int v2; // ebx
  _DWORD *v3; // esi

  v0 = sub_101811E0("bodyque", -1);
  *(_DWORD *)(v0 + 252) |= 0x10u;
  dword_106DEA60 = v0;
  v1 = (_DWORD *)v0;
  v2 = 3;
  do
  {
    v3 = (_DWORD *)sub_101811E0("bodyque", -1);
    v3[63] |= 0x10u;
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v1 + 76))(v1, v3);
    --v2;
    v1 = v3;
  }
  while ( v2 );
  return (*(int (__thiscall **)(_DWORD *, int))(*v3 + 76))(v3, dword_106DEA60);
}
