void __thiscall sub_103CFB80(_DWORD *this, int *a2)
{
  char *v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // edx
  int i; // ebx
  int *v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  int v13[3]; // [esp+20h] [ebp-28h] BYREF
  int v14[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v15[3]; // [esp+38h] [ebp-10h] BYREF
  int v16; // [esp+44h] [ebp-4h]
  int v17; // [esp+50h] [ebp+8h]

  if ( *a2 == dword_106EC878 )
  {
    sub_100BEFA0(this, "grenade_attachment", (int)v14, (int)v13);
    *(float *)v15 = 0.0;
    *(float *)&v15[1] = 0.0;
    *(float *)&v15[2] = 0.0;
    v3 = sub_102D5F00((float *)v14, &flt_106F1CB4, (int)&flt_106F1CA8, (int)v15, (int)this, 3.5, 1);
    v4 = (int)v3;
    if ( v3 )
    {
      if ( *((_DWORD *)v3 + 106) )
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 592))(v3);
        v5 = sub_100BEF30((int)this, "grenade_attachment");
        sub_100E0970(v4, v6, 0, 0);
        sub_10112C00(v4 + 320, 0);
        sub_100EBE30(v4, 1);
        sub_100E0D20(v4, (float *)v14);
        sub_100E0EA0(v4, (float *)v13);
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 140))(v4, this, v5);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 500))(v4, 200.0);
        this[965] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        sub_1023C380(this, (int)"Zombine.ReadyGrenade", 0.0, 0);
        v17 = sub_1002A680(&dword_10690DF8);
        for ( i = 0; i < sub_1016BFB0(&dword_10690DF8); ++i )
        {
          v8 = *(int **)(v17 + 4 * i);
          if ( (*(int (__thiscall **)(int *))(*v8 + 220))(v8) == 2
            || (*(int (__thiscall **)(int *))(*v8 + 220))(v8) == 3
            && (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, int, _DWORD))(*v8 + 548))(v8, this, 16449, 0) )
          {
            v9 = (*(int (__thiscall **)(int *, _DWORD *))(*v8 + 1084))(v8, this);
            v10 = *v8;
            v16 = v9;
            v11 = (*(int (__thiscall **)(int *, _DWORD *))(v10 + 1080))(v8, this);
            (*(void (__thiscall **)(int *, _DWORD *, int, int))(*v8 + 1120))(v8, this, v11, v16 + 1);
          }
        }
      }
      --this[964];
    }
  }
  else if ( *a2 != 28
         || (v12 = this[965], v12 == -1)
         || off_1061BE18[4 * (this[965] & 0xFFF) + 2] != v12 >> 12
         || !off_1061BE18[4 * (this[965] & 0xFFF) + 1] )
  {
    sub_10331E50(this, a2);
  }
}
