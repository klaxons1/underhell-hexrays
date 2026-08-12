void __usercall sub_10190960(int a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  double v4; // st7
  int v5; // eax
  int v6; // eax
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+0h] [ebp-Ch]

  if ( *((float *)off_103DC81C + 4) > 0.0 )
  {
    v4 = sub_1018FBF0((float *)(a1 - 12));
    v5 = *(_DWORD *)(a1 + 1184);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          sub_10190470(a1 - 12, *(float *)&a2, *(float *)&a3);
      }
      else
      {
        v7 = v4;
        sub_1018FFC0(a1 - 12, a2, a3, v7);
      }
    }
    else
    {
      v8 = 1.0 - v4;
      sub_1018FD00((int *)(a1 - 12), v8);
    }
  }
}
