bool __thiscall sub_10054080(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax

  v2 = *(_DWORD *)(this + 20);
  if ( v2 == -1 )
    return 0;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return 0;
  if ( !*v3 )
    return 0;
  if ( *(_BYTE *)(this + 108) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v4 = sub_1007DB30(100007);
    if ( sub_10023D10(*(_DWORD **)(this + 4), v4) )
      return 0;
  }
  if ( sub_10052150((_DWORD *)this) )
  {
    if ( sub_10052360(this) )
      return 0;
  }
  else if ( sub_10051CA0(this, 1.0) )
  {
    return 0;
  }
  return !*(_BYTE *)(this + 148) || sub_1001ED80((float *)(this + 144)) || sub_1004C220((_DWORD **)this, 100000);
}
