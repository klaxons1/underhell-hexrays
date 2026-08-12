int __thiscall sub_103EE780(int this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int result; // eax
  _DWORD *v7; // eax
  unsigned int *v8; // ecx
  _DWORD *v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // ecx
  _DWORD v15[9]; // [esp+Ch] [ebp-54h] BYREF
  int v16; // [esp+30h] [ebp-30h]
  char v17; // [esp+34h] [ebp-2Ch]
  int v18; // [esp+38h] [ebp-28h]
  int v19; // [esp+3Ch] [ebp-24h]
  int v20; // [esp+40h] [ebp-20h]
  int v21; // [esp+44h] [ebp-1Ch]
  char v22; // [esp+48h] [ebp-18h]
  int v23[5]; // [esp+4Ch] [ebp-14h] BYREF
  unsigned int *v24; // [esp+6Ch] [ebp+Ch]

  if ( *(float *)(this + 308) <= 2.0 || (a3[9] & 0x20E1B) == 0 || *(_BYTE *)(this + 229) )
  {
    *(float *)&v15[3] = 0.0;
    *(float *)&v15[4] = 0.0;
    v15[0] = &CUserCmd::`vftable';
    *(float *)&v15[5] = 0.0;
    memset(v23, 0, sizeof(v23));
    *(float *)&v15[6] = 0.0;
    *(float *)&v15[7] = 0.0;
    *(float *)&v15[8] = 0.0;
    v15[1] = 0;
    v15[2] = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 292)
      || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this - 1484) + 868))(this - 1484) )
    {
      if ( *(_BYTE *)(this + 204) != 1 )
      {
        v13 = this - 1484;
        if ( *(_BYTE *)(this - 1400) )
        {
          *(_BYTE *)(v13 + 88) |= 1u;
        }
        else
        {
          v14 = *(int **)(v13 + 24);
          if ( v14 )
            sub_100194B0(v14, 1688);
        }
        *(_BYTE *)(this + 204) = 1;
      }
      sub_101F7FB0((int)v15, (int)a3);
      v16 &= 0xFFFDFFE7;
      a3 = v15;
    }
    sub_10266610((_BYTE *)this, a2, (int)a3, a4, a5);
    v15[0] = &CUserCmd::`vftable';
    return sub_102375F0(v23);
  }
  else
  {
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 24))(this, a2);
    if ( (_BYTE)result )
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 1484) + 340))(this - 1484);
      v8 = (unsigned int *)(this + 156);
      v9 = v7;
      v10 = *v7;
      v24 = v8;
      v11 = sub_1026A890(v8);
      result = (*(int (__thiscall **)(_DWORD *, int))(v10 + 72))(v9, v11);
      if ( !(_BYTE)result )
      {
        result = sub_103E0CF0(v24, 0);
        if ( (_BYTE)result )
        {
          v12 = sub_1026A890(v24);
          return (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 1460))(v12);
        }
      }
    }
  }
  return result;
}
