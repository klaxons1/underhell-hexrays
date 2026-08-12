void __fastcall sub_101B3140(int a1)
{
  int v2; // eax
  char v3; // al
  char v4; // cl
  double v5; // st7
  int v6; // edx
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // [esp-8h] [ebp-20h]
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]

  sub_1023E950(a1);
  v2 = sub_100422D0();
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 956))(v2);
    v4 = *(_BYTE *)(a1 + 226);
    if ( v4 == v3 )
    {
      if ( v4 )
        return;
      if ( *((float *)off_103DC81C + 3) - *(float *)(a1 + 228) > 1.0 )
      {
        if ( *(_BYTE *)(a1 + 227) )
          return;
        v14 = 0.0;
        v9 = -(a1 != 44);
        v13 = 2.0;
        *(_BYTE *)(a1 + 227) = 1;
        v6 = *(_DWORD *)dword_1044CC48;
        v12 = 0.0;
        v5 = 64.0;
        goto LABEL_12;
      }
      if ( !*(_BYTE *)(a1 + 227) )
        return;
      v5 = 0.0;
      *(_BYTE *)(a1 + 227) = 0;
      v14 = 0.0;
      v6 = *(_DWORD *)dword_1044CC48;
      v8 = a1 - 44;
    }
    else
    {
      v5 = 0.0;
      *(_BYTE *)(a1 + 226) = v3;
      v14 = 0.0;
      *(_BYTE *)(a1 + 227) = 0;
      v6 = *(_DWORD *)dword_1044CC48;
      v7 = v3 == 0;
      v8 = a1 - 44;
      if ( !v7 )
      {
        v9 = -(a1 != 44);
        v13 = 0.25;
        v12 = 0.0;
LABEL_12:
        v11 = v5;
        v10 = a1 & v9;
        (*(void (**)(void))(v6 + 36))();
        sub_10247080(v10, "Alpha", v11, v12, v13, 0, v14);
        return;
      }
    }
    v9 = -(v8 != 0);
    v13 = 0.5;
    v12 = v5;
    v5 = 255.0;
    goto LABEL_12;
  }
}
