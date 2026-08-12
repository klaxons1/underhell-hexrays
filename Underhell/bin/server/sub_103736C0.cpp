char __thiscall sub_103736C0(int this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // ebx
  float *v7; // esi
  _DWORD *v8; // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st6
  char v15; // bl
  char v16; // al
  float *v17; // edi
  float *v18; // eax
  _DWORD *v19; // esi
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // eax
  _BYTE v24[12]; // [esp+4h] [ebp-18h] BYREF
  float v25[2]; // [esp+10h] [ebp-Ch] BYREF
  float v26; // [esp+18h] [ebp-4h] BYREF
  _DWORD *v27; // [esp+24h] [ebp+8h]
  float v28; // [esp+24h] [ebp+8h]
  float v29; // [esp+24h] [ebp+8h]

  if ( a2 && ((v3 = a2[23], v3 == dword_106E8514) || v3 == dword_106E8510) )
  {
    if ( *(_BYTE *)(this + 4536)
      && (v4 = (_DWORD *)(this + 4292), v27 = (_DWORD *)(this + 4292), sub_10050FC0((_DWORD *)(this + 4292))) )
    {
      v5 = a2[106];
      if ( !v5 )
        return 0;
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 76))(v5) & 4) != 0 && *(_DWORD *)(dword_106E921C + 48) )
      {
        v6 = dword_106B31C8;
        v28 = *(float *)(dword_106E92F4 + 44);
        if ( *(float *)(v6 + 12) - sub_1040AC10(a2) > v28 && (int)sub_1040ABE0(a2) <= 2 && sub_10050FC0(v4) )
        {
          v29 = *(float *)(dword_106E933C + 44);
          v7 = (float *)sub_10019640(a2);
          v8 = (_DWORD *)sub_10050FC0(v4);
          v9 = (float *)sub_10019640(v8);
          v10 = v9[1] - v7[1];
          v11 = *v9 - *v7;
          v12 = v11 * v11 + v10 * v10;
          v13 = v29;
          goto LABEL_13;
        }
        return 0;
      }
      v15 = ((*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)a2[106] + 76))(a2[106]) >> 8) & 1;
      v16 = sub_1040B950(a2, 0);
      if ( v15 )
      {
        if ( !v16 )
        {
          if ( *(_DWORD *)(dword_106E9264 + 48) )
          {
            v17 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 536))(a2, v24);
            v18 = (float *)sub_10019640(a2);
            v25[0] = *v17 + *v18;
            v25[1] = v18[1] + v17[1];
            v19 = sub_10019640(a2);
            v20 = (_DWORD *)sub_10050FC0(v27);
            v21 = sub_10019640(v20);
            v12 = sub_10424930(v21, v19, v25, &v26);
            if ( v26 > 0.0 )
            {
              v13 = *(float *)(dword_106E9384 + 44);
LABEL_13:
              if ( v13 * v13 > v12 )
                return 1;
            }
          }
          return 0;
        }
      }
      else if ( !v16 )
      {
        return 0;
      }
      v22 = sub_10050FC0(v4);
      return (unsigned __int8)sub_1040B950(a2, v22) && *(_DWORD *)(dword_106E92AC + 48);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v23 = *(_DWORD *)(this + 3624);
    if ( v23 )
      return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v23 + 160))(v23, a2);
    else
      return sub_10027D40((_DWORD *)this, (int)a2);
  }
}
