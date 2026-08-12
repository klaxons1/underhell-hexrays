int __usercall sub_102754C0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  int v4; // edx
  int v5; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+Ch] [ebp-4h] BYREF

  nullsub_4();
  if ( sub_1022A800(*(_DWORD **)(a1 + 216), "SelectedImage", 0)
    || (v3 = 20, sub_1022A800(*(_DWORD **)(a1 + 216), "Image", 0)) )
  {
    v3 = 40;
  }
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(a1 + 252), v3, 0);
  sub_10254AE0(*(int (__thiscall ****)(void *, int, int))(a1 + 252), a2);
  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(a1 + 252), (int)&v7, (int)v8);
  v4 = *(_DWORD *)(a1 + 268);
  v7 += 10;
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(a1 + 252), v7, *(_DWORD *)(v4 + 256));
  v5 = v7 + v3;
  sub_102361A0((int (__thiscall ***)(void *, int, int))a1, v5, *(_DWORD *)(*(_DWORD *)(a1 + 268) + 256));
  *(_DWORD *)(a1 + 244) = v5;
  return sub_10275150(a1);
}
