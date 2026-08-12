int __cdecl sub_10261B70(float *a1, float a2, float a3, float a4, float a5, int a6, char a7)
{
  int result; // eax
  int i; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int *v11; // eax
  int *v12; // esi
  float *v13; // eax
  double v14; // st7
  float v15; // [esp+4h] [ebp-1Ch]

  if ( a2 > 16.0 )
    a2 = 16.0;
  result = *(_DWORD *)(dword_106B31C8 + 20);
  for ( i = 1; i <= result; ++i )
  {
    if ( i > 0 && i <= result )
    {
      v9 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, i);
      if ( v9 )
      {
        if ( (*v9 & 2) == 0 )
        {
          v10 = v9[3];
          if ( v10 )
          {
            v11 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 20))(v10);
            v12 = v11;
            if ( v11 )
            {
              if ( a7 || a6 || (v11[64] & 1) != 0 )
              {
                v13 = (float *)(*(int (__thiscall **)(int *))(*v11 + 576))(v11);
                v14 = sub_1025EF40(a1, v13, a2, a5);
                if ( v14 >= 0.0 )
                {
                  v15 = v14;
                  sub_1025FEB0(v12, v15, a3, a4, a6);
                }
              }
            }
          }
        }
      }
    }
    result = *(_DWORD *)(dword_106B31C8 + 20);
  }
  return result;
}
