int __cdecl sub_10260010(_BYTE *a1, float a2, float a3, __int16 a4)
{
  int result; // eax
  int i; // esi
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // eax
  unsigned __int16 v9[6]; // [esp+10h] [ebp-Ch] BYREF

  sub_1025EFC0((int)v9, a1, a2, a3, a4);
  result = *(_DWORD *)(dword_106B31C8 + 20);
  for ( i = 1; i <= result; ++i )
  {
    v6 = 0;
    if ( i > 0 && i <= result )
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, i);
      if ( v7 )
      {
        if ( (*v7 & 2) == 0 )
        {
          v8 = v7[3];
          if ( v8 )
            v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
          else
            v6 = 0;
        }
      }
    }
    sub_1025FF50(v9, v6);
    result = *(_DWORD *)(dword_106B31C8 + 20);
  }
  return result;
}
