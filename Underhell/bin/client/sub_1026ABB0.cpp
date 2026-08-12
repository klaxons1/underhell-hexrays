int __usercall sub_1026ABB0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // [esp+4h] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+8h] [ebp-4h] BYREF
  char *retaddr; // [esp+Ch] [ebp+0h]

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 228) + 128))(*(_DWORD *)(a1 + 228));
  if ( (_BYTE)result )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v8, (int)v9);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 40))(
      dword_1047CA6C,
      *(_DWORD *)(a1 + 376),
      a3,
      a2);
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1);
    v5 = dword_1047CA6C;
    v6 = *(_DWORD *)dword_1047CA6C;
    sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 228));
    v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 228));
    return (*(int (__thiscall **)(int, char *, int))(v6 + 48))(v5, &retaddr[-v7], -1);
  }
  return result;
}
