int __userpurge sub_100EFAE0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int result; // eax
  int v6; // ebx
  unsigned __int16 v7; // ax
  int v8; // edx
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int *v13; // eax

  result = a4;
  if ( !*(_DWORD *)(a4 + 24) )
  {
    v6 = 0;
    v7 = sub_100EDD20(a1 + 180);
    if ( v7 != 0xFFFF )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(a1 + 184);
        if ( *(_DWORD *)(v8 + 16 * v7 + 12) == a4 )
          break;
        v7 = sub_100EDDF0((_DWORD *)(a1 + 180), v7);
        if ( v7 == 0xFFFF )
        {
          v6 = 0;
          goto LABEL_7;
        }
      }
      v6 = *(_DWORD *)(v8 + 16 * v7 + 8);
    }
LABEL_7:
    result = (*(int (__thiscall **)(_DWORD, int, const char *, int, _DWORD))(**(_DWORD **)(a1 + 92) + 280))(
               *(_DWORD *)(a1 + 92),
               v6,
               "Particle textures",
               1,
               0);
    v9 = result;
    *(_DWORD *)(a4 + 24) = result;
    if ( result )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)result + 48))(result, a3, a2);
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 92) + 380))(*(_DWORD *)(a1 + 92));
      v11 = v10;
      if ( v10 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 28))(v9) && v12 )
      {
        v13 = *(int **)(a4 + 16);
        if ( !*v13 )
        {
          *v13 = v12;
          (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 48))(v12);
        }
      }
      else
      {
        **(_DWORD **)(a4 + 16) = v9;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
    }
  }
  return result;
}
