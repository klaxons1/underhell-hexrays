void __thiscall sub_10281450(int *this, char *Src, const char *a3, _DWORD *a4)
{
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // ecx
  _BYTE *v11; // edx
  char v12; // al
  int v13; // eax
  const char *v14; // ecx
  _BYTE *v15; // edx
  char v16; // al
  int v17; // ecx
  int *v18[2]; // [esp+10h] [ebp-8h] BYREF

  sub_10281030(this, Src, (int)a3);
  v5 = a4;
  if ( !a4 )
  {
    v6 = (_DWORD *)sub_10229D00(32);
    v5 = v6 ? sub_10229D20(v6, (int)Src) : 0;
    if ( !a3 && (!dword_1047C968 ? (v7 = 0) : (v7 = dword_1047C968 + 4), sub_10229D70(v5, v7, Src, (int)"SKIN"))
      || (!dword_1047C968 ? (v8 = 0) : (v8 = dword_1047C968 + 4), sub_10229D70(v5, v8, Src, (int)a3)) )
    {
      sub_10229680(v18, "cl_hud_minmode", 1);
      if ( sub_102291A0(v18) )
      {
        if ( v18[1][12] )
          sub_1022AFF0(v5, "_minmode");
      }
    }
  }
  sub_10034930(this[24]);
  v9 = sub_100DDA40(strlen(Src) + 1);
  this[24] = v9;
  v10 = Src;
  v11 = (_BYTE *)v9;
  do
  {
    v12 = *v10;
    *v11++ = *v10++;
  }
  while ( v12 );
  if ( a3 )
  {
    sub_10034930(this[25]);
    v13 = sub_100DDA40(strlen(a3) + 1);
    this[25] = v13;
    v14 = a3;
    v15 = (_BYTE *)v13;
    do
    {
      v16 = *v14;
      *v15++ = *v14++;
    }
    while ( v16 );
  }
  sub_10280630(this);
  (*(void (__thiscall **)(int *, _DWORD *))(*this + 20))(this, v5);
  v17 = this[28];
  if ( v17 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v17 + 244))(v17, 0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)this[28] + 16))(this[28]);
  }
  if ( v5 != a4 )
    sub_1022AF00(v5);
}
