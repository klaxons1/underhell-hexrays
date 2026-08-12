__int16 __usercall sub_10241BA0@<ax>(_WORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v3; // esi
  int v4; // edx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  _WORD *v11; // ecx

  LOWORD(v6) = a1[40] >> 9;
  if ( (a1[40] & 0x200) != 0 )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(_WORD *))(*(_DWORD *)a1 + 112))(a1);
    LOWORD(v6) = sub_10241830(a1, v7);
  }
  if ( (*((_BYTE *)a1 + 81) & 1) != 0 )
  {
    v8 = dword_1047CA7C;
    v9 = *(_DWORD *)dword_1047CA7C;
    v10 = (*(int (__thiscall **)(_WORD *, int, int))(*(_DWORD *)a1 + 80))(a1, a3, a2);
    v6 = (*(int (__thiscall **)(int, int))(v9 + 32))(v8, v10);
    if ( v6 )
    {
      LOWORD(v6) = (*(int (__thiscall **)(_WORD *, int))(*(_DWORD *)a1 + 332))(a1, v6);
      v11 = a1;
      v3 = 0;
      if ( *((int *)v11 + 29) > 0 )
      {
        v6 = 0;
        do
        {
          v4 = *((_DWORD *)v11 + 26);
          if ( *(_BYTE *)(v6 + v4 + 12) )
            **(_DWORD **)(v4 + v6 + 4) = *(_DWORD *)(v6 + v4 + 8);
          ++v3;
          v6 += 16;
        }
        while ( v3 < *((_DWORD *)v11 + 29) );
      }
    }
  }
  return v6;
}
