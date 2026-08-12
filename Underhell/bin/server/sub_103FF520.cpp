void __thiscall sub_103FF520(int this)
{
  _DWORD *v2; // edi
  double v3; // st7
  _DWORD *v4; // edi

  sub_100D3B10((float *)this);
  v2 = (_DWORD *)sub_100D1940((_DWORD *)this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
  {
    v3 = *(float *)(this + 1428);
    sub_10424B10(*(float *)(this + 1428), *(float *)(this + 1424), 0.1);
    *(float *)(this + 1424) = v3;
    v4 = (_DWORD *)sub_101E7EA0(v2, 0);
    if ( v4 )
    {
      if ( !byte_106EFCE0 )
      {
        dword_106EFCE4 = sub_10019BA0((_DWORD *)this, "active");
        byte_106EFCE0 = 1;
      }
      sub_10019C10(v4, dword_106EFCE4, *(float *)(this + 1424));
    }
    if ( *(_BYTE *)(this + 1393) )
      sub_103FF4B0((_DWORD *)this);
    if ( *(float *)(this + 9856) <= (double)*(float *)(dword_106B31C8 + 12) )
    {
      sub_103FC6C0((_DWORD *)this);
      *(float *)(this + 9856) = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
  }
}
