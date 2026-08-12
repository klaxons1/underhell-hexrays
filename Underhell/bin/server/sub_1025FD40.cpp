int __cdecl sub_1025FD40(int a1, int *a2, int *a3)
{
  int v3; // ebx
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int result; // eax
  float v11; // [esp+Ch] [ebp-4h]
  int v12; // [esp+18h] [ebp+8h]

  v3 = 0;
  if ( a1 > 0 && a1 <= *(_DWORD *)(dword_106B31C8 + 20) )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a1);
    if ( v4 )
    {
      if ( (*v4 & 2) == 0 )
      {
        v5 = v4[3];
        if ( v5 )
          v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
        else
          v3 = 0;
      }
    }
  }
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 80))(dword_106B31D0, a1);
  if ( v6 && v3 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1612))(v3) )
  {
    v11 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v6 + 40))(v6, 0);
    v7 = (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
           dword_106B31D0,
           a1,
           "cl_cmdrate");
    if ( (int)sub_10429310(v7) >= 1 )
      v12 = sub_10429310(v7);
    else
      v12 = 1;
    v8 = (int)((v11 - (0.5 / (double)v12 + *(float *)(dword_106B31C8 + 28)) - 0.5 * *(float *)(dword_106B31C8 + 28))
             * 1000.0);
    *a2 = v8;
    if ( v8 <= 1000 )
    {
      if ( v8 < 5 )
        v8 = 5;
    }
    else
    {
      v8 = 1000;
    }
    *a2 = v8;
    v9 = (int)(((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v6 + 44))(v6, 1) * 100.0);
    *a3 = v9;
    if ( v9 <= 100 )
    {
      result = v9 < 0 ? 0 : v9;
      *a3 = result;
    }
    else
    {
      result = 100;
      *a3 = 100;
    }
  }
  else
  {
    result = (int)a2;
    *a2 = 0;
    *a3 = 0;
  }
  return result;
}
