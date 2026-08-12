_DWORD *__thiscall sub_1009B490(_DWORD *this, char a2)
{
  *this = &CDummyMaterialProxy::`vftable';
  DevMsg(1, "CDummyMaterialProxy::~CDummyMaterialProxy()\n");
  *this = &IMaterialProxy::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
