char __thiscall sub_100F2BD0(_WORD *this, int a2, int a3, int a4)
{
  char *v4; // esi
  int v5; // eax
  char *v6; // ebx
  _DWORD *v7; // esi
  double v8; // st7
  float v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+8h] [ebp-14h]

  if ( (unsigned __int8)sub_10418530(a4) )
  {
    v4 = (char *)sub_104183D0(a4);
    v5 = sub_10418450(a4);
    v6 = (char *)v5;
    if ( v4 )
    {
      if ( v5 )
      {
        v7 = (_DWORD *)sub_100F2B70(this, v4);
        if ( v7 )
        {
          v8 = sub_1041CA40(a3);
          v11 = v8;
          sub_1041A260(a4, v11);
          v10 = v8;
          sub_100F2830((int)this, v6, v10, v7, *(_BYTE *)(a2 + 12) == 0);
        }
      }
    }
  }
  return 1;
}
