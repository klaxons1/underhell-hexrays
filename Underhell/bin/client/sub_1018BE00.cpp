char __thiscall sub_1018BE00(int this)
{
  char result; // al
  int v3; // eax
  float *v4; // eax
  float v5; // [esp+4h] [ebp-4h]

  if ( sub_10029CF0((_DWORD *)this, 206) == -1 )
    return 0;
  if ( sub_1000BAC0((_DWORD *)this) )
  {
    v3 = sub_1000BAC0((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 504))(v3) )
    {
      v5 = *((float *)off_103DC81C + 3);
      *(float *)(sub_1000BAC0((_DWORD *)this) + 3016) = v5;
      v4 = (float *)off_103DC81C;
      if ( *(_DWORD *)(this + 1972) != *((_DWORD *)off_103DC81C + 3) )
      {
        *(float *)(this + 1972) = *((float *)off_103DC81C + 3);
        v4 = (float *)off_103DC81C;
      }
      if ( *(_DWORD *)(this + 1976) != *((_DWORD *)v4 + 3) )
        *(float *)(this + 1976) = v4[3];
    }
  }
  *(_BYTE *)(this + 1966) = 0;
  result = 1;
  *(float *)(this + 2136) = *((float *)off_103DC81C + 3);
  return result;
}
