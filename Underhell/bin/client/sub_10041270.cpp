char __thiscall sub_10041270(_WORD *this, int a2, int a3, int a4)
{
  char *v4; // esi
  int v5; // eax
  char *v6; // ebx
  _DWORD *v7; // esi
  double v8; // st7
  float v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+8h] [ebp-14h]

  if ( (unsigned __int8)sub_101E1CC0(a4) )
  {
    v4 = (char *)sub_101E1B90(a4);
    v5 = sub_101E1C10(a4);
    v6 = (char *)v5;
    if ( v4 )
    {
      if ( v5 )
      {
        v7 = (_DWORD *)sub_10041030(dword_10406FF8, this, v4, 1);
        if ( v7 )
        {
          v8 = sub_101E6410(a3);
          v11 = v8;
          sub_101E3B00(a4, v11);
          v10 = v8;
          sub_10040F70(this, v6, v10, v7, *(_BYTE *)(a2 + 12) == 0);
        }
      }
    }
  }
  return 1;
}
