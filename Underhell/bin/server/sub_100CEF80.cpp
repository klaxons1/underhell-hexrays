char __fastcall sub_100CEF80(unsigned int a1, int a2, unsigned int a3, int a4, int *a5)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  int v10; // ecx
  _DWORD *v11; // ecx
  bool v12; // bl
  int *v13; // esi
  int v14; // eax
  char result; // al
  int v16; // esi
  unsigned int v17; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]

  v5 = a4;
  v6 = a3;
  if ( a4 != 16449
    || !*(_DWORD *)(dword_106967A4 + 48)
    || a3 == a1
    || (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 220))(a1) == 6
    || (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v6 + 220))(v6) == 6 )
  {
    return sub_100DA620(v6, v5, a5);
  }
  v19 = -1;
  if ( a1 >= v6 )
  {
    v17 = v6;
    v18 = a1;
  }
  else
  {
    v17 = a1;
    v18 = v6;
  }
  v8 = sub_100CB7F0((int)&unk_1060E0D0, (unsigned __int8 *)&v17);
  v9 = v8;
  if ( v8 == 0xFFFF )
  {
    if ( word_1060E0E2 == -1 )
      return sub_100DA620(v6, 16449, a5);
    v9 = sub_100CEA90((int)&unk_1060E0D0, (unsigned __int8 *)&v17);
    goto LABEL_20;
  }
  v10 = dword_1060E0D4 + 24 * v8;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(v10 + 20) >= 0.090000004 )
  {
LABEL_20:
    a3 = 0;
    if ( !a5 )
      a5 = (int *)&a3;
    result = sub_100DA620(v6, 16449, a5);
    v16 = 24 * v9;
    HIBYTE(a4) = result;
    if ( result )
    {
      *(_DWORD *)(v16 + dword_1060E0D4 + 16) = -1;
    }
    else
    {
      sub_10019680((_DWORD *)(v16 + dword_1060E0D4 + 16), *a5);
      result = HIBYTE(a4);
    }
    *(float *)(v16 + dword_1060E0D4 + 20) = *(float *)(dword_106B31C8 + 12);
    return result;
  }
  v11 = (_DWORD *)(v10 + 16);
  v12 = *v11 == -1;
  if ( *v11 == -1 )
  {
    v13 = a5;
    if ( a5 )
    {
      v14 = sub_1026A890(v11);
      *v13 = v14;
      if ( !v14 )
      {
        *v13 = sub_10280AC0();
        return v12;
      }
    }
  }
  else if ( a5 )
  {
    *a5 = 0;
  }
  return v12;
}
