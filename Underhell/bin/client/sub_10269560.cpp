int __userpurge sub_10269560@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // ebp
  int v5; // edx
  int *v6; // ecx
  int result; // eax
  _DWORD *v8; // esi
  int *v9; // esi
  void (__thiscall *v10)(int *, _DWORD); // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax

  v3 = a3;
  v5 = a1[75];
  v6 = a1 + 72;
  result = 0;
  if ( v5 <= 0 )
    goto LABEL_7;
  v8 = (_DWORD *)*v6;
  while ( *v8 != a3 )
  {
    ++result;
    ++v8;
    if ( result >= v5 )
      goto LABEL_7;
  }
  if ( result == -1 )
  {
LABEL_7:
    sub_100C2010(v6, v5, &a3);
    v9 = *(int **)(a1[53] + 12 * v3);
    if ( *((_BYTE *)v9 + 320) != 1 )
    {
      v10 = *(void (__thiscall **)(int *, _DWORD))(*v9 + 48);
      *((_BYTE *)v9 + 320) = 1;
      v10(v9, 0);
      sub_10267E30(v9, a2, (int)a1);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v9 + 244))(v9, 0, 0);
      (*(void (__thiscall **)(int *))(*v9 + 16))(v9);
    }
    a1[77] = v3;
    a1[78] = v3;
    v11 = (_DWORD *)sub_10229D00(32);
    if ( v11 )
    {
      v12 = sub_10229D20(v11, (int)"ListViewItemSelected");
      return (*(int (__thiscall **)(int *, _DWORD *))(*a1 + 180))(a1, v12);
    }
    else
    {
      return (*(int (__thiscall **)(int *, _DWORD))(*a1 + 180))(a1, 0);
    }
  }
  return result;
}
