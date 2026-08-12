void __usercall sub_10268AF0(_BYTE *a1@<ecx>, int a2@<ebp>, int a3@<edi>)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  bool v16; // cc
  int v17; // ecx
  int v18; // ecx
  int v20; // [esp+20h] [ebp-1Ch]
  int v21; // [esp+24h] [ebp-18h]
  int v22; // [esp+30h] [ebp-Ch] BYREF
  int v23; // [esp+34h] [ebp-8h] BYREF
  int v24; // [esp+38h] [ebp-4h]

  if ( a1[316] )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 812))(a1);
  v4 = 0;
  if ( *((_DWORD *)a1 + 59) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v22, (int)&v23);
    v5 = sub_10268A80(a1);
    if ( v5 < 24 )
      v5 = 24;
    v6 = v22 / v5;
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)a1 + 52) + 124))(*((_DWORD *)a1 + 52), 0, a3);
    v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 848))(a1);
    if ( v7 < 1 )
      v7 = 1;
    v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 772))(a1);
    v9 = *((_DWORD *)a1 + 52);
    if ( (v8 + v7 - 1) / v7 <= v6 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 124))(v9, 0);
    }
    else
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 124))(v9, 1, a2);
      v7 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 848))(a1);
      v10 = v7;
      if ( v7 <= 0 )
        v10 = 1;
      v11 = ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 772))(a1) + v7 - 1) / v10;
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a1 + 52) + 200))(*((_DWORD *)a1 + 52), 0);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)a1 + 52) + 784))(*((_DWORD *)a1 + 52), v6);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)a1 + 52) + 776))(*((_DWORD *)a1 + 52), 0, v11);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)a1 + 52) + 816))(*((_DWORD *)a1 + 52), 1);
      v12 = sub_102374F0(*((int (__thiscall ****)(void *, _BYTE *, int *))a1 + 52));
      sub_10236140(*((int (__thiscall ****)(void *, int, int))a1 + 52), 0, v23 - v12 - 2);
      v13 = sub_102374F0(*((int (__thiscall ****)(void *, _BYTE *, int *))a1 + 52));
      sub_102361A0(*((int (__thiscall ****)(void *, int, int))a1 + 52), v22 - 4, v13);
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)a1 + 52) + 244))(*((_DWORD *)a1 + 52), 0, 0);
      v21 = v7 * (*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 52) + 772))(*((_DWORD *)a1 + 52));
      v4 = 0;
    }
    v14 = v21 + v7 * (v6 + 1) - 1;
    v15 = 0;
    v16 = *((_DWORD *)a1 + 65) <= 0;
    v24 = v14;
    v20 = 0;
    if ( !v16 )
    {
      do
      {
        if ( v4 < v21 || v4 > v24 )
        {
          v18 = *(_DWORD *)(*((_DWORD *)a1 + 53) + 12 * *(_DWORD *)(*((_DWORD *)a1 + 62) + 4 * v4));
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 124))(v18, 0);
        }
        else
        {
          v17 = *(_DWORD *)(*((_DWORD *)a1 + 53) + 12 * *(_DWORD *)(*((_DWORD *)a1 + 62) + 4 * v4));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 124))(v17, 1);
          sub_10236140(
            *(int (__thiscall ****)(void *, int, int))(*((_DWORD *)a1 + 53)
                                                     + 12 * *(_DWORD *)(*((_DWORD *)a1 + 62) + 4 * v4)),
            0,
            v20);
          if ( ++v15 == v7 )
          {
            v15 = 0;
            v20 = 0;
          }
          else
          {
            v20 += *((_DWORD *)a1 + 68);
          }
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)a1 + 65) );
    }
  }
}
