void __usercall sub_10254AE0(int (__thiscall ***a1)(void *, int, int)@<ecx>, int a2@<ebx>)
{
  int v3; // ebx
  wint_t v4; // di
  int (__thiscall **v5)(void *, int, int); // ebp
  char *v6; // eax
  int v7; // eax
  int v8; // [esp+10h] [ebp-10h]
  int i; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h] BYREF
  int v11; // [esp+1Ch] [ebp-4h] BYREF
  char *retaddr; // [esp+20h] [ebp+0h] BYREF

  if ( !*((_BYTE *)a1 + 341) )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), int))(*a1)[127])(a1, a2);
    v3 = 0;
    for ( i = 6; v3 < (int)a1[58]; ++v3 )
    {
      v4 = *((_WORD *)a1[55] + v3);
      v5 = a1[83];
      if ( iswcntrl(v4) )
      {
        v6 = 0;
      }
      else
      {
        (*(void (__thiscall **)(int, int (__thiscall **)(void *, int, int), _DWORD, int *, int *, char **))(*(_DWORD *)dword_1047CA6C + 280))(
          dword_1047CA6C,
          v5,
          v4,
          &v11,
          &v10,
          &retaddr);
        v6 = &retaddr[v11 + v10];
      }
      i += (int)v6;
    }
    v7 = (*(int (__thiscall **)(int, int (__thiscall **)(void *, int, int)))(*(_DWORD *)dword_1047CA6C + 268))(
           dword_1047CA6C,
           a1[83]);
    sub_102361A0(a1, v8, v7 + 4);
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*a1)[127])(a1);
  }
}
