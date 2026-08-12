_DWORD *__thiscall sub_10107510(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // edx
  const void *v8; // esi
  void *v9; // edi
  int v12; // [esp+18h] [ebp+8h]

  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  v3 = this + 4;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[3] = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
  v4 = a2[7];
  v5 = a2[4];
  this[7] = 0;
  v12 = v5;
  sub_10105EF0(this + 4, 0, v4, 0);
  if ( v4 <= 0 )
    return this;
  v6 = 0;
  v7 = v4;
  do
  {
    v8 = (const void *)(v6 + v12);
    v9 = (void *)(v6 + *v3);
    v6 += 1240;
    --v7;
    qmemcpy(v9, v8, 0x4D8u);
  }
  while ( v7 );
  return this;
}
