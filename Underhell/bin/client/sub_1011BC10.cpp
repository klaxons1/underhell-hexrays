int __thiscall sub_1011BC10(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // esi
  int v8; // eax
  char **v9; // esi
  char *v10; // eax
  char *v11; // ecx
  int v12; // eax
  bool v13; // zf
  int v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]

  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  sub_100F9B70((_DWORD *)this);
  v7 = a2;
  sub_1011BB20((int *)this, *(_DWORD *)(this + 12), a2, 0);
  if ( a2 > 0 )
  {
    v8 = 0;
    v16 = 0;
    v15 = a2;
    do
    {
      v9 = (char **)(v8 + *(_DWORD *)this);
      v9[3] = 0;
      if ( a4 )
      {
        v10 = v9[1];
        if ( a4 > (int)v10 )
          sub_10118050(v9, a4 - (_DWORD)v10);
        v9[3] += a4;
        v11 = *v9;
        v12 = (int)&v9[3][-a4];
        v9[4] = *v9;
        if ( v12 > 0 && a4 > 0 )
          memcpy(&v11[8 * a4], v11, 8 * v12);
      }
      *(_DWORD *)(v16 + *(_DWORD *)this + 8) = a3;
      v8 = v16 + 20;
      v13 = v15-- == 1;
      v16 += 20;
    }
    while ( !v13 );
    v7 = a2;
  }
  *(_BYTE *)(this + 22) = ((v7 - 1) & v7) == 0;
  *(_DWORD *)(this + 24) = ((v7 - 1) & v7) == 0 ? v7 - 1 : 0;
  return this;
}
