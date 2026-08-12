void __thiscall sub_102BDA70(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6[8]; // [esp+4h] [ebp-20h] BYREF

  v2 = *(_DWORD *)(this + 1244);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        *(_DWORD *)(this + 1244) = -1;
      }
    }
  }
  *(_BYTE *)(this + 1282) = 0;
  sub_102BD6F0(this, this, (int)v6);
}
