int __cdecl sub_10110350(int *a1)
{
  int result; // eax
  int v2; // esi
  const char *v3; // eax
  const char *v4; // eax
  double v5; // st7
  float v6; // [esp+8h] [ebp-10h]
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

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
          v6 = *(float *)(v2 + 712);
          v3 = String;
          if ( *a1 > 1 )
            v3 = (const char *)a1[259];
          v7[0] = atof(v3);
          v4 = String;
          if ( *a1 > 2 )
            v4 = (const char *)a1[260];
          v7[1] = atof(v4);
          if ( *a1 == 4 )
            v5 = atof((const char *)a1[261]);
          else
            v5 = v6;
          v7[2] = v5;
          (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v2 + 416))(v2, 0, v7, 0);
          return sub_101E1CC0(v7, 0);
        }
        else
        {
          return sub_102601C0(v2, 2, "Usage:  setang_exact pitch yaw <roll optional>\n", 0, 0, 0, 0);
        }
      }
    }
  }
  return result;
}
