int __thiscall sub_1011A550(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v15; // [esp+Ch] [ebp-Ch]
  char v16; // [esp+17h] [ebp-1h] BYREF

  v15 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  sub_100D3260();
  this[2] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436248 + 32))(dword_10436248);
  sub_1002E560(&v16, 1, 1);
  v3 = (*(int (__thiscall **)(char *))(*((_DWORD *)off_103DCD78 + 16389) + 24))((char *)off_103DCD78 + 65556);
  v4 = off_103DCD78;
  v5 = v3;
  v6 = *((_DWORD *)off_103DCD78 + 16385);
  if ( v6 )
    v7 = ((v6 - (int)off_103DCD78 - 4) >> 4)
       | (*((_DWORD *)off_103DCD78 + 4 * ((v6 - (int)off_103DCD78 - 4) >> 4) + 2) << 12);
  else
    v7 = -1;
  v8 = 0;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v9 = sub_1007A6A0(v4, v8);
      if ( v9 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 208))(v9);
      if ( ++v8 > v5 )
        break;
      v4 = off_103DCD78;
    }
  }
  if ( v7 != -1 )
  {
    do
    {
      v10 = sub_1007A770(off_103DCD78, v7);
      v11 = v10;
      if ( v10 && ((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 216))(v10) & 0x400) != 0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 208))(v11);
      v12 = *((_DWORD *)off_103DCD78 + 4 * (v7 & 0xFFF) + 4);
      if ( v12 )
        v13 = ((v12 - (int)off_103DCD78 - 4) >> 4)
            | (*((_DWORD *)off_103DCD78 + 4 * ((v12 - (int)off_103DCD78 - 4) >> 4) + 2) << 12);
      else
        v13 = -1;
      v7 = v13;
    }
    while ( v13 != -1 );
  }
  sub_1002B550();
  sub_10119F40(a2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
}
