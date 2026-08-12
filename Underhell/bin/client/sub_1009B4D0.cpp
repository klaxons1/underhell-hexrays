_DWORD *sub_1009B4D0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(4);
  v1 = v0;
  if ( !v0 )
    return 0;
  *v0 = &CDummyMaterialProxy::`vftable';
  DevMsg(1, "CDummyMaterialProxy::CDummyMaterialProxy()\n");
  return v1;
}
