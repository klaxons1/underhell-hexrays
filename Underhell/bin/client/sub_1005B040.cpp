int __thiscall sub_1005B040(int this)
{
  int result; // eax
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // ax
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  unsigned __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // ebx
  int v16; // edi
  unsigned __int16 v17; // cx
  int v18; // [esp+34h] [ebp-10h]
  int v19; // [esp+38h] [ebp-Ch]
  int v20; // [esp+3Ch] [ebp-8h]
  int v21; // [esp+40h] [ebp-4h]

  if ( *(_DWORD *)(dword_1040CFFC + 48) && byte_1040D144 || (result = sub_10142330(), result < 0) )
  {
    result = 0xFFFF;
    if ( *(_WORD *)(*(_DWORD *)(this + 24) + 10 * *(unsigned __int16 *)(this + 126)) != 0xFFFF )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v4 = v3;
      v20 = v3;
      if ( v3 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( *(_BYTE *)(this + 141) )
        v21 = *(_DWORD *)(this + 136);
      else
        v21 = *(_DWORD *)(this + 132);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 36))(v4, v21, 0);
      if ( *(_DWORD *)(dword_1040CFB4 + 48) && !*(_BYTE *)(this + 141) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 44))(v4, 0.0, 0.0099999998);
        v5 = *(_WORD *)(*(_DWORD *)(this + 24) + 10 * *(unsigned __int16 *)(this + 126));
        if ( v5 != 0xFFFF )
        {
          do
          {
            v6 = 28 * v5;
            v7 = v6 + *(_DWORD *)(this + 12);
            v8 = sub_10142330();
            v9 = sub_1005AC70((_DWORD *)this, v7, v8);
            if ( v9 != 0xFFFF )
            {
              v10 = *(_DWORD *)(this + 68);
              v11 = 5 * v9;
              v12 = (*(_BYTE *)(v10 + 8 * v11 + 32) & 2) == 0;
              v13 = v10 + 8 * v11;
              if ( v12 )
                sub_10059D40(
                  v6,
                  v7,
                  this,
                  v20,
                  *(_DWORD *)(v13 + 28),
                  *(float *)v13,
                  *(float *)(v13 + 4),
                  *(float *)(v13 + 8),
                  *(float *)v7,
                  *(float *)(v7 + 4),
                  v21,
                  COERCE_FLOAT(*(_BYTE *)(v7 + 16)));
            }
            v5 = *(_WORD *)(*(_DWORD *)(this + 12) + v6 + 26);
          }
          while ( v5 != 0xFFFF );
          v4 = v20;
        }
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 44))(v4, 0.0, 1.0);
      }
      v14 = *(_WORD *)(*(_DWORD *)(this + 24) + 10 * *(unsigned __int16 *)(this + 126));
      if ( v14 != 0xFFFF )
      {
        do
        {
          v15 = 28 * v14;
          v16 = v15 + *(_DWORD *)(this + 12);
          v19 = sub_10142330();
          v17 = *(_WORD *)(*(_DWORD *)(this + 80) + 10 * *(unsigned __int16 *)(v16 + 12));
          if ( v17 != 0xFFFF )
          {
            while ( 1 )
            {
              v18 = *(_DWORD *)(this + 68) + 40 * v17;
              if ( *(unsigned __int16 *)(v18 + 34) == v19 )
                break;
              v17 = *(_WORD *)(v18 + 38);
              if ( v17 == 0xFFFF )
                goto LABEL_25;
            }
            sub_1005A4E0(
              *(_DWORD *)(this + 68) + 40 * v17,
              v15,
              v16,
              v20,
              *(float *)v16,
              *(float *)(v16 + 4),
              v21,
              COERCE_FLOAT(*(_BYTE *)(v16 + 16)));
          }
LABEL_25:
          v14 = *(_WORD *)(v15 + *(_DWORD *)(this + 12) + 26);
        }
        while ( v14 != 0xFFFF );
        v4 = v20;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    }
  }
  return result;
}
