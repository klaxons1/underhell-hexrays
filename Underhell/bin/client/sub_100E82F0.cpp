char __thiscall sub_100E82F0(_WORD *this, int a2)
{
  char *v2; // edi
  _WORD *v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // esi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // ax
  int v8; // ecx
  int v9; // edi
  unsigned __int16 v10; // si
  int v11; // esi
  int v12; // eax
  char result; // al
  int v14; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  _WORD *v17; // [esp+1Ch] [ebp-4h]

  v2 = (char *)a2;
  v3 = this;
  v17 = this;
  if ( a2 )
  {
    v14 = a2;
    v4 = sub_100E51F0(this + 30, (int)&v14);
  }
  else
  {
    v4 = -1;
  }
  v16 = v4;
  if ( v4 != 0xFFFF )
  {
    v5 = (int)(v3 + 16);
    v6 = sub_100E4F20((int)(v3 + 16));
    if ( v6 != 0xFFFF )
    {
      do
      {
        v7 = sub_100E4FF0((_DWORD *)v5, v6);
        v8 = *((_DWORD *)v17 + 9);
        v9 = 20 * v6;
        v15 = v7;
        if ( *(unsigned __int16 *)(v9 + v8 + 12) == v16 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
            g_pMemAlloc,
            *(_DWORD *)(v9 + *(_DWORD *)(v5 + 4) + 8));
          if ( v6 != 0xFFFF )
          {
            sub_100E7540(v5, v6);
            *(_WORD *)(v9 + *(_DWORD *)(v5 + 4)) = v6;
            *(_WORD *)(v9 + *(_DWORD *)(v5 + 4) + 2) = *(_WORD *)(v5 + 20);
            --*(_WORD *)(v5 + 18);
            *(_WORD *)(v5 + 20) = v6;
          }
        }
        v6 = v15;
      }
      while ( (_WORD)v15 != 0xFFFF );
      v2 = (char *)a2;
    }
    v10 = v16;
    v3 = v17;
    sub_1022AF00(*(_DWORD *)(*((_DWORD *)v17 + 16) + 16 * (unsigned __int16)v16 + 12));
    sub_100E7FC0((int)(v3 + 30), v10);
  }
  if ( sub_10229D00(32) )
    v11 = sub_10229D20(v2);
  else
    v11 = 0;
  a2 = v11;
  a2 = (unsigned __int16)sub_100E7F60(v3 + 30, v2, &a2);
  if ( dword_10413188 )
    v12 = dword_10413188 + 4;
  else
    v12 = 0;
  if ( (unsigned __int8)sub_10229D70(v12, v2, 0) )
  {
    result = sub_100E81E0(v17, (int)v2, v11, a2);
    if ( !result )
      return Warning("Detected one or more errors parsing %s\n", v2);
  }
  else
  {
    Warning("Couldn't find metaclass definition file %s\n", v2);
    sub_1022AF00(v11);
    return sub_100E7FC0((int)(v3 + 30), a2);
  }
  return result;
}
