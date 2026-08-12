int __thiscall sub_100DF940(int this)
{
  int v2; // edi
  char v3; // al
  int v4; // edi
  int v5; // edx
  float v6; // ecx
  const char *v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  const char *v12; // eax
  int v13; // eax
  double ArgList; // [esp+Ch] [ebp-230h]
  char Buffer[512]; // [esp+2Ch] [ebp-210h] BYREF
  _BYTE v17[4]; // [esp+22Ch] [ebp-10h] BYREF
  _DWORD v18[3]; // [esp+230h] [ebp-Ch] BYREF

  v2 = 1;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    sub_10429A00(Buffer, 0x200u, "(%d) Name: %s (%s)", v3);
    sub_100D5DE0((_DWORD *)this, 1, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = 2;
    if ( *(_DWORD *)(this + 96) )
    {
      sub_10429A00(Buffer, 0x200u, "GLOBALNAME: %s", *(_DWORD *)(this + 96));
      sub_100D5DE0((_DWORD *)this, 2, (int)Buffer, 0.0, 255, 255, 255, 255);
      v4 = 3;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(_DWORD *)(this + 584);
    v6 = *(float *)(this + 580);
    v18[2] = *(_DWORD *)(this + 588);
    v18[1] = v5;
    *(float *)v18 = v6;
    ArgList = v6;
    sub_10429A00(Buffer, 0x200u, "Position: %0.1f, %0.1f, %0.1f\n", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v2 = v4 + 1;
    if ( *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v17)
      || (*(int (__thiscall **)(int))(*(_DWORD *)this + 208))(this) )
    {
      v7 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v17);
      if ( !v7 )
        v7 = String;
      sub_10429A00(Buffer, 0x200u, "Model:%s", (char)v7);
      sub_100D5DE0((_DWORD *)this, v2++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    v8 = *(_DWORD *)(this + 232);
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 232) & 0xFFF) + 1];
      v10 = v8 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 232) & 0xFFF) + 2] == v10 )
      {
        if ( *v9 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 232) & 0xFFF) + 2] == v10 && (v11 = *v9) != 0 )
          {
            if ( *(_DWORD *)(v11 + 260) )
            {
              v12 = *(const char **)(v11 + 260);
            }
            else
            {
              v12 = *(const char **)(v11 + 92);
              if ( !v12 )
                v12 = String;
            }
          }
          else
          {
            v12 = "<<null>>";
          }
          sub_10429A00(Buffer, 0x200u, "DAMAGE FILTER:%s", (char)v12);
          sub_100D5DE0((_DWORD *)this, v2++, (int)Buffer, 0.0, 255, 255, 255, 255);
        }
      }
    }
  }
  if ( (*(_DWORD *)(this + 236) & 0x40000000) != 0 )
  {
    v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 504))(this, v18);
    sub_1011C120(v13, 16.0, 255, 0, 0, 1, 0.050000001);
  }
  return v2;
}
