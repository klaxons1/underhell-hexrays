void __thiscall sub_1025FBF0(int this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  wint_t v7; // bp
  int v8; // eax
  int v9; // eax
  wint_t C[256]; // [esp+18h] [ebp-200h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 924))(this) )
  {
    sub_10251AA0((_BYTE *)this, a2);
  }
  else
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 952) + 928))(*(_DWORD *)(this + 952));
    if ( v3 < 0 )
      v3 = 0;
    v4 = v3 + 1;
    if ( v3 + 1 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 952) + 932))(*(_DWORD *)(this + 952)) )
      v4 = 0;
    if ( v4 != v3 )
    {
      while ( 1 )
      {
        v5 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 952) + 936))(*(_DWORD *)(this + 952), v4);
        v6 = sub_1026B780(v5);
        (*(void (__thiscall **)(int, wint_t *, int))(*(_DWORD *)v6 + 776))(v6, C, 254);
        v7 = towlower(C[0]);
        if ( v7 == towlower(a2) )
          break;
        if ( ++v4 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 952) + 932))(*(_DWORD *)(this + 952)) )
          v4 = 0;
        if ( v4 == v3 )
          goto LABEL_14;
      }
      v3 = v4;
    }
LABEL_14:
    if ( v3 < 0 || v3 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 952) + 932))(*(_DWORD *)(this + 952)) )
    {
      sub_10251AA0((_BYTE *)this, a2);
    }
    else
    {
      v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 952) + 936))(*(_DWORD *)(this + 952), v3);
      v9 = sub_1026B780(v8);
      (*(void (__thiscall **)(int, wint_t *, int))(*(_DWORD *)v9 + 776))(v9, C, 255);
      (*(void (__thiscall **)(int, wint_t *))(*(_DWORD *)this + 1024))(this, C);
      sub_102531C0((_DWORD *)this, 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 952) + 920))(*(_DWORD *)(this + 952), v3);
    }
  }
}
