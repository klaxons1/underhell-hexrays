void __thiscall sub_101010F0(int *this, int a2, int a3)
{
  void *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int *v7; // eax

  v3 = *(void **)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 188))(a3) + 1380);
  v4 = (*(int (__thiscall **)(char *))(*((_DWORD *)off_103DCD78 + 16389) + 24))((char *)off_103DCD78 + 65556);
  v5 = 0;
  if ( v4 < 0 )
  {
LABEL_5:
    v7 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 8))(v3);
    v3 = (void *)sub_1007A770(off_103DCD78, *v7);
  }
  else
  {
    while ( 1 )
    {
      v6 = sub_1007A6A0(off_103DCD78, v5);
      if ( v6 )
      {
        if ( (void *)v6 == v3 )
          break;
      }
      if ( ++v5 > v4 )
        goto LABEL_5;
    }
  }
  if ( this[1] )
    sub_10100F90(&unk_10436150, v3, *(_DWORD *)(a2 + 8), *(int **)a2, this[1]);
}
