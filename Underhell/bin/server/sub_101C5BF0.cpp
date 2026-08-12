int __cdecl sub_101C5BF0(_DWORD *a1)
{
  _DWORD *v1; // ebx
  int result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // ecx
  const char *v10; // eax
  int v11; // edx
  const char *v12; // [esp-1Ch] [ebp-30h]
  int v13; // [esp-18h] [ebp-2Ch]
  int v14; // [esp-10h] [ebp-24h]
  _DWORD *v15; // [esp+4h] [ebp-10h]
  int v16; // [esp+8h] [ebp-Ch]
  int v17; // [esp+Ch] [ebp-8h]
  char v18; // [esp+13h] [ebp-1h]

  v1 = a1;
  result = a1[191] >> 1;
  if ( (a1[191] & 2) != 0 )
  {
    if ( dword_106BA7D0
      && (result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 4))(dword_106BA7D0, a1),
          (v17 = result) != 0) )
    {
      v3 = *(_DWORD **)(result + 8);
      v18 = byte_10638738;
      byte_10638738 = 0;
      if ( v3 )
      {
        while ( v3 != (_DWORD *)result )
        {
          v4 = (_DWORD *)v3[2];
          v15 = v4;
          if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
            v5 = 0;
          else
            v5 = (_DWORD *)off_1061BE18[4 * (*v3 & 0xFFF) + 1];
          sub_101C5B20((int)v1, v5);
          if ( *(_DWORD *)(dword_106BA764 + 48) )
          {
            v16 = dword_106BA6C4;
            if ( *v3 == -1 || off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12 )
              v6 = 0;
            else
              v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
            v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                   dword_106B31D0,
                   *(_DWORD *)(v6 + 24));
            v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v1[6]);
            if ( *v3 == -1 || (v1 = a1, off_1061BE18[4 * (*v3 & 0xFFF) + 2] != *v3 >> 12) )
              v9 = 0;
            else
              v9 = (_DWORD *)off_1061BE18[4 * (*v3 & 0xFFF) + 1];
            v14 = dword_106BA690;
            v13 = v8;
            v12 = sub_100D6390(v9);
            v10 = sub_100D6390(v1);
            Msg("remove 0x%x: %s-%s (%d-%d) [%d in play, %d max]\n", v3, v10, v12, v13, v7, v14, v16);
            v4 = v15;
          }
          if ( v3 == (_DWORD *)dword_106BA69C )
            dword_106BA69C = v3[2];
          --dword_106BA690;
          v3[2] = 0;
          v3[3] = 0;
          result = sub_1042FBE0(v3);
          v3 = v4;
          if ( !v4 )
            break;
          result = v17;
        }
      }
      v11 = v1[191] >> 1;
      byte_10638738 = v18;
      if ( (v11 & 1) != 0 )
      {
        if ( dword_106BA7D0 )
          result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BA7D0 + 12))(dword_106BA7D0, v1);
        v1[191] &= ~2u;
      }
      v1[35] = 0;
    }
    else
    {
      a1[35] = 0;
    }
  }
  else
  {
    a1[35] = 0;
  }
  return result;
}
