int __thiscall sub_10097F50(int this)
{
  int v2; // ecx
  char **v3; // eax
  char *v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  int v8; // edi
  _WORD *v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  char **v13; // edi
  bool v14; // zf
  char *v16; // [esp+Ch] [ebp-18h] BYREF
  char **v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  char **v19; // [esp+18h] [ebp-Ch]
  unsigned __int16 v20[3]; // [esp+1Ch] [ebp-8h] BYREF
  char v21; // [esp+23h] [ebp-1h] BYREF

  *(_DWORD *)this = sub_10002010;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  v2 = *(_DWORD *)(this + 4);
  v3 = &off_10609220;
  *(_DWORD *)(this + 16) = 0xFFFF;
  *(_DWORD *)(this + 20) = -1;
  *(_DWORD *)(this + 24) = v2;
  v19 = &off_10609220;
  v18 = 80;
  do
  {
    v4 = *v3;
    v17 = v3;
    v16 = v4;
    sub_10094390((_WORD *)this, (int)&v16, v20, &v21);
    v5 = sub_10243CD0(this);
    v6 = v20[0];
    v7 = v5;
    v8 = 16 * v5;
    v9 = (_WORD *)(v8 + *(_DWORD *)(this + 4));
    v9[1] = -1;
    *v9 = -1;
    v9[2] = v6;
    v9[3] = 0;
    if ( v6 == 0xFFFF )
    {
      *(_WORD *)(this + 16) = v7;
    }
    else
    {
      v10 = *(_DWORD *)(this + 4);
      v11 = 2 * v6;
      if ( v21 )
        *(_WORD *)(v10 + 8 * v11) = v7;
      else
        *(_WORD *)(v10 + 8 * v11 + 2) = v7;
    }
    sub_100959C0(this, v7);
    v12 = *(_DWORD *)(this + 4);
    ++*(_WORD *)(this + 18);
    v13 = (char **)(v8 + v12 + 8);
    if ( v13 )
    {
      *v13 = v16;
      v13[1] = (char *)v17;
    }
    v3 = v19 + 9;
    v14 = v18-- == 1;
    v19 += 9;
  }
  while ( !v14 );
  return this;
}
