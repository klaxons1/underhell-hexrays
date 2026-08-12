int __thiscall sub_100C4FD0(int this, int a2, int a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int v7; // edx
  int *v8; // ecx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD **v16; // ecx
  int *v17; // ecx
  int v18; // edx
  char v19; // cl
  char String[256]; // [esp+Ch] [ebp-124h] BYREF
  _DWORD v21[5]; // [esp+10Ch] [ebp-24h] BYREF
  char *Source; // [esp+120h] [ebp-10h]
  int v23; // [esp+124h] [ebp-Ch]
  _DWORD **v24; // [esp+128h] [ebp-8h]
  _DWORD *v25; // [esp+12Ch] [ebp-4h]

  v4 = 84 * a3;
  Source = (char *)sub_10231190(*(_DWORD *)(this + 20) + 84 * a3 + 80);
  v23 = 84 * a3 + *(_DWORD *)(this + 20);
  result = sub_100C4C40(this, a3, a4);
  if ( result != 0xFFFF )
  {
    v7 = *(_DWORD *)(v23 + 4);
    v24 = (_DWORD **)(this + 12);
    v8 = *(int **)(this + 16);
    v9 = 20 * (unsigned __int16)result;
    v10 = *(_DWORD **)(v9 + v7 + 16);
    v11 = *v8;
    v25 = v10;
    result = (*(int (__thiscall **)(int *, _DWORD *))(v11 + 40))(v8, v10);
    if ( result )
      goto LABEL_4;
    sub_102282F0(String, Source, 0x100u);
    sub_10228240(String, 92);
    _strlwr(String);
    v12 = v4 + *(_DWORD *)(this + 20);
    v13 = *(_DWORD *)(v12 + 68);
    v21[0] = String;
    v21[4] = v13;
    v14 = *(_DWORD *)(v12 + 76) + a4 * v13;
    v21[2] = a4;
    v21[1] = a3;
    v21[3] = v14;
    v15 = sub_100C0010(v24, v21, 0);
    v16 = v24;
    *(_DWORD *)(v9 + *(_DWORD *)(v23 + 4) + 16) = v15;
    v17 = v16[1];
    v18 = *v17;
    v25 = v15;
    result = (*(int (__thiscall **)(int *, _DWORD *))(v18 + 40))(v17, v15);
    if ( result )
    {
LABEL_4:
      v19 = *(_BYTE *)(result + 16);
      if ( (v19 & 2) != 0 )
      {
        *(_BYTE *)(result + 16) = v19 & 0xFE;
        if ( a2 )
          sub_100C17E0(
            a2,
            *(_DWORD *)(*(_DWORD *)(v23 + 4) + v9 + 8),
            *(_DWORD *)(*(_DWORD *)(v23 + 4) + v9 + 12),
            result);
        return (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 16) + 80))(*(_DWORD *)(this + 16), v25);
      }
      else if ( (v19 & 1) != 0 )
      {
        return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v24[1] + 44))(v24[1], v25);
      }
      else
      {
        *(_BYTE *)(result + 16) = v19 | 1;
        return sub_100C01E0(
                 (_DWORD *)result,
                 (int)Source,
                 *(_DWORD *)(*(_DWORD *)(this + 20) + v4 + 76) + a4 * *(_DWORD *)(*(_DWORD *)(this + 20) + v4 + 68));
      }
    }
  }
  return result;
}
