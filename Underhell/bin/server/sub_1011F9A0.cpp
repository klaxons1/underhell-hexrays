int __thiscall sub_1011F9A0(int this)
{
  int v2; // ebx
  float *v3; // esi
  char v4; // al
  int v5; // eax
  int result; // eax
  _DWORD v7[64]; // [esp+8h] [ebp-104h] BYREF
  int v8; // [esp+108h] [ebp-4h]

  sub_100E38F0((float *)this);
  *(_BYTE *)(this + 971) = 1;
  v2 = 0;
  v8 = sub_1011F730((_DWORD *)this, (int)v7, 64);
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v3 = (float *)v7[v2];
      if ( v3[229] == *(float *)(this + 916) && v3[230] == *(float *)(this + 920) && v3[231] == *(float *)(this + 924) )
        break;
LABEL_17:
      if ( ++v2 >= v8 )
        goto LABEL_18;
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 728))(v7[v2]) )
    {
      if ( v3[182] == *(float *)(this + 728) && v3[183] == *(float *)(this + 732) && v3[184] == *(float *)(this + 736) )
      {
        v4 = 0;
        goto LABEL_15;
      }
    }
    else if ( v3[179] == *(float *)(this + 716)
           && v3[180] == *(float *)(this + 720)
           && v3[181] == *(float *)(this + 724) )
    {
      v4 = 0;
      goto LABEL_15;
    }
    v4 = 1;
LABEL_15:
    if ( v4 )
      *(_BYTE *)(this + 971) = 0;
    goto LABEL_17;
  }
LABEL_18:
  v5 = *(_DWORD *)(this + 800);
  if ( !v5 )
    return sub_1011F8E0(this, 1);
  result = v5 - 1;
  if ( !result )
    return sub_1011F8E0(this, 0);
  return result;
}
