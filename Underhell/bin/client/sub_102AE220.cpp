char __stdcall sub_102AE220(int *a1, int a2, char **a3)
{
  int v4; // esi
  void *v5; // esp
  int *v6; // eax
  int *v7; // eax
  char *v8; // eax
  int *v9; // eax
  char v10; // al
  char v11; // bl
  char v13[12]; // [esp+0h] [ebp-40h] BYREF
  _DWORD v14[12]; // [esp+Ch] [ebp-34h] BYREF
  char *v15; // [esp+3Ch] [ebp-4h]
  char v16; // [esp+53h] [ebp+13h]

  v4 = (int)a3[7];
  v15 = *a3;
  v5 = alloca(v4 + 1);
  if ( a2 == 5 || a2 == 19 )
  {
    v16 = 1;
    v9 = sub_1022E1D0();
    sub_102AFBD0(v9);
    v8 = v15;
  }
  else
  {
    v16 = 0;
    v6 = sub_1022E1D0();
    v4 = sub_1022EAF0((int)a3, (int)v6, 1);
    v7 = sub_1022E1D0();
    sub_1022F190((int)a3, (int)v7, v13, v4 + 1);
    v8 = v13;
  }
  sub_1022EE70(v14, (int)v8, v4, 9);
  if ( a2 >= 15 )
    v10 = sub_102AD880(a1, a2, v14);
  else
    v10 = sub_102AD1D0(a1, a2, v14);
  v11 = v10;
  if ( v16 )
    sub_102AFBD0(0);
  if ( v14[2] >= 0 && v14[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v14[0]);
  return v11;
}
