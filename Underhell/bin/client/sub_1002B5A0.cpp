char __thiscall sub_1002B5A0(int this, char a2)
{
  int v3; // edi
  _BYTE v5[12]; // [esp+4h] [ebp-20h] BYREF
  _BYTE v6[12]; // [esp+10h] [ebp-14h] BYREF
  float v7; // [esp+1Ch] [ebp-8h]
  int v8; // [esp+20h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(this + 1192) )
  {
    v3 = 0;
    v7 = *(float *)(this + 1816);
    if ( !*(_BYTE *)(this + 1760) )
      **(_BYTE **)(this + 1852) = sub_1002A860((_DWORD *)this, *(_DWORD *)(this + 1808));
    if ( sub_10039720(&a2, v5, v6, &v8) )
    {
      if ( v7 != *(float *)(this + 1816) )
        v3 = 8;
      if ( v8 )
        sub_1003CEE0(this);
      sub_10034660(v5, v6, v3);
    }
    else if ( v8 )
    {
      sub_1003CEE0(this);
      return 1;
    }
  }
  return 1;
}
