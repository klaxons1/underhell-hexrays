char __usercall sub_10209760@<al>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  float v4; // edx
  int v5; // eax
  double v6; // st7
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // edx
  const char *v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  int v17; // [esp-4h] [ebp-64Ch]
  char v18[1556]; // [esp+8h] [ebp-640h] BYREF
  float v19; // [esp+61Ch] [ebp-2Ch]
  float v20; // [esp+620h] [ebp-28h]
  char v21; // [esp+640h] [ebp-8h]
  int v22; // [esp+644h] [ebp-4h] BYREF

  v4 = *(float *)a1;
  LOBYTE(v22) = a1[62] & 1;
  v5 = (*(int (**)(void))(LODWORD(v4) + 24))();
  sub_101DBFB0(a3, (int)a1, v18, (int)a1, v5);
  if ( *((float *)a1 + 415) > 0.0 )
    v19 = *((float *)a1 + 415) * v19;
  if ( *((float *)a1 + 416) > 0.0 )
  {
    v6 = *((float *)a1 + 416) * v20;
    v20 = v6;
    if ( v6 < 0.5 )
      v20 = 0.5;
  }
  v7 = *(_DWORD *)dword_106B31F0;
  v17 = (*(int (__thiscall **)(int *, char *))(*a1 + 24))(a1, v18);
  v8 = (*(int (__thiscall **)(int))(v7 + 16))(dword_106B31F0);
  sub_101B7710((int)a1, v8, v17);
  if ( (a1[62] & 0x200000) != 0 )
    v21 = 0;
  sub_101B6C00((int)v18, a1[418]);
  v9 = sub_100E9550(a1, 6, 0, v22, (int)v18);
  if ( v9 )
  {
    if ( a1[417] == 1 )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 72))(v9, v12 | 1);
    }
    if ( (a1[62] & 8) != 0 || a1[419] > 0 || *((float *)a1 + 420) > 0.0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 60))(v9, 0);
  }
  else
  {
    sub_10112C00((int)(a1 + 80), 0);
    sub_100E0970((int)a1, v10, 0, 0);
    v11 = *(const char **)(*(int (__thiscall **)(int *, int *))(*a1 + 28))(a1, &v22);
    if ( !v11 )
      v11 = String;
    Warning("ERROR!: Can't create physics object for %s\n", v11);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *, int, int))(a1[280] + 92))(a1 + 280, 5, a2)
    && ((*(int (__thiscall **)(int))(*(_DWORD *)a1[106] + 76))(a1[106]) & 1) == 0 )
  {
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 72))(v9, v13 | 1);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(a1[280] + 92))(a1 + 280, 7) )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 72))(v9, v14 | 0x400);
  }
  if ( (a1[62] & 0x200) != 0 )
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 72))(v9, v15 | 0x80);
  }
  return 1;
}
