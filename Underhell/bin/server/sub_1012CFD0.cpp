void *__thiscall sub_1012CFD0(_BYTE *this)
{
  void *result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void **v14; // [esp+4h] [ebp-4h] BYREF

  result = sub_1012CC30(&off_1061DE74);
  if ( this[12] )
  {
    this[12] = 0;
    sub_101676E0(0);
    v3 = (_DWORD *)dword_106AE3E4;
    v4 = -1;
    if ( dword_106AE3E4 )
      v5 = *(_DWORD **)dword_106AE3E4;
    else
      v5 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v7 = &dword_1069E3E4[4 * (*(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5) & 0xFFF)];
          if ( v7 )
          {
            v8 = (_DWORD *)v7[3];
            if ( v8 )
            {
              v6 = (_DWORD *)*v8;
              goto LABEL_15;
            }
          }
        }
        else if ( v3 )
        {
          v6 = (_DWORD *)*v3;
          goto LABEL_15;
        }
        v6 = 0;
LABEL_15:
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5) )
          v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5[6]);
        if ( (v5[63] & 0x10) == 0 )
          sub_1025FAC0(v5);
        v5 = v6;
        if ( !v6 )
          break;
        v3 = (_DWORD *)dword_106AE3E4;
      }
    }
    sub_1012CE60();
    sub_101676E0(1);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 364))(dword_106B31D0);
    dword_10693080 = 0;
    v14 = &CRespawnEntitiesFilter::`vftable';
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 280))(dword_106B31D0);
    result = (void *)sub_10181AF0(v9, &v14, 1);
    if ( v4 >= 0 )
    {
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v4);
      sub_102D6D90(v10, "unnamed");
      sub_102D6EB0(v10, 0);
      v11 = v10;
      if ( (v10 || (v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
        && (v12 = *(_DWORD *)(v11 + 12)) != 0 )
      {
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
        return (void *)sub_1022CEF0(v13);
      }
      else
      {
        return (void *)sub_1022CEF0(0);
      }
    }
  }
  return result;
}
