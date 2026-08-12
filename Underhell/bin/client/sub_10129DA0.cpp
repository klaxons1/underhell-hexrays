void __userpurge sub_10129DA0(int a1@<ecx>, int a2@<esi>, int (__thiscall ***a3)(_DWORD))
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  unsigned __int8 *v7; // ebx
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax

  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( (*(_BYTE *)(v4 + 28) & 0xF) == 3 )
    {
      v5 = (**(int (***)(void))v4)();
      if ( v5 )
      {
        v6 = (**a3)(a3);
        v7 = (unsigned __int8 *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6);
        if ( v7 )
        {
          v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 20))(v5, a2);
          v9 = sub_10034200(v7);
          v10 = v9 % v8;
          if ( !*(_BYTE *)(a1 + 12) && v9 > v8 )
            v10 = v8;
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), v10);
          if ( (unsigned __int8)sub_101BC880() )
          {
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
            sub_101BCA60(v11);
          }
        }
      }
    }
  }
}
