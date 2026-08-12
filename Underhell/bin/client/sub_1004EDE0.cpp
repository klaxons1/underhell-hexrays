int __userpurge sub_1004EDE0@<eax>(int a1@<ecx>, double a2@<st0>, unsigned int a3)
{
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  float v15; // [esp+1Ch] [ebp-14h]
  void (__thiscall **v16)(int, int, int); // [esp+2Ch] [ebp-4h]
  void (__thiscall **v17)(int, int, int, int); // [esp+2Ch] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 116) || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) )
    return 0;
  v5 = *(_DWORD *)dword_10413178;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  if ( (*(int (__thiscall **)(int, int))(v5 + 36))(dword_10413178, v6) != 1 )
    return 0;
  v7 = a1 - 4;
  v8 = *(_DWORD *)dword_10413168;
  sub_1004ED70((float *)(a1 - 4));
  v15 = a2;
  (*(void (__thiscall **)(int, _DWORD))(v8 + 16))(dword_10413168, LODWORD(v15));
  v16 = *(void (__thiscall ***)(int, int, int))dword_10413168;
  v9 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)(a1 - 4) + 40))(a1 - 4, a3 >> 31);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 - 4) + 36))(a1 - 4, v9);
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 36))(a1, v10);
  (*v16)(dword_10413168, a1 - 4, v11);
  if ( *(int *)(a1 + 1200) >= 0 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
    v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *(_DWORD *)(a1 + 1200));
    if ( v12 )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v12) == 1 )
      {
        v17 = *(void (__thiscall ***)(int, int, int, int))dword_10413168;
        v13 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v7 + 40))(v7, a3 >> 31);
        v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 36))(v7, v13);
        (*v17)(dword_10413168, v7, v12, v14);
      }
    }
  }
  return 1;
}
