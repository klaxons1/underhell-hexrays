void __thiscall sub_103A98B0(int this)
{
  int v2; // ecx

  sub_10328900((_BYTE *)this, (int)"TakePhoto");
  v2 = *(_DWORD *)(this + 3888);
  if ( *(_DWORD *)(v2 + 820) )
  {
    sub_10242820(v2, 0, 0.0);
  }
  else
  {
    sub_102428B0(v2, 0.5, 0.0);
    sub_10242820(*(_DWORD *)(this + 3888), 255, 0.0);
    sub_1005C620(
      (_BYTE *)(*(_DWORD *)(this + 3888) + 116),
      255,
      0,
      0,
      HIBYTE(*(_DWORD *)(*(_DWORD *)(this + 3888) + 116)));
  }
}
