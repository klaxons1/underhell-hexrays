int __thiscall sub_10237520(int (__thiscall ***this)(void *, int *, _BYTE *), _BYTE *a2)
{
  int *v2; // edi
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int *v10; // [esp+10h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = (int *)dword_1047CA70;
  v4 = dword_1047CA70;
  v5 = *(_DWORD *)dword_1047CA70;
  v6 = (**this)(this, (int *)&v10, v11);
  (*(void (__thiscall **)(int, int))(v5 + 20))(v4, v6);
  v7 = *v2;
  v8 = (**this)(this, v10, a2);
  return (*(int (__thiscall **)(int *, int))(v7 + 16))(v2, v8);
}
