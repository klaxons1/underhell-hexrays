int __cdecl sub_10261C70(_DWORD *a1, float *a2, float a3, float a4, float a5, float a6, int a7, char a8)
{
  _DWORD *v8; // ebx
  int result; // eax
  int i; // edi
  _DWORD *v11; // eax
  int v12; // eax
  int *v13; // eax
  int *v14; // esi
  double v15; // st7
  _DWORD *v16; // eax
  float *v17; // eax
  float v18; // [esp+4h] [ebp-1Ch]

  v8 = sub_100E99F0(a1);
  result = *(_DWORD *)(dword_106B31C8 + 20);
  for ( i = 1; i <= result; ++i )
  {
    if ( i > 0 && i <= result )
    {
      v11 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, i);
      if ( v11 )
      {
        if ( (*v11 & 2) == 0 )
        {
          v12 = v11[3];
          if ( v12 )
          {
            v13 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
            v14 = v13;
            if ( v13 )
            {
              if ( v8 == sub_100E99F0(v13) )
              {
                v15 = a3;
              }
              else if ( (v14[64] & 1) != 0 && (v16 = (_DWORD *)sub_101C5260(v14), sub_100E99F0(v16) == v8) )
              {
                v15 = a3;
              }
              else
              {
                if ( !a8 && (v14[64] & 1) == 0 )
                  goto LABEL_17;
                v17 = (float *)(*(int (__thiscall **)(int *))(*v14 + 576))(v14);
                v15 = sub_1025EF40(a2, v17, a3, a6);
                if ( v15 < 0.0 )
                  goto LABEL_17;
              }
              v18 = v15;
              sub_1025FEB0(v14, v18, a4, a5, a7);
            }
          }
        }
      }
    }
LABEL_17:
    result = *(_DWORD *)(dword_106B31C8 + 20);
  }
  return result;
}
