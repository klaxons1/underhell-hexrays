int __thiscall sub_101855B0(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  __int16 v3; // bx
  _DWORD *v4; // esi
  int v5; // ecx
  _WORD *v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  _BYTE v11[512]; // [esp+0h] [ebp-208h] BYREF
  _DWORD *v12; // [esp+200h] [ebp-8h]
  int v13; // [esp+204h] [ebp-4h]

  v12 = this;
  result = (unsigned __int16)sub_1008A160(a2);
  if ( (_WORD)result )
  {
    v13 = (unsigned __int16)result;
    do
    {
      sub_1042E170(v11, 512);
      result = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, v11);
      v3 = result;
      if ( result != -1 )
      {
        v4 = v12;
        v5 = v12[4];
        result = 0;
        if ( v5 <= 0 )
          goto LABEL_10;
        v6 = (_WORD *)v12[1];
        while ( *v6 != v3 )
        {
          ++result;
          ++v6;
          if ( result >= v5 )
            goto LABEL_10;
        }
        if ( result == -1 )
        {
LABEL_10:
          v7 = v12[2];
          v8 = v12[4];
          if ( v5 + 1 > v7 )
            sub_1009A780(v12 + 1, v8 - v7 + 1);
          ++v4[4];
          v9 = v4[1];
          v10 = v4[4] - v8 - 1;
          v4[5] = v9;
          if ( v10 > 0 )
            memcpy((void *)(v9 + 2 * v8 + 2), (const void *)(v9 + 2 * v8), 2 * v10);
          result = v4[1] + 2 * v8;
          if ( result )
            *(_WORD *)result = v3;
        }
      }
      --v13;
    }
    while ( v13 );
  }
  return result;
}
