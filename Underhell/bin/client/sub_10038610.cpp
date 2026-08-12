double __thiscall sub_10038610(int this, char a2)
{
  int v2; // ebx
  char v4; // al
  float *v6; // edi
  float v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+10h] [ebp-4h]
  int v9; // [esp+10h] [ebp-4h]

  v2 = 1;
  v8 = 1;
  if ( sub_1000FCC0() )
  {
    v2 = 2;
    v8 = 2;
  }
  if ( !*(_BYTE *)(this + 323) && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 428))(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 480))(dword_1041315C) )
        goto LABEL_9;
    }
    else if ( *((int *)off_103DC81C + 5) <= 1 )
    {
LABEL_9:
      v9 = v2;
      if ( (unsigned __int8)sub_100755A0() )
        v9 = v2 + *(_DWORD *)(dword_10404B84 + 48);
      v4 = *(_BYTE *)(this + 1110);
      if ( v4 && *(_BYTE *)(this + 1109) )
        return (double)v9 * *((float *)off_103DC81C + 7);
      if ( (a2 & 1) != 0 && v4 )
        return (double)v9 * *((float *)off_103DC81C + 7);
      if ( (a2 & 2) != 0 && *(_BYTE *)(this + 1109) )
        return (double)v9 * *((float *)off_103DC81C + 7);
    }
    v6 = (float *)off_103DC81C;
    v7 = (double)(v2 + (int)(sub_10073EA0() / v6[7] + 0.5)) * v6[7];
    return sub_10038560((_DWORD *)this, v7);
  }
  return (double)v8 * *((float *)off_103DC81C + 7);
}
