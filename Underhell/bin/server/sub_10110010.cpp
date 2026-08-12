int __cdecl sub_10110010(int *a1)
{
  int result; // eax
  int v2; // esi
  bool v3; // cc
  float v4; // edx
  float v5; // ecx
  const char *v6; // eax
  const char *v7; // eax
  double v8; // st7
  float v9[5]; // [esp+0h] [ebp-18h] BYREF
  float v10; // [esp+14h] [ebp-4h]

  result = dword_1069ABE0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    result = sub_10153490();
    v2 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
      {
        if ( *a1 >= 3 )
        {
          if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
            sub_100DAE60(v2);
          v3 = *a1 <= 1;
          v4 = *(float *)(v2 + 580);
          v5 = *(float *)(v2 + 588);
          v9[4] = *(float *)(v2 + 584);
          v9[3] = v4;
          v10 = v5;
          v6 = String;
          if ( !v3 )
            v6 = (const char *)a1[259];
          v9[0] = atof(v6);
          v7 = String;
          if ( *a1 > 2 )
            v7 = (const char *)a1[260];
          v9[1] = atof(v7);
          if ( *a1 == 4 )
            v8 = atof((const char *)a1[261]);
          else
            v8 = v10;
          v9[2] = v8;
          sub_100E0D20(v2, v9);
          result = sub_1010FC80(v2);
          if ( !(_BYTE)result )
            return sub_102601C0(v2, 2, "setpos into world, use noclip to unstick yourself!\n", 0, 0, 0, 0);
        }
        else
        {
          return sub_102601C0(v2, 2, "Usage:  setpos x y <z optional>\n", 0, 0, 0, 0);
        }
      }
    }
  }
  return result;
}
