int __userpurge sub_100C7DC0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int *a3)
{
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  float v12; // [esp+18h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-Ch] BYREF
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]

  if ( !*((_BYTE *)a1 + 225) )
    return 0;
  ++a1[438];
  if ( (a3[16] & 0x100) != 0 )
  {
    v5 = a3[4];
    v6 = a3[6];
    v14 = a3[5];
    v13 = v5;
    v15 = v6;
    ((void (__thiscall *)(int (__stdcall ***)(char), int *, int, int, _DWORD, int))(*off_1061B7A0)[3])(
      off_1061B7A0,
      &v13,
      2,
      2,
      0,
      a2);
    v7 = a3[5];
    v8 = a3[6];
    v13 = a3[4];
    v15 = v8;
    v14 = v7;
    v12 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4);
    sub_1025F3A0((int)&v13, v12, COERCE_FLOAT(10));
  }
  v9 = *a1;
  if ( *((_BYTE *)a1 + 224) )
  {
    if ( *((_BYTE *)a1 + 224) == 1 )
      return (*(int (__stdcall **)(int *))(v9 + 1000))(a3);
    v10 = (*(int (__stdcall **)(int *))(v9 + 1004))(a3);
    if ( (int)a1[55] <= 0
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 68))(dword_106B3CDC, a3[16])
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*a1 + 1040))(a1, a3) )
    {
      (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 1048))(a1, a3);
      return 0;
    }
  }
  else
  {
    v10 = (*(int (__thiscall **)(_DWORD *, int *))(v9 + 996))(a1, a3);
    if ( (int)a1[55] <= 0 )
    {
      v11 = a1[106];
      if ( v11 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 48))(v11, 0);
      (*(void (__thiscall **)(_DWORD *, int *))(*a1 + 268))(a1, a3);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*a1 + 1040))(a1, a3)
        || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*a1 + 1048))(a1, a3) )
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 1052))(a1);
      }
    }
  }
  return v10;
}
