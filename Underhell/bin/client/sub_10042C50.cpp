_DWORD *__stdcall sub_10042C50(_DWORD *a1, _BYTE *a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax

  if ( a2
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 504))(a2)
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 500))(a2) )
  {
    if ( (a2[732] & 2) != 0 )
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      *a1 = v2[15];
      v3 = v2[16];
      v4 = v2[17];
    }
    else
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      *a1 = *v6;
      v3 = v6[1];
      v4 = v6[2];
    }
    a1[1] = v3;
    a1[2] = v4;
    return a1;
  }
  else
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    *a1 = v7[24];
    v8 = v7[25];
    v9 = v7[26];
    a1[1] = v8;
    a1[2] = v9;
    return a1;
  }
}
