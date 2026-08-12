void __thiscall sub_10050200(float *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // edi

  if ( *a2 != 100000 )
  {
    if ( *a2 == 100001 )
    {
      this[5] = *(float *)(dword_106B31C8 + 12) + 5.0;
    }
    else if ( *a2 == 100002 )
    {
      v3 = *((_DWORD *)this + 1);
      this[12] = this[13];
      sub_10070B10(v3);
      v4 = *((_DWORD *)this + 1);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(*((_DWORD *)this + 1));
        this[8] = *(float *)(v4 + 580);
        this[9] = *(float *)(v4 + 584);
        this[10] = *(float *)(v4 + 588);
        this[11] = 36.0;
      }
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
    else
    {
      sub_1004B450(this, (int)a2);
    }
  }
}
