void __usercall sub_1024F010(int a1@<ecx>, int a2@<edi>)
{
  int (__stdcall *v3)(int, int); // edx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  if ( *(_BYTE *)(a1 + 355) )
  {
    v3 = **(int (__stdcall ***)(int, int))a1;
    *(_BYTE *)(a1 + 356) = 1;
    v4 = dword_1047CA6C;
    v5 = *(_DWORD *)dword_1047CA6C;
    v6 = v3(1, a2);
    (*(void (__thiscall **)(int, int))(v5 + 176))(v4, v6);
    *(_BYTE *)(a1 + 356) = *(_BYTE *)(a1 + 356) == 0;
    v7 = (_DWORD *)sub_10229D00(32);
    if ( v7 )
      v8 = sub_10229D20(v7, (int)"FlashWindow");
    else
      v8 = 0;
    (*(void (__thiscall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)a1 + 132))(a1, a1, v8, 1.8);
  }
}
