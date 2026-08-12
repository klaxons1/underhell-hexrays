int __thiscall sub_1019FF80(int this, int a2)
{
  _DWORD *v3; // ecx

  if ( *(_BYTE *)(this + 1196) )
  {
    v3 = *(_DWORD **)(this + 1192);
    if ( v3 )
    {
      sub_100F1890(v3, 0, 0, 0);
      *(_DWORD *)(this + 1192) = 0;
    }
  }
  return sub_1003CD40((_DWORD *)this, a2);
}
