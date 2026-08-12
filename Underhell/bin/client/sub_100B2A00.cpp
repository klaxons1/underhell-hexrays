int __thiscall sub_100B2A00(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax

  v3 = this[10];
  v4 = off_103DC81C;
  v5 = 1;
  if ( v3 > 0 && v3 <= *((_DWORD *)off_103DC81C + 5) )
    v5 = v3;
  v6 = v5;
  while ( 1 )
  {
    if ( a2 )
      --v6;
    else
      ++v6;
    if ( v6 >= 1 )
    {
      if ( v6 > v4[5] )
        v6 = 1;
    }
    else
    {
      v6 = v4[5];
    }
    if ( v6 == v5 )
      break;
    v7 = sub_1012D2F0(v6);
    if ( v7 )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 844))(v7) )
        break;
    }
    v4 = off_103DC81C;
  }
  sub_100B2920((int)this, v6);
  return sub_10229140(&unk_1042F9B0, 0);
}
