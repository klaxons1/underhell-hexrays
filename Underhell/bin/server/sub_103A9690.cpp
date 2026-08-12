void __thiscall sub_103A9690(unsigned int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  float v18[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_10328900((_BYTE *)this, (int)"TakePhoto");
  sub_102428B0(*(_DWORD *)(this + 3888), 1.4, 0.0);
  sub_10242820(*(_DWORD *)(this + 3888), 255, 0.0);
  sub_1005C620(
    (_BYTE *)(*(_DWORD *)(this + 3888) + 116),
    255,
    255,
    255,
    HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3888) + 116)));
  sub_103A50F0((float *)this, v18);
  v2 = *(_DWORD *)(this + 2420);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
        {
          v6 = *(_DWORD *)(this + 2420);
          if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v6 >> 12 )
            v7 = 0;
          else
            v7 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
          sub_1010DD80((_DWORD *)(this + 3972), __SPAIR64__(this, v7), 0.0);
          v8 = *(_DWORD *)(this + 2420);
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
          sub_103A6EB0(this, v9);
        }
        v10 = *(_DWORD *)(this + 2420);
        if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
        if ( sub_100D7680(v11) )
        {
          v12 = *(_DWORD *)(this + 2420);
          if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
          sub_1010DD80((_DWORD *)(this + 3996), __SPAIR64__(this, v13), 0.0);
          v14 = *(_DWORD *)(this + 2420);
          if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] != v14 >> 12 )
            v15 = 0;
          else
            v15 = off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
          v16 = dword_106EAA98;
          v17 = sub_100D7680(v15);
          if ( v16 > 0 )
            (*(void (__thiscall **)(int, int, _DWORD, unsigned int))(*(_DWORD *)v17 + 896))(v17, v16, 0, this);
        }
      }
    }
  }
  sub_10039F40((int *)this, dword_106EAA90);
  *(_BYTE *)(this + 4021) = 1;
}
