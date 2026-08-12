void __thiscall sub_100D26B0(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  if ( *(_BYTE *)(this + 1145) )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1132) )
    {
      *(_BYTE *)(this + 1145) = 0;
      v2 = *(_DWORD *)(this + 1120);
      if ( v2 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == v2 >> 12 )
      {
        v3 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
        if ( v3 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3) )
          {
            v4 = sub_100D1940((_DWORD *)this);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
            {
              v5 = *(_BYTE *)(this + 1125) == 0;
              if ( *(_BYTE *)(this + 1125) )
              {
                v6 = sub_100BF520(this, "Silencer");
                sub_100C1600(this, v6, 0);
                v5 = *(_BYTE *)(this + 1125) == 0;
              }
              *(_BYTE *)(this + 1125) = v5;
            }
          }
        }
      }
    }
  }
}
