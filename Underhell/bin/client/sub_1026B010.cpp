void __usercall sub_1026B010(int a1@<edi>, int a2, int (__thiscall ***a3)(void *, int, int), int a4)
{
  char *v4; // eax
  int v5; // ecx
  int v6; // [esp+2Ch] [ebp-10h] BYREF
  int v7; // [esp+30h] [ebp-Ch] BYREF
  int v8; // [esp+34h] [ebp-8h] BYREF
  int v9; // [esp+38h] [ebp-4h] BYREF
  char *retaddr; // [esp+3Ch] [ebp+0h] BYREF

  if ( a3 && a2 )
  {
    (*a3)[31](a3, 0, a1);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*a3)[39])(a3, a2);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*a3)[43])(a3, a2);
    (*(void (__thiscall **)(int, char **, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &retaddr, &v7);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*a3)[31])(a3, 1);
    (*a3)[61](a3, 1, 0);
    sub_102361D0(a3, (int)&v9, (int)&v6);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v8, &a4);
    v4 = retaddr;
    v5 = v7;
    if ( v8 - v9 <= (int)retaddr )
    {
      if ( a4 - v6 <= v7 )
        v5 = v7 - v6;
      v4 = &retaddr[-v9];
    }
    else if ( a4 - v6 <= v7 )
    {
      v5 = v7 - v6;
    }
    sub_10236140(a3, (int)v4, v5);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*a3)[12])(a3, 0);
  }
}
