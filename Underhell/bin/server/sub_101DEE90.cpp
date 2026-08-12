int __usercall sub_101DEE90@<eax>(_BYTE *a1@<ecx>, int a2@<edi>)
{
  int v3; // edx
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp-Ch] [ebp-654h]
  char v9[1556]; // [esp+8h] [ebp-640h] BYREF
  float v10; // [esp+61Ch] [ebp-2Ch]
  _BYTE v11[4]; // [esp+644h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 100))(a1);
  sub_100E0970((int)a1, v3, 0, 0);
  sub_10112C00((int)(a1 + 320), 6);
  v4 = *(const char **)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v11);
  if ( !v4 )
    v4 = String;
  (*(void (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)a1 + 104))(a1, v4);
  if ( a1[225] != 1 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    a1[225] = 1;
  }
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 24))(a1);
  sub_101DBFB0(a2, (int)a1, v9, (int)a1, v5);
  if ( *((float *)a1 + 293) > 0.0 )
    v10 = *((float *)a1 + 293) * v10;
  sub_101B6C00((int)v9, *((_DWORD *)a1 + 294));
  v8 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)a1 + 80) + 48))(a1 + 320);
  v6 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)a1 + 80) + 44))(a1 + 320);
  sub_100E9550(a1, v6, v8, 1, (int)v9);
  if ( (a1[248] & 1) == 0 )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 106) + 96))(*((_DWORD *)a1 + 106));
  if ( (*((_DWORD *)a1 + 62) & 2) != 0 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a1 + 106) + 60))(*((_DWORD *)a1 + 106), 0);
  *((float *)a1 + 304) = 0.0;
  a1[1212] = 1;
  *((float *)a1 + 306) = 0.0;
  *((_DWORD *)a1 + 302) = 0;
  return j_nullsub_4(a1);
}
