int __thiscall sub_104212F0(int this, _DWORD *a2)
{
  unsigned __int16 i; // bx
  _DWORD *v4; // ebp
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  int v8; // edi
  _WORD *v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  char v17; // [esp+Fh] [ebp-5h] BYREF
  unsigned __int16 v18; // [esp+10h] [ebp-4h] BYREF

  *(_DWORD *)this = sub_1041F1A0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0xFFFF;
  *(_WORD *)(this + 20) = -1;
  *(_WORD *)(this + 22) = -1;
  *(_DWORD *)(this + 24) = *(_DWORD *)(this + 4);
  sub_1041FD50(this);
  for ( i = sub_1041FE10((int)a2); i != 0xFFFF; i = sub_1041FED0(a2, i) )
  {
    v4 = (_DWORD *)(a2[1] + 12 * i + 8);
    sub_1041F460((_WORD *)this, (int)v4, &v18, &v17);
    v5 = sub_1041F570(this);
    v6 = v18;
    v7 = v5;
    v8 = 12 * v5;
    v9 = (_WORD *)(v8 + *(_DWORD *)(this + 4));
    v10 = v18 == 0xFFFF;
    v9[2] = v18;
    v9[1] = -1;
    *v9 = -1;
    v9[3] = 0;
    if ( v10 )
    {
      *(_WORD *)(this + 16) = v7;
    }
    else
    {
      v11 = v6;
      v12 = *(_DWORD *)(this + 4);
      v13 = 3 * v11;
      if ( v17 )
        *(_WORD *)(v12 + 4 * v13) = v7;
      else
        *(_WORD *)(v12 + 4 * v13 + 2) = v7;
    }
    sub_10420180(this, v7);
    v14 = *(_DWORD *)(this + 4);
    ++*(_WORD *)(this + 18);
    v15 = (_DWORD *)(v8 + v14 + 8);
    if ( v15 )
      *v15 = *v4;
  }
  return this;
}
