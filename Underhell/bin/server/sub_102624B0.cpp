_DWORD *__usercall sub_102624B0@<eax>(int a1@<edi>, int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  float *v10; // eax
  char v11[12]; // [esp+4h] [ebp-18h] BYREF
  float v12[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = sub_10262330();
  v4 = v3;
  if ( !v3 )
    return 0;
  v6 = v3[3];
  if ( !v6 || (v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6)) == 0 || (*(_DWORD *)(v7 + 256) & 0x8000) != 0 )
  {
    if ( *(_DWORD *)(dword_106CC114 + 48) )
      return 0;
  }
  if ( a1
    && (v8 = *(_DWORD *)(a1 + 12)) != 0
    && (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8)) != 0
    && (v10 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 504))(v9, v11),
        v12[0] = *v10,
        v12[1] = v10[1],
        v12[2] = v10[2],
        !(*(unsigned __int8 (__thiscall **)(int, float *, int, int))(*(_DWORD *)dword_106B31D0 + 52))(
           dword_106B31D0,
           v12,
           a2,
           a3)) )
  {
    return 0;
  }
  else
  {
    return v4;
  }
}
