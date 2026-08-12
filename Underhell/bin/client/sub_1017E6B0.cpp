int __thiscall sub_1017E6B0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  char *v7; // ecx
  int v8; // eax
  int v9; // eax
  _BYTE *v10; // ecx
  char v11[144]; // [esp+4h] [ebp-90h] BYREF

  result = this[704];
  if ( result && a2 >= 0 && a2 < result )
  {
    v4 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    v5 = sub_102356C0(this + 267);
    if ( !v5 )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    sub_101288D0((int)v11, v5, dword_1047CA88);
    v6 = this[701];
    v7 = *(char **)(v6 + 20 * a2 + 8);
    v8 = v6 + 20 * a2;
    if ( v7 && *v7 )
    {
      v9 = sub_1017D360(v11, v7);
    }
    else
    {
      v10 = *(_BYTE **)(v8 + 4);
      if ( !v10 || !*v10 )
        goto LABEL_14;
      v9 = sub_10008E80((int)v11, *(char **)(v8 + 4));
    }
    if ( v9 != -1 )
      sub_101F4590(v9);
LABEL_14:
    sub_10030220(v11);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  }
  return result;
}
