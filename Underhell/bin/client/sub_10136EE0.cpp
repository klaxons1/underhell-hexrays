char __cdecl sub_10136EE0(_DWORD *a1, int a2, char a3, float *a4)
{
  _DWORD *v4; // esi
  char result; // al
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // esi
  _DWORD *v11; // esi
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  _DWORD v15[128]; // [esp+4h] [ebp-228h] BYREF
  _BYTE v16[12]; // [esp+204h] [ebp-28h] BYREF
  _BYTE v17[12]; // [esp+210h] [ebp-1Ch] BYREF
  _DWORD v18[3]; // [esp+21Ch] [ebp-10h] BYREF
  _DWORD *v19; // [esp+228h] [ebp-4h]

  v4 = a1;
  if ( !a1 )
    return 0;
  if ( a3 )
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a1 + 164))(a1);
    v19 = v6;
    if ( v6 )
    {
      v7 = *(_DWORD *)dword_10413178;
      v8 = (*(int (__thiscall **)(_DWORD *))(v6[1] + 36))(v6 + 1);
      v9 = (*(int (__thiscall **)(int, int))(v7 + 112))(dword_10413178, v8);
      if ( v9 )
      {
        v10 = v9 + *(_DWORD *)(v9 + 176) + 12 * sub_10025760(v19);
        if ( v10 && *(_DWORD *)(v10 + 4) >= a2 && a2 > 0 && sub_10028810((int)v19, v15) )
        {
          v11 = (_DWORD *)(*(_DWORD *)(v10 + 8) + 68 * a2 + v10 - 68);
          v12 = sub_101356D0();
          *(float *)v18 = *v12;
          *(float *)&v18[1] = v12[1];
          *(float *)&v18[2] = v12[2];
          sub_101ED8C0(v18, v15[*v11], v16);
          sub_101F0110(v11 + 2, v11 + 5, v16, v17);
          sub_101ED860(v17, v15[*v11], a4);
          return 1;
        }
        v4 = a1;
      }
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, float *, _BYTE *))(a1[1] + 148))(a1 + 1, a2, a4, v17) )
  {
    return 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 504))(v4) )
    v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 268))(v4);
  else
    v13 = (float *)(*(int (__thiscall **)(_DWORD *))(v4[1] + 4))(v4 + 1);
  *a4 = *v13;
  a4[1] = v13[1];
  v14 = v13[2];
  result = 1;
  a4[2] = v14;
  return result;
}
