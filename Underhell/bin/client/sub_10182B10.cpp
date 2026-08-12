void *__usercall sub_10182B10@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  void *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  char *v8; // eax
  int v9; // eax
  int (__thiscall *v10)(int, int); // edx
  int v11; // ecx
  int (__thiscall *v12)(int); // edx
  _DWORD *v13; // eax
  int v14; // eax
  _BYTE Src[32]; // [esp+8h] [ebp-34h] BYREF
  void (__thiscall **v17)(_DWORD, int, _DWORD); // [esp+28h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-10h]
  int v19; // [esp+30h] [ebp-Ch]
  int v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]

  a1[69] = 0;
  result = off_103DC81C;
  v4 = 1;
  v18 = -1;
  v21 = 1;
  if ( *((int *)off_103DC81C + 5) >= 1 )
  {
    do
    {
      v5 = sub_1005CDB0();
      v6 = v5;
      if ( v5 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 16))(v5, v4) )
      {
        if ( sub_10229D00(32) )
          v7 = sub_10229D20("data");
        else
          v7 = 0;
        (*(void (__thiscall **)(_DWORD *, int, int, int))(*a1 + 876))(a1, v21, v7, a2);
        (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 868))(a1, v21, v7);
        v8 = (char *)sub_1022B4C0("name", (int)Locale);
        sub_100768E0(v8, Src, 32);
        sub_1022ABA0("name", Src);
        v9 = sub_10182940((int)a1, v21);
        v10 = *(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 52);
        v20 = v9;
        v19 = v10(v6, v21);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 28))(v6, v21) )
          v18 = v20;
        v11 = a1[68];
        if ( v20 == -1 )
          v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 804))(v11, v19, v7);
        else
          (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v11 + 808))(v11, v20, v19, v7);
        v12 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 12);
        v17 = (void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)a1[68] + 824);
        a2 = v19;
        v13 = (_DWORD *)v12(v6);
        (*v17)(a1[68], v20, *v13);
        sub_1022AF00(v7);
        v4 = v21;
      }
      else
      {
        v14 = sub_10182940((int)a1, v4);
        if ( v14 != -1 )
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[68] + 812))(a1[68], v14);
      }
      v21 = ++v4;
    }
    while ( v4 <= *((_DWORD *)off_103DC81C + 5) );
    result = (void *)v18;
    if ( v18 != -1 )
      return (void *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[68] + 860))(a1[68], v18);
  }
  return result;
}
