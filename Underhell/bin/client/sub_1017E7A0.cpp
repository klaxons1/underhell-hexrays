int __thiscall sub_1017E7A0(_DWORD *this, int a2)
{
  int v2; // ebx
  void (__thiscall *v3)(int); // edx
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _BYTE *v12; // ecx
  int v14; // [esp+8h] [ebp-94h] BYREF
  int v15[9]; // [esp+10h] [ebp-8Ch] BYREF
  int v16[5]; // [esp+34h] [ebp-68h] BYREF
  int v17[5]; // [esp+48h] [ebp-54h] BYREF
  int v18; // [esp+5Ch] [ebp-40h]
  int v19[12]; // [esp+68h] [ebp-34h] BYREF
  _DWORD *v20; // [esp+98h] [ebp-4h]

  v2 = dword_1047CA8C;
  v3 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v4 = this;
  v20 = this;
  v3(dword_1047CA8C);
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA88 + 40))(dword_1047CA88, a2);
  if ( v5 )
  {
    sub_101288D0((int)&v14, v5, dword_1047CA88);
    v6 = v14;
    if ( *(int *)(v14 + 268) > 0 && *(_DWORD *)(*(_DWORD *)(v14 + 272) + v14 + 8) == -1 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = sub_1003E4D0((char *)(v6 + v8 + *(_DWORD *)(v6 + 272) + *(_DWORD *)(v6 + v8 + *(_DWORD *)(v6 + 272) + 4)));
        *(_DWORD *)(v8 + *(_DWORD *)(v14 + 272) + v14 + 8) = v9;
        v6 = v14;
        ++v7;
        v8 += 20;
      }
      while ( v7 < *(_DWORD *)(v14 + 268) );
      v4 = v20;
    }
    nullsub_4();
    if ( v18 )
      sub_10034930(v18);
    sub_100F9890(v19);
    sub_100F9DC0(v19);
    sub_1011A810(v17);
    sub_1011A810(v16);
    sub_1011A810(v15);
  }
  sub_101F43F0(a2);
  v10 = v4[704];
  if ( v10 )
  {
    v11 = 0;
    if ( v10 > 0 )
    {
      v12 = (_BYTE *)(v4[701] + 16);
      while ( !*v12 )
      {
        ++v11;
        v12 += 20;
        if ( v11 >= v10 )
          goto LABEL_19;
      }
      if ( v11 != -1 )
        sub_1017E6B0(v4, v11);
    }
  }
LABEL_19:
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v4 + 244))(v4, 0, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
}
