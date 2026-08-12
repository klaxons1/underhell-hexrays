char __thiscall sub_1018BD20(int this)
{
  char result; // al
  int v3; // eax
  double v4; // st6
  double v5; // st7
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]

  if ( sub_10029CF0((_DWORD *)this, 206) == -1 )
    return 0;
  if ( sub_1000BAC0((_DWORD *)this) )
  {
    v3 = sub_1000BAC0((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 504))(v3) )
    {
      v6 = *((float *)off_103DC81C + 3) + 0.25;
      *(float *)(sub_1000BAC0((_DWORD *)this) + 3016) = v6;
      v4 = *((float *)off_103DC81C + 3) + 0.25;
      v7 = v4;
      if ( *(_DWORD *)(this + 1972) != LODWORD(v7) )
        *(float *)(this + 1972) = v4;
      v5 = *((float *)off_103DC81C + 3) + 0.25;
      v8 = v5;
      if ( *(_DWORD *)(this + 1976) != LODWORD(v8) )
        *(float *)(this + 1976) = v5;
    }
  }
  *(_BYTE *)(this + 1966) = 0;
  result = 1;
  *(float *)(this + 2136) = *((float *)off_103DC81C + 3) + 0.1;
  return result;
}
