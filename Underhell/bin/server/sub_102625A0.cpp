_DWORD *__cdecl sub_102625A0(int a1, int a2)
{
  float *v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _BYTE v7[12]; // [esp+0h] [ebp-24h] BYREF
  _BYTE v8[12]; // [esp+Ch] [ebp-18h] BYREF
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( (dword_106CE5EC & 1) == 0 )
  {
    dword_106CE5EC |= 1u;
    flt_106CE5E0 = 0.0;
    flt_106CE5E4 = 0.0;
    flt_106CE5E8 = 0.0;
  }
  if ( !a1 )
    return 0;
  if ( !a2 )
  {
    v3 = (float *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 504))(v7);
    v9[0] = *v3;
    v9[1] = v3[1];
    v9[2] = v3[2];
    v4 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_106B31D0 + 44))(dword_106B31D0, v9);
    (*(void (__thiscall **)(int, int, int, void *))(*(_DWORD *)dword_106B31D0 + 48))(
      dword_106B31D0,
      v4,
      0x2000,
      &unk_106CC5E0);
  }
  v5 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, a2);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    if ( v5[6] )
    {
      v6 = sub_100E99F0(v5);
      (*(void (__thiscall **)(_DWORD *, _BYTE *, _BYTE *))(v6[80] + 60))(v6 + 80, v7, v8);
      if ( (*(unsigned __int8 (__thiscall **)(int, _BYTE *, _BYTE *, void *, int))(*(_DWORD *)dword_106B31D0 + 56))(
             dword_106B31D0,
             v7,
             v8,
             &unk_106CC5E0,
             0x2000) )
      {
        break;
      }
    }
    v5 = (_DWORD *)sub_1012BC10(&dword_1069E3E0, (int)v5);
    if ( !v5 )
      return 0;
  }
  return v5;
}
