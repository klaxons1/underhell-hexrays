void __userpurge sub_101B6110(_DWORD *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // edi
  int v6; // ebx
  int i; // edi
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  _DWORD *v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  int v16; // [esp+2Ch] [ebp+8h]
  int v17; // [esp+2Ch] [ebp+8h]

  v4 = sub_100422D0();
  v14 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = a1[114];
    a1[115] = 0;
    if ( v6 == -1 || (((unsigned __int8)a3 ^ (unsigned __int8)v6) & 1) != 0 )
    {
      a1[113] = 0;
      a1[114] = a3;
    }
    else
    {
      v16 = 1;
      if ( v6 != a3 )
      {
        v16 = -1;
        if ( !a1[113] )
        {
          v6 = (v6 + 2) % 4;
          v16 = 0;
        }
      }
      v15 = -1;
      for ( i = 0; i < 20; ++i )
      {
        if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 84))(a1, v6, i) )
          v15 = i;
      }
      v8 = v16 + a1[113];
      if ( v8 > v15 )
      {
        sub_101212D0(v14, (int)"Player.DenyWeaponSelection", 0.0, 0);
        return;
      }
      v4 = (int)v14;
      a1[113] = v8;
      a1[114] = v6;
    }
    v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 788))(v4, a2);
    v9 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 84))(a1, a1[114], a1[113]);
    v10 = v9;
    if ( !v9 || v9 == v17 )
    {
      v11 = *a1;
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 788))(v4);
      (*(void (__thiscall **)(_DWORD *, int))(v11 + 148))(a1, v12);
    }
    else
    {
      (*(void (__thiscall **)(int *))(*off_103ED0D8 + 60))(off_103ED0D8);
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 148))(a1, v10);
    }
  }
}
