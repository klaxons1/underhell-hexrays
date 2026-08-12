void __usercall sub_1018E970(int a1@<edi>)
{
  int v1; // esi
  char *v2; // eax
  int v3; // eax
  float *v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  double v9; // st7
  int v10; // eax
  _DWORD *v11; // esi
  char Buffer[256]; // [esp+24h] [ebp-110h] BYREF
  float v13[3]; // [esp+124h] [ebp-10h] BYREF
  float v14; // [esp+130h] [ebp-4h]
  int savedregs; // [esp+134h] [ebp+0h] BYREF

  if ( (unsigned __int8)sub_1025EF10() )
  {
    v1 = *(_DWORD *)(dword_106B8370 + 1088);
    if ( v1 )
    {
      sub_1018CAF0(*(_DWORD *)(dword_106B8370 + 1088), (int)&savedregs, a1, v1);
      if ( *(_BYTE *)(v1 + 48) )
      {
        v2 = sub_1001E280(Buffer, "(%f, %f, %f)", *(float *)(v1 + 28), *(float *)(v1 + 32), *(float *)(v1 + 36) + 36.0);
        DevMsg("Area #%d %s is blocked\n", *(_DWORD *)v1, v2);
      }
    }
    else
    {
      v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      v3 = dword_10632630;
      v4 = 0;
      if ( dword_10632630 != -1 )
      {
        v5 = dword_10632624;
        do
        {
          v6 = 12 * v3;
          v7 = *(_DWORD *)(12 * v3 + v5);
          sub_1018CAF0(v7, (int)&savedregs, 12 * v3, v7);
          if ( *(_BYTE *)(v7 + 48) )
          {
            v8 = sub_1001E280(
                   Buffer,
                   "(%f, %f, %f)",
                   *(float *)(v7 + 28),
                   *(float *)(v7 + 32),
                   *(float *)(v7 + 36) + 36.0);
            DevMsg("Area #%d %s is blocked\n", *(_DWORD *)v7, v8);
            if ( !v4 )
              v4 = (float *)v7;
          }
          v5 = dword_10632624;
          v3 = *(_DWORD *)(v6 + dword_10632624 + 8);
        }
        while ( v3 != -1 );
      }
      v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
      DevMsg("nav_update_blocked took %2.2f ms\n", (v9 - v14) * 1000.0);
      if ( v4 )
      {
        v10 = sub_1025FC50();
        v11 = (_DWORD *)v10;
        if ( v10 )
        {
          if ( ((unsigned __int8)sub_102B4350(v10) || (v11[854] & 8) != 0)
            && (*(int (__thiscall **)(_DWORD *))(*v11 + 1332))(v11) == 6 )
          {
            v13[0] = v4[7];
            v13[1] = v4[8];
            v13[2] = v4[9] + 54.0;
            sub_1025F370(v11, v13, 0);
          }
        }
      }
    }
  }
}
