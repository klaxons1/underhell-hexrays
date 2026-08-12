char __thiscall sub_1014C310(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edi
  signed int v4; // esi
  _DWORD *v5; // ebx
  unsigned __int8 v6; // al
  _DWORD *v7; // eax
  _BYTE v9[32]; // [esp+4h] [ebp-30h] BYREF
  int v10; // [esp+24h] [ebp-10h]
  _DWORD *v11; // [esp+28h] [ebp-Ch]
  int v12; // [esp+2Ch] [ebp-8h] BYREF
  signed int v13; // [esp+30h] [ebp-4h]

  v11 = this;
  sub_1014C220(this);
  v2 = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 8))(
         dword_10413188 + 4,
         off_103E82CC,
         "rb",
         0);
  v3 = v2;
  v10 = v2;
  if ( v2 )
  {
    (**(void (__thiscall ***)(int, int *, int, int))(dword_10413188 + 4))(dword_10413188 + 4, &v12, 4, v2);
    if ( v12 == 1 )
    {
      (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)(dword_10413188 + 4) + 16))(
        dword_10413188 + 4,
        v3,
        0,
        2);
      v4 = (unsigned int)((*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 20))(
                            dword_10413188 + 4,
                            v3)
                        - 4) >> 5;
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)(dword_10413188 + 4) + 16))(dword_10413188 + 4, v3, 4, 1);
      if ( v4 > 0 )
      {
        v13 = v4;
        do
        {
          (**(void (__thiscall ***)(int, _BYTE *, int, int))(dword_10413188 + 4))(dword_10413188 + 4, v9, 32, v3);
          v5 = (_DWORD *)sub_100DDA40(40);
          if ( v5 )
          {
            v6 = sub_1014C050((int)v9);
            v7 = &v11[10 * v6];
            qmemcpy(v5, v9, 0x20u);
            v3 = v10;
            v5[9] = v7;
            v5[8] = v7[8];
            v7[8] = v5;
            *(_DWORD *)(v5[8] + 36) = v5;
          }
          --v13;
        }
        while ( v13 );
      }
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(dword_10413188 + 4, v3);
  }
  return 1;
}
