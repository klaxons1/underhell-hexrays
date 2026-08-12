char __thiscall sub_10077460(int this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  if ( a2 == 800 )
    v2 = 0;
  v7 = v2;
  LOBYTE(v4) = sub_10076390((_BYTE *)this, (int)&v7);
  if ( (_BYTE)v4 != 0xFF || (v6 = 0, LOBYTE(v4) = sub_10076390((_BYTE *)this, (int)&v6), (_BYTE)v4 != 0xFF) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)v4 + 8);
    if ( v4 )
      *(float *)(v4 + 44) = *(float *)(dword_106B31C8 + 12);
  }
  return v4;
}
