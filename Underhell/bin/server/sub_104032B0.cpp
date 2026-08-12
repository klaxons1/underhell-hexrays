void __thiscall sub_104032B0(int this)
{
  _DWORD *v2; // edi
  int v3; // eax
  bool v4; // zf
  int v5; // edx

  v2 = (_DWORD *)sub_100D1940((_DWORD *)this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
  {
    if ( !*(_BYTE *)(this + 1393) )
    {
      sub_10402810(this, COERCE_FLOAT(1));
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1420) )
      {
        v3 = *(_DWORD *)(this + 1396);
        if ( v3 != -1 )
        {
          if ( v3 )
          {
            if ( v3 == 1 )
              sub_10401510(this, COERCE_FLOAT(1));
          }
          else
          {
            sub_10401440(this, COERCE_FLOAT(1));
          }
          *(_DWORD *)(this + 1396) = -1;
        }
      }
    }
    if ( (v2[823] & ~*(_DWORD *)(this + 1408) & 0x800) != 0 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1072))(this);
    }
    else
    {
      v4 = *(_BYTE *)(this + 1393) == 0;
      *(_BYTE *)(this + 1404) = 0;
      if ( v4 )
      {
        sub_103FF610((_DWORD *)this, COERCE_FLOAT(1));
        *(_DWORD *)(this + 9828) = 2;
        if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
          sub_103FE6A0((_DWORD *)this);
        else
          sub_103FDD20((_DWORD *)this);
      }
    }
    if ( (v2[823] & 0x800) == 0 )
      *(_DWORD *)(this + 1408) = 0;
    v5 = *(_DWORD *)this;
    if ( (v2[823] & 1) != 0 )
      (*(void (__fastcall **)(int))(v5 + 1068))(this);
    else
      (*(void (__fastcall **)(int))(v5 + 1036))(this);
    if ( *(_DWORD *)(dword_10698344 + 48) && *(_BYTE *)(dword_106B3CDC + 12) == 1 && (v2[823] & 1) == 0 )
      sub_100D2D00((float *)(this + 1132), (float *)(dword_106B31C8 + 12));
    sub_10402950((_DWORD *)this);
  }
  else
  {
    *(_DWORD *)(this + 1408) = 0;
  }
}
