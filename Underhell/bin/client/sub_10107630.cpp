__int16 __thiscall sub_10107630(int this, _DWORD *a2, int *a3)
{
  int v4; // edx
  unsigned __int16 v5; // ax
  int v6; // edi
  int v7; // edx
  _DWORD v9[3]; // [esp+Ch] [ebp-24h] BYREF
  void **v10; // [esp+18h] [ebp-18h] BYREF
  _DWORD v11[5]; // [esp+1Ch] [ebp-14h] BYREF

  v4 = *a3;
  v9[0] = *a2;
  v9[2] = a3[1];
  memset(v11, 0, sizeof(v11));
  v10 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
  v9[1] = v4;
  sub_10107340((int *)&v10, (int)(a3 + 2));
  sub_10105E00((_WORD *)this, (int)v9, (unsigned __int16 *)&a3, &a2);
  v5 = sub_10106EC0(this);
  v6 = v5;
  sub_10106BA0(this, v5, (unsigned __int16)a3, (char)a2);
  v7 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( 44 * v6 + v7 != -8 )
    sub_10107510((_DWORD *)(44 * v6 + v7 + 8), v9);
  v10 = &CCopyableUtlVector<ModelPoseDebugInfo::InfoText>::`vftable';
  sub_1011A810(v11);
  return v6;
}
