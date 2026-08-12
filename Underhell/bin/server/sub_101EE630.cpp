int __thiscall sub_101EE630(int this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  double v8; // st6
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-4h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1092))(this);
  v3 = (_DWORD *)this;
  if ( !v2 )
    goto LABEL_4;
  sub_100F59C0((_DWORD *)this);
  if ( 0.0 == *(float *)(this + 4380) )
  {
    v3 = (_DWORD *)this;
LABEL_4:
    v4 = sub_100F5E70(v3);
    goto LABEL_5;
  }
  v4 = (int)*(float *)(this + 4380);
LABEL_5:
  v5 = *(_DWORD *)(this + 3484);
  if ( !v5 )
    v5 = v4;
  v6 = *(float *)(this + 2256);
  v12 = v5;
  if ( 0.0 == v6 )
    return v5;
  v8 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 3496)) / *(float *)(this + 2256);
  if ( v8 < 1.0 )
  {
    v11 = (float)v12;
    v10 = (float)*(int *)(this + 3492);
    v9 = v8;
    return (int)sub_101E1A80(v9, 0.0, 1.0, v10, v11);
  }
  else
  {
    sub_100F7C10((_DWORD *)(this + 3492), &v12);
    return v12;
  }
}
